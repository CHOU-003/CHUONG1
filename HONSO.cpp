#include <stdio.h>


struct HONSO
{
    int a,b,c;
};
void NhapHonSo(struct HONSO &s)
{
    printf("Nhap Hon so.\n");
    printf("Nhap so nguyen: ");
    scanf("%d", &s.a);
    printf("Nhap tu: ");
    scanf("%d", &s.b);
    printf("Nhap mau: ");
    scanf("%d", &s.c);
}

void XuatHonSo(struct HONSO &s)
{
    printf("%d%d/%d", s.a, s.b, s.c);
}

int main()
{
    struct HONSO HS;
    NhapHonSo(HS);
    XuatHonSo(HS);
}