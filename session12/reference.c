#include <stdio.h>
//Tham chieu va tham tri
/*
	tham chieu la truyen dia chi
	tham tri la sao chep gia tri va truyen gia tri sao chep
*/


int changeValue(int a, int b){
	// a= 5; b=15
	int temp=a; // 5
	a=b; // a=15
	b=temp; //b=5
}
int main() {
   int a=5;
   int b=15;
   changeValue(a,b); // changeValue(5,15)
   printf("gia tri cua a:  %d",a);
   printf("gia tri cua b:  %d",b);
   
  return 0;
}

