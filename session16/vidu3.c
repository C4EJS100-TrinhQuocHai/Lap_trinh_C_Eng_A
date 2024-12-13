#include <stdio.h>
/*
 con tro dung voi mang
 + khi khai bao mang thi dia chi cua mang trung voi dia chi 
 cua phan tu thu 1.
*/
int main() {
  int arr[]={2,4,6,8};
 //  arr[0]=14;
  printf("%d \n",arr);//6487568
  int *ptr;
  ptr=arr;
  
//  *(ptr)=14;
	//  printf("dia chi cua bien ptr %d",ptr);
 	printf (" arr[%d]:= %d \n",0,arr[0]);
 	// dia chi cua phan tu thu nhat trong mang
 	printf("dia chi phan tu thu nhat %d \n",&arr[1]);
 	for(int i=0; i<4; i++){
 		printf("gia tri cac phan trong mang arr %d \n ",*(ptr+i));
 	}

  return 0;
}

