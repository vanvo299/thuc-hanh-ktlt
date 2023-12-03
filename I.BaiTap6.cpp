// BAi 6. Viết chương trình nhập một chữ cái ch và in ra chữ hoa nếu ch là chữ thường; ngược lại, in ra chữ thường nếu ch là chữ hoa
#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
     char ch;
     printf("Nhap vao chu cai: ");
     scanf("%c", &ch);
     if (ch >= 'a' && ch <= 'z') {
        ch -= 32; // neu la chu thuong thi ki tu tru di 32 don vi
        printf("ki tu %c sau khi thay doi la: %c\n", ch, ch);
     }
     else if (ch >= 'A' && ch <= 'Z') {
        ch += 32; // neu la chu hoa thi ki tu cong vao 32 don vi
        printf("Ki tu %c sau khi thay doi la: %c\n", ch, ch);
    } 
    return 0;
}