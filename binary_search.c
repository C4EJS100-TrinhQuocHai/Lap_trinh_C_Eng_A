#include <stdio.h>

int main() {
  // tim kiem nhi phan(binary search)
  // tim kiem trong mang da duoc sap xep
  
  int arr[8]={1,4,6,7,11,14,16,19};
  // trong truong hop khong co phan tu, in ra khong co phan tu
  // in ra het cac phan tu
  int item;
  int length= sizeof(arr)/sizeof(arr[0]);
  printf("moi nhap gia tri can tim kiem \t");
  scanf("%d",&item);
  int start=0;
  int end=length-1;
  int mid;// 4 end 7 
  int flag=-1;
  while(start<=end){
  	 mid= (start+end)/2;
  	 
  	 if(arr[mid]>item){
  	 	// chung to phan tu tim kiem nam o ben trai
  	 	end= mid-1;
  	 }else if(arr[mid]<item){
  	 	// chung to phan tu tim kiem nam o ben phai
  	 	start= mid+1;
  	 }else{
  	 	printf("phan tu %d co vi tri la %d",item,mid);
  	 	break;
  	 }
  }
  return 0;
}

