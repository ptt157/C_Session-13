#include <stdio.h>

// Ham tim uoc chung lon nhat (GCD) su dung thuat toan Euclid
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Nhap hai so nguyen
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    // Tim va in ra GCD
    int gcd = findGCD(num1, num2);
    printf("Uoc chung lon nhat cua %d va %d la %d\n", num1, num2, gcd);

    return 0;
}

