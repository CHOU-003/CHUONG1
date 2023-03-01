#include <stdio.h>
#include <conio.h>

struct DONTHUC
{
    float n,a;
} pj;

typedef struct Donthuc DONTHUC;
{
    void NhapDonThuc(DONTHUC &);
    void XuatDonThuc(DONTHUC);
};

void NhapDonThuc(DONTHUC &ps)
{
    printf("Nhap vao gia tri n và giá trị a: ");
    scanf("%d%d", &ps.n, %ps.a);
}

void XuatDonThuc(DONTHUC)
{
    printf("%d%d", ps.n, ps.a);
}

void xuatDonThuc(DONTHUC ps){
    printf("P(x) = %.2lfx^%.2lf", ps.a ,ps.n);
}
int main()
{
    
    NhapDonThuc(pj);
    XuatDonThuc(pj);

    getch();
    return 0;
}
