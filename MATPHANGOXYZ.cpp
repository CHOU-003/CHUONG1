#include <stdio.h>

struct DiemOxyz{
	float x,y,z;
};

typedef struct DiemOxyz DIEM;

void nhapDiem(DIEM &d);
void xuatDiem(DIEM);

void nhapDiem(DIEM &d){
	printf("nhap diem x0 = ");
	scanf("%f",&d.x);
	printf("nhap diem y0 = ");
	scanf("%f",&d.y);
	printf("nhap diem z0 = ");
	scanf("%f",&d.z);
}

void xuatDiem(DIEM d){
	printf("M(%.2f,%.2f,%.2f)",d.x,d.y,d.z);
}

int main(){
	DIEM d;
	nhapDiem(d);
	xuatDiem(d);

	return 0;
}