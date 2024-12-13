#include <stdio.h>

void changeCount(int *n){
	printf("%d",n);
	*n=17;
//	printf("gia tri cua n %d",n);
}
// pass by value
// pass by reference (tham chieu)
int main() {
   int count=7;
   //printf("dia chi cua bien count %d",&count);
   printf("gia tri cua count truoc: %d \n",count);
   changeCount(&count);// truyen dia chia cua bien count
   printf("gia tri cua count sau: %d",count);
   

  return 0;
}

