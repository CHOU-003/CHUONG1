#include <stdio.h>
#include <math.h>
#include <conio.h>

void Nhapmang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Mang a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
void Xuatmang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
}
int TestSNT(int n)
{
    if(n < 2)
    {
        return 0;
    }
    else if(n > 2)
    {
        if(n % 2 == 0)
        {
            return 0;
        }
        for(int i=3; i <= sqrt((double)n); i+=2)
        {
            if(n % i ==0)
                return 0;
        }
    }
   return 1;
}
void XepTang(int a[], int n)
{
     for(int i=0; i < n-1; i++){
        if(TestSNT(a[i]) == 1){
        for(int j=i+1; j < n; j++){
            if(TestSNT(a[i]) == 1 && a[i] > a[j]){
                int sx= a[i];
                a[i] = a[j];
                a[j] = sx;
            }
        }
    }
}
            
    printf("\nMang sau khi sap xep la: ");
    Xuatmang(a,n);
}
int main(){
    int a[50], n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    Nhapmang(a,n);
    printf("\nMang vua nhap la: ");
    Xuatmang(a,n);
    XepTang(a,n);

    return 0;
}
