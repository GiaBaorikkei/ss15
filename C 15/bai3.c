#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sinhVien{
	char hoVaTen[50],soDienThoai[15],email[50];
	int tuoi;
};
void printfMenu(){
		printf("1. Nhap thong tin\n");
		printf("2. Them thong tin\n");
		printf("3. Sua thong tin\n");
		printf("4. Xoa thong tin\n");
		printf("5. In thong tin\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban la: ");
}
void nhap_thong_tin(struct sinhVien *sinhVien) {
    printf("Nhap ten sinh vien: ");
    scanf("%49[^\n]", sinhVien->hoVaTen);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sinhVien->tuoi);
    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", sinhVien->soDienThoai);
    printf("Nhap email sinh vien: ");
    scanf("%s", sinhVien->email);
}
void them_thong_tin(struct sinhVien *dsSinhVien, int *value) {
    struct sinhVien sinhVien;
    nhap_thong_tin(&sinhVien);
    dsSinhVien[*value] = sinhVien;
    (*value)++;
    printf("Da them thong tin sinh vien.\n");
}
void sua_thong_tin(struct sv *dsSinhVien[], int value) {
    int location;
    printf("Nhap vi tri muon sua: ");
    scanf("%d", &location);
    if (location >= 0 && location < value) {
        nhap_thong_tin(&dsSinhVien[location]);
        printf("Sua thong tin o vi tri %d thanh cong.\n", location);
    } else {
        printf("Vi tri khong hop le.\n");
    }
}
void xoa_thong_tin(struct sinhVien *dsSinhVien, int *value) {
    int location;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &location);
    if (location >= 0 && location < *value) {
        for (int i = location; i < *value - 1; i++) {
            dsSinhVien[i] = dsSinhVien[i + 1];
        }
        (*value)--;
        printf("Xoa thong tin sinh vien thanh cong.\n");
    } else {
        printf("Vi tri khong hop le.\n");
    }
}

in_thong_tin(struct sinhVien dsSinhVien[], int value){
	printf("Thong tin sinh vien:\n");
    for (int i = 0; i < value; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s\n", dsSinhVien[i].hoVaTen);
        printf("Tuoi: %d\n", dsSinhVien[i].tuoi);
        printf("So dien thoai: %s\n", dsSinhVien[i].soDienThoai);
        printf("Email: %s\n", dsSinhVien[i].email);
        printf("\n");
	}
}
typedef struct sinhVien sv;
int main(){
	sv dsSinhVien[100];
	int value=0;
	do{
		printfMenu();
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				nhap_thong_tin(dsSinhVien);
				break;
			case 2:
				them_thong_tin(dsSinhVien,&value);
				break;
			case 3:
				sua_thong_tin(dsSinhVien,value);
				break;
			case 4:
				xoa_thong_tin(dsSinhVien,&value);
				break;
			case 5:
				in_thong_tin(dsSinhVien,value);
				break;
			case 6:
				exit(0);
				break;
		}
	}while(1==1);
}
