#include <stdio.h>

int main() {
 // khai bao 1 mang
  int arr[20]={1,2,7,3,4,5};
  // cho nguoi dung nhap vao index(vi tri muon xoa)
  int index=2;
  // ket  qua 1,2,3,4,5;
  for(int i=index ; i<5 ;i++ ){
  	arr[i]=arr[i+1];
  }
  // di in ra ket qua
  for(int i=0; i< 5;i++){
  	printf("%d \n",arr[i]);
  }

  return 0;
}

