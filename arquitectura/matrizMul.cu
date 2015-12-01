#include <bits/stdc++.h>
#include <cuda.h>
#define H 1000
#define W 1000

using namespace std;

void init(int* v){
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      v[i*W+j] = 2;
    }
  }
}

void mult(int *A, int *B,int *C){
  int aux = 0;
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      aux = 0;
      for(int k=0; k<H; k++)
        aux += A[i*W+k]* B[k*W+j];
     C[i*W+j] = aux;
    }
  }
}

void mostrar(int *v){
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cout<<v[i*W+j]<<" ";
    }
    cout<<endl;
  }
}

__global__ void multMat(int *d_A, int *d_B,int *d_C){
  int i = blockIdx.y*blockDim.y+threadIdx.y;
  int j = blockIdx.x*blockDim.x+threadIdx.x;
  if(i < H && j < W){
    int Pvalue = 0;
    for(int k=0; k<H; k++){
       Pvalue += d_A[i*W+k] * d_B[k*W+j];
    }
    d_C[i*W+j] = Pvalue;
  }
}


int main(){
  clock_t start, end;
  double cpu_time_used;
  int size = H*W*sizeof(int);
  int *A = (int*)malloc(size);
  int *B = (int*)malloc(size);
  int *C = (int*)malloc(size);
  int *D = (int*)malloc(size);

  init(A);
  init(B);
  start = clock();
  mult(A,B,C);
  //mostrar(A);
  //mostrar(B);
  // mostrar(C);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Tiempo invertido CPU = %lf s\n",cpu_time_used);

  int *d_A,*d_B,*d_D;
  float blockSize = 32;
  dim3 dimBlock(blockSize,blockSize);
  //number of elements over threads per block
  dim3 dimGrid(ceil(W/float(blockSize)),ceil(H/float(blockSize)),1);

  cudaMalloc((void**)&d_A, size);
  cudaMalloc((void**)&d_B, size);
  cudaMalloc((void**)&d_D, size);

  start = clock();

  cudaMemcpy(d_A,A,sizeof(int)*H*W,cudaMemcpyHostToDevice);
  cudaMemcpy(d_B,B,sizeof(int)*H*W,cudaMemcpyHostToDevice);
  //add<<<(N + M-1) / M, M>>>(d_a, d_b, d_c, N);
  multMat<<<dimGrid,dimBlock>>>(d_A,d_B,d_D);
  //getting back to the cpu
  cudaMemcpy(D,d_D,sizeof(int)*H*W,cudaMemcpyDeviceToHost);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Tiempo invertido GPU = %lf s\n",cpu_time_used);

  mostrar(D);
  free(A); free(B); free(C); free(D);

  cudaFree(d_A); cudaFree(d_B); cudaFree(d_D);

}
