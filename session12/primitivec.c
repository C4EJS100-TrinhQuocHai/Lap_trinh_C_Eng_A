#include <stdio.h>

int changeValue(int *a, int *b){//con tro 
	int temp =*a;
	*a=*b; // a=15
	*b=temp;// b=5
	/*
		Son  
		Duong
		tro ve cung 1 dia chi
	*/
}
int main() {
  int a=5;
  int b=15;
  changeValue(&a,&b);// truyen dia chi cua a va b
  printf("gia tri cua a %d",a);
  printf("gia tri cua b %d",b);
  return 0;
}

