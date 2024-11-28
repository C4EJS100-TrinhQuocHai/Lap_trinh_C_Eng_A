#include <stdio.h>

int main() {
  // cho nguoi dung nhap vao so hang, so cot
  // di nhap tung phan tu vao mang 2 chieu
  // in ra cac gia tri cua mang vua nhap
  int m, n; // m la so hang, n so cot
  printf("moi ban nhap so hang va so cot: ");
  scanf("%d %d",&m,&n);
  // khai bao mang 2 chieu
  int arr[m][n];
  for(int i=0; i<m; i++){
  	for(int j=0; j<n;j++){
  		printf("phan tu o vi tri hang thu %d, cot thu %d",i+1,j+1);
  		scanf("%d",&arr[i][j]);
  	}
  }
 // sau khi nhap xong roi, cac em di in cac phan tu ra
 for(int i=0; i<m; i++){
  	for(int j=0; j<n;j++){
  		printf("%d",arr[i][j]);
  	}
  	printf("\n");
  }
  return 0;
}

