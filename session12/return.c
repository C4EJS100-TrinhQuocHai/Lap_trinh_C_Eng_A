#include <stdio.h>

// khai bao

int sum(int a, int b){
	return a+b;
}
int main() {
 	/*
 		tu khoa return
 		+ return la dung chuong trinh
 		+ return chi ap dung trong ham
 		+ return 1 ( tra ve ket qua cua ham)
	 */
	 /*
	 	khai bao 1 ham tinh tong 2 so nguyen do nguoi dung nhap
	 	kiem tra xem tong do la so chan hay so le
	 */
	 int a, b;
	 printf("moi nhap so thu nhat");
	 scanf("%d",&a);
	 printf("moi nhap so thu hai");
	 scanf("%d",&b);
	 if(sum(a,b)%2==0){
	 	printf("ket qua tong la so chan");
	 }else{
	 	printf("ket qua tong la so le");
	 }
	  
	 
	 
  return 0;
}

