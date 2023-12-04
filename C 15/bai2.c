#include <stdio.h>
#include <string.h>
struct Student{
	char hoVaTen[50];
	int tuoi;
	char soDienThoai[15];
	char email[100];
};
void nhap(struct Student* sv){
	printf("Nhap ho va ten: ");
	gets(sv->hoVaTen);
	printf("Nhap tuoi: ");
	scanf("%d", &sv->tuoi);
	printf("Nhap so dien thoai: ");
	scanf("%s", sv->soDienThoai);
	printf("Nhap email: ");
	scanf("%s", sv->email);
}
void xuat(struct Student* sv){
	printf("Ho va ten sinh vien: %s\n Tuoi: %d \n So dien thoai: %s \n Email: %s", sv->hoVaTen, sv->tuoi, sv->soDienThoai, sv->email);
}
int main(){
	struct Student sv;
	nhap(&sv);
	xuat(&sv);
	
}



