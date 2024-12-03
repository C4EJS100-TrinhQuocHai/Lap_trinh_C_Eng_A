#include <stdio.h>

int main() {
  // thuat toan sap xep lua chon selection sort
  int arr[5]={4,6,9,1,7};
  // sap xep tang dan
  // tìm vi tri chua phan tu be nhat
  
  for(int i=0; i<5; i++){
  	int minIndex=i;
  	for(int j=i+1; j<5;j++){
  		if(arr[j]<arr[minIndex]){
  			minIndex=j;//3
  		}
  	}
  	// sau khi ket for con thi tien hanh kiem tra
  	if(minIndex!=i){
  		// moi di doi cho
  		int temp;
  		temp=arr[minIndex];
  		arr[minIndex]=arr[i];
  		arr[i]=temp;
  	}
  }
  // in ket qua
  
  for(int i=0; i<5;i++){
  	printf("%d \t",arr[i]);
  }

//	int minIndex=0;
//	for(int i=0; i<5; i++){
//		if(arr[i]<arr[minIndex]){
//			minIndex=i;
//		}
//	}
//	printf("%d",minIndex);
  return 0;
}

