#include <stdio.h>

int main() {
  // them phan tu vao trong mang
  
  // khai bao 1 mang bat ki
  int arr[100]={1,2,4,5,6};
 //  arr[15]=15;
 // them(chen) vao vi tri thu 2 ,mot phan co gia tri la 3
 // 1,2,3,4,5,6;
 // y tuong lam: 
 // khai bao mang so nguyen gom 100 phan tu
 // nhap so luong phan tu vao trong mang
 // nhap vi tri muon chen
 
 // nhap gia tri 
 // in ra
 for(int i=5; i>2; i--){
 	arr[i]=arr[i-1];
 }
 arr[2]=3;
 // in ra ket qua
 for(int i=0;i<6;i++){
 	printf("%d \n",arr[i]);
 }
  return 0;
}

