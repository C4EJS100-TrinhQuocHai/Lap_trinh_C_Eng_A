#include <stdio.h>
/*
	Viet chuong trinh cho nguoi dung nhap vao 1 chuoi bat ki?
	==> kiem tra xem chuoi nguoi dung nhap vao co doi xung k?
	INPUT: heeh
	OUTPUT: doi xung
	INPUT: abcdcba
	OUTPUT: doi xung
	INPUT: hello
	OUTPUT: khong phai doi xung.
	char text1[100];= hello;
	char text2[100];
	text2= olleh;
*/

int main() {
  char text1[100];// heeh
  char text2[100];
  printf("moi nhap chuoi can kiem tra: ");
  fgets(text1,100,stdin);
  int length= strlen(text1);
  for(int i=0; i<length; i++){
  	text2[i]= text1[length-1-i];
  }
  fflush(stdin);
  printf("text2: %s", text2); // heeh
  // xoa ki tu \n;
  // 
  
  if(strcmp(text1,text2)==0){
  	// chung to 2 chuoi doi xung
	// printf("\n %s la chuoi doi xung",text1);
  }else{
  	// khong phai doi xung
	printf("\n %s khong phai chuoi doi xung", text1);
  }
  
  

  return 0;
}

