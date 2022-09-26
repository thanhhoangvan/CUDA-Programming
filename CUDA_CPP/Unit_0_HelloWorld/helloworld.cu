#include<stdio.h> // Khai báo thư viện chuẩn cho xuất kết quả ra màn hình

// Khai báo hàm được chạy trên GPU.
// Hàm có thể được gọi từ hàm main
__global__ void cuda_hello(){ 
    printf("Hello World from GPU!\n");
}

// Hàm main, còn được gọi là "Kernels"
int main() {
    cuda_hello<<<1,10>>>(); // kernel launch - Khởi chạy hàm trên GPU với tham số (1. 10)
    cudaDeviceSynchronize(); // Chặn cho tới khi các lệnh trên hoàn thành.
    return 0;
}