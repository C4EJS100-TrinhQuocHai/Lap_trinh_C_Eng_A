#include <stdio.h>
/*
	viet chuong trinh cho nguoi dung nhap vao tuoi, ten
	neu tuoi >=18 thi duoc vao rap xem phim CGV
	neu tuoi <18 khong du tuoi xem phim.
*/
int main() {
  int age;
  char fullName[100];
  printf("moi ban nhap vao tuoi: ");
  scanf("%d",&age);
  // xoa bo nho dem di
  fflush(stdin);
  printf("\n moi ban nhap ten day du: ");
  fgets(fullName,100,stdin);
  if(age>=18){
  	printf("ban du tuoi di xem phim CGV!");
  }else{
  	printf("ban khong du tuoi di xem phim CGV!");
  }
  

  return 0;
}

