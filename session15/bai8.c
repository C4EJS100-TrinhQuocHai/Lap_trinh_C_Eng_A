#include <stdio.h>
/*
	Khai báo và gán giá tri cho 1 chuoi bat ki, 
	Viet chuong trinh in ra cac chu cai dau tien viet hoa
	
	B1: Khai bao text va gan gia tri
	B2: 	
*/
int main() {
  char text[]="hello world";
   text[0]=toupper(text[0]);
   printf("%s",text);

  return 0;
}

