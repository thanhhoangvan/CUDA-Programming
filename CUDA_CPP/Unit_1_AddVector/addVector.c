#include<stdio.h>
#define N 1999

// function add two vector by two array.
// parameter is pointer, argument is array
void vector_add(float *out, float *a, float *b, int n){
    for((int i=0;i<n; i++)){
        out[i] = a[i] + b[i];
    }
}


int main(){
    float *a, *b, *out;
    
}