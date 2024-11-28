#include <stdio.h>

int main() {
  // mang 2 chieu? the nao duoc goi la mang 2 chieu
  // khai bao
  int arr[3][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10}};
  // truy xuat cac phan tu trong mang 2 chieu
  // lay phan tu co gia tri la 5
  //  printf("%d",numbers[1][0]);
  // in ra tat ca phan tu trong mang 2 chieu
  for(int i=0; i<3; i++){
  	for(int j=0;j<4; j++){
  		printf("phan tu trong hang thu %d = %d",i+1,arr[i][j]);
  	}
  	printf("\n");
  }

  

  return 0;
}

