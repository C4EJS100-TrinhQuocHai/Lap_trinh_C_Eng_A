#include <stdio.h>

int main() {
 	int arr[4][5]={
		 {1,2,3,4,5},
		 {6,7,8,9,10},
		 {11,12,13,14,15},
		 {16,17,18,19,20}
	 };
	 for(int i=0; i<4;i++){
	 	for(int j=0;j<5;j++){
	 		if(i==0){
	 			print("%d",arr[0][j]);
	 		}
	 	}
	 }
	 // in ra bien tren
	 for(int i=0; i<5;i++){
//	 	printf("%d",arr[0][i]);
	 }
	 // in ra bien ben phai
	 printf("\n ");
	 for(int i=0; i<4;i++){
//	 	printf("%d",arr[i][4]);
	 }
	 // in ra bien ben  duoi
	  printf("\n ");
	 for(int i=0; i< 4; i++){
//	 	printf("%d,",arr[3][i]);
	 }
	 // in ra bien ben trai
	  printf("\n ");
	  for(int i=0; i< 4; i++){
//	 	printf("%d,",arr[i][0]);
	 }
	 
	 // in theo ma tran
	 

  return 0;
}

