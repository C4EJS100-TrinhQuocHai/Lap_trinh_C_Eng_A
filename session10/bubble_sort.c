#include <stdio.h>

int main() {
 // thuat toan sap xep noi bot.
 int arr[5] ={3,8,4,1,7};
 int count=0;
 for(int i =0; i<5;i++){
 	for(int j=0; j<5-1-i; j++){
 		count++;
 		if(arr[j]>arr[j+1]){// 8 4== 4 8
 			// tien hanh doi vi tri
 			int temp;
 			temp=arr[j];
 			arr[j]=arr[j+1];
 			arr[j+1]=temp;
 		}
 	}
 }
 // do phuc tap thuat toan O(n^2)
 printf("%d \n", count);
 // in ra ket qua
 for(int i=0; i<5; i++){
 	printf("%d \t",arr[i]);
 }

  return 0;
}

