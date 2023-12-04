#include <stdio.h>
struct Student{
	char hoVaTen[50];
	int tuoi;
	char soDienThoai[15];
	char email[100];
};
int main(){
	struct Student sv = {"Thai Nguyen Gia Bao", 18, "0333345386", "thainguyengiabao082105@gmail.com"};
	printf("Ho va ten sinh vien: %s\n Tuoi: %d \n So dien thoai: %s \n Email: %s", sv.hoVaTen, sv.tuoi, sv.soDienThoai, sv.email);
}
