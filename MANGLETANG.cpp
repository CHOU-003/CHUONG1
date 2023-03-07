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
void Tangle(int a[], int n)
{
     for(int i=0; i < n-1; i++){
        if(a[i] % 2 != 0){
        for(int j=i+1; j < n; j++){
            if(a[i] % 2 != 0 && a[i] > a[j]){
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
    Tangle(a,n);

    return 0;
}