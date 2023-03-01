#include <stdio.h>
#include <conio.h>

struct Diem
{
    int xo, yo;
};

typedef struct Diem DIEM;
 
    void NhapDiem(DIEM &);
    void XuatDiem(DIEM);

void NhapDiem(DIEM, &ps)
{
        int item;
        printf("Nhap vao diem x0 va y0: ");
        scanf("%d%d", &ps.xo, &ps.yo);
}

void XuatDiem(DIEM ps)
{
        printf("%d%d", ps.xo, ps.yo);
}

int main()
{
        DIEM ps;
        NhapDiem(ps);
        XuatDiem(ps);
        getch();
        return 0;
}
 

