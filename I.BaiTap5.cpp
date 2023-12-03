//Bai 5. Nhap 3 so a b c tu ban phim, tim so trung gian cua 3 so do
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    // tim gtln
    int max_value = a;
    if (b > max_value) {
        max_value = b;
    }
     if (c > max_value) {
        max_value = c;
    }
    // tim gtnn
    int min_value = a;
    if (b < min_value) {
        min_value = b;
    }
    if (c < min_value) {
        min_value = c;
    }
    printf("Gia tri lon nhat cua 3 so la: %d\n", max_value);
    printf("Gia tri nho nhat cua 3 so la: %d\n", min_value);
    // tim so trung gian
    int so_trung_gian;
    so_trung_gian = (a + b + c) - max_value - min_value;
    printf("So trung gian cua 3 so %d %d %d la: %d\n", a, b, c, so_trung_gian);
    return 0;
}