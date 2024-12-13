#include <stdio.h>
/*
	chuoi (string) trong c
	ban chat no la 1 cai mang chua nhieu ki tu.
	I- cach khai bao
*/
int main() {
	// 	char fullName[]= "Vu Hong Van";
	// 	printf("%s",fullName);
	// khai bao string cho nguoi dung nhap
	char fullName[5];
	printf("moi nhap ten day du cua ban: ");
	//	scanf("%s",fullName);
	// ham scanf chi nhan gia tri den dau cach.
	/*
		1. Dung ham gets()
		2. Dung ham fgets()
		So sanh su khac nhau giua 2 ham tren
		 + doi voi gets se lay du so luong phan tu khi nhap
		 neu vuot qua kich thuoc cua mang.
		 + doi voi fgets se lay du so luong phan tu bang so
		 kich thuoc cua mang.
		 
	*/
	//		gets(fullName);
	fgets(fullName,5,stdin);
	printf("ten cua ban: %s",fullName);
	
 	

  return 0;
}

