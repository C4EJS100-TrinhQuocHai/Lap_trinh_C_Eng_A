#include <stdio.h>
/*
	Con tro trong lap trinh C
*/
int main() {
  int a=5;
  int b=6;
  int *ptr; // khai bao con tro co ten ptr;
  // chuong trinh se tao ra vung nho trong RAM  cho bien a
  // tao ra bien a mot dia chi.
 //  printf("dia chi cua bien a: %d\n",&a);  // 6487572 truy cap den dia chi cua bien a
 //  printf("%d \n",&b);
  printf("gia tri cua a truoc: %d \n",a);
  ptr=&a;
  *ptr=15;
  printf("gia tri cua a sau:%d",a);
 // printf("dia chi cua con tro ptr: %d",ptr);
  

  return 0;
}

