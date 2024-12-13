#include <stdio.h>
/*
	truy xuat cac phan tu trong string
*/
int main() {
  char fullName[]="Vu Hong Van ";// '\0'
  // in ra cac phan tu trong chuoi fullName;
  /*
  	+ tinh duoc trong chuoi fullName co bao nhieu ki tu.
  		+ int size= sizeof(fullName)/sizeof(char);
  	+ dung for duyet qua cac phan tu trong chuoi fullName.
  */
	//   int size= sizeof(fullName)/sizeof(char);
   int size= strlen(fullName);
   printf("%d \n",size);
   for(int i=0; i<size-1fullName; i++){
   	printf("ki tu thu %d la: %c \n",i+1,fullName[i]);
   }
  return 0;
}

