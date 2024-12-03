#include <stdio.h>


int main() {
int arr[8]=[1,2,4,6,7,8,11,14];
int start=0;
int value=4;
int end= 8;
int mid;
while(start<=end){
	mid= (start+end)/2;
	if(arr[mid]==value){
		printf("gia tri can tim kiem %d",mid)
		return;
	}else if(arr[mid]>value){
		end=mid-1
	}else{
		start=mid+1;
	}
}
printf("khong tim thay")
  return 0;
}

