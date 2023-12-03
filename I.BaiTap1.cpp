//Bai 1. Nhập vào một số nguyên n (32 <= n <= 255) và in ra ký tự có mã ASCII của n
#include <stdio.h>
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Ki tu n co ma ASCII la: %c\n", n); // can in ra ki tu co ma ASCII thi phai dinh dang du lieu ve kieu %c
    getchar();
    return 0;
}