#include <stdio.h>

void Nhapmang(int a[], int n)
{
    if(n > 0)
    {
    Nhapmang(a, (n - 1));
    printf("Nhap phan tu thu %d:", n-1);
    scanf("%d", &a[n - 1]);
    }
    
}
int Tongmang(int a[], int n)
{
    if(n == 1)
    {
        return [0];
        return a[n -1] + Tongmang(a, n -1);
    }
}
int main()
{
    int n,a[50];
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    Nhapmang(a, n);
    Tongmang(a ,n);
    printf("Tong la: %d", Tongmang(a, n));
}