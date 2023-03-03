#include <stdio.h>

int Giaithua(int n)
{
    if(n==0)
        return 1;
    return (n*Giaithua(n - 1));
}
int main()
{
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    printf("Giai thua cua n la: %d", Giaithua(n));
    return 0;
}