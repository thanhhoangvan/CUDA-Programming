#include<stdio.h>
#include<stdlib.h>

#define N 9


// function add two vector by two array.
// parameter is pointer, argument is array
void vector_add(float *out, float *a, float *b, int n){
    for(int i = 0; i < n; i++){
        out[i] = a[i] + b[i];
    }
}


int main(){
    float *a, *b, *out;

    // Khởi tạo bộ nhớ
    a   = (float*)malloc(sizeof(float) * N);
    b   = (float*)malloc(sizeof(float) * N);
    out = (float*)malloc(sizeof(float) * N);

    // Khởi tạo giá trị cho hai vector
    for(int i = 0; i < N; i++){
        a[i] = 1.0f;
        b[i] = 2.0f;
    }

    // Cộng tổng từng phần tử trong hai vector a và b, lưu vào vector out
    // Sử dụng phương pháp truyền pointer vào hàm, giống truyền tham biến
    vector_add(out, a, b, N);

    // In kết quả
    for (int i=0;i<N;i++){
        printf("%e + %e = %e\n",a[i], b[i], out[i]);
    }
}