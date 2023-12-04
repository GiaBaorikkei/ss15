#include <stdio.h>
#include <string.h>
int main(){
//	struct Book {
//		int id;
//		char name[50];
//		char author[20];
//		int price;
//	};
//	
//	struct Book book1 = {1, "Harry Potter", "J.K. Rowling", 100};
//	struct Book book2 = {2, "Lord of the rings", "J. R. R. Tolkien", 130};
//	struct Book book3 = {3, "A song of ice and fire", "George R. R. Martin", 200};
//	struct Book book4 = {4, "Eragon", "Cristopher Paolini", 140};
//	
//	printf("Ten cua cuon sach 1 la %s \n", book1.name);
//	printf("Tac gia cua cuon sach 1 la %s \n", book1.author);
//	printf("Gia cua cuon sach 1 la %dVND\n", book1.price);
//	
//	printf("Ten cua cuon sach 2 la %s \n", book2.name);
//	printf("Tac gia cua cuon sach 2 la %s \n", book2.author);
//	printf("Gia cua cuon sach 2 la %dVND\n", book2.price);
	
//	struct Book book1 = {
//		4, 
//		"Eragon",
//		"Christopger Paolini",
//		140
//	};
//	
//	struct Book book2, book3;
//	book2 = book3;
//	memcpy(&book3, &book1, sizeof(struct Book));
//	
//	printf("Book 2's name = %s\n", book2.name);
//	printf("Book 3's name = %s\n", book3.name);
//	
	struct Book{
		int id;
		char name[50];
		char author[20];
		int price;
	};
	struct Library{
		char name[50];
		char address [100];
		struct Book book;
	};
		
	struct Library libertyLib = {
		"Liberty"
		"Km10 Nguyen Trai",
        {1, "Ur the apple of my eye", "Random author", 100}};
			
	printf("Book %s of Library %s/n", libertyLib. book. name, libertyLib.name);
}
