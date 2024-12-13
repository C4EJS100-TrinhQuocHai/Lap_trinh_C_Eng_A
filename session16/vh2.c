#include <stdio.h>
void swap(int *x, int *y){
	// tao 2 bien con tro, x dang tro toi bien a
	// y dang tro den dia chi cua bien b;
	int temp;
   //	*x++; dia chi vung rac nen la khong khop voi dia chi a
	temp= *x;
	*x=*y;
	*y=temp;
	 printf("gia tri cua x la : %d \n",x); //
	 printf("gia tri cua y la : %d \n",y);//
}
int main() {
  int a=5;
  int b=15;
  printf("dia chia cua bien a %d \n",&a);
  swap( &a, &b);
//  printf("gia tri cua a: %d \n",a);
//  printf("gia tri cua b: %d",b);
  
  
  

  return 0;
}

