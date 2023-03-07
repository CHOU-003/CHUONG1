#include <stdio.h>

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
int TestSHT(int n)
{
    int Tong=0;
    for(int i=1; i <n; i++)
    {
        if(n % i ==0)
        {
            Tong = Tong + i;
        }
    }   
    if(n==0)
    {
        return 1;
    }
    else {
        return 0;
    }
}
void XepGiamSHT(int a[], int n)
{
     for(int i=0; i < n-1; i++){
        if(TestSHT(a[i]) == 1){
        for(int j=i+1; j < n; j++){
            if(TestSHT(a[i]) == 1 && a[i] < a[j]){
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
    XepGiamSHT(a,n);

    return 0;
}
