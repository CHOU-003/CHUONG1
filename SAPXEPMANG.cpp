#include <stdio.h>

void Nhapmang(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
void Xuatmang(int a[], int n)
{
    for(int i=0; i < n; i++){
        printf("%d", a[i]);
         if(a[i] == 0)
            break;
    }
}
void SapXep(int a[], int n)
{
    for(int i=0; i < n-1; i++){
        for(int j=i+1; j < n; j++){
            if(a[i] > a[j]){
                int sx= a[i];
                a[i] = a[j];
                a[j] = sx;
            }
        }
    }
    printf("\nMang sau khi sap xep la: ");
    Xuatmang(a,n);
}
int main(){
    int a[50], n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    Nhapmang(a,n);
    printf("\nMang sau khi nhap la: ");
    Xuatmang(a,n);
    SapXep(a,n);

    return 0;

}