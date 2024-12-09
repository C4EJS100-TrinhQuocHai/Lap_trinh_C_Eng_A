#include <stdio.h>
/*
	viet ham kiem tra so nguyen to 
	cho nguoi dung nhap vao so nguyen bat ki sau do kiem tra xem co phai
	so nguyen to hay khong?
	
*/

// khai bao kiem tra so nguyen to
int isPrime(int x){
	int count=0;
	for(int i=1; i<=x; i++){
		if(x%i==0){
			count++;
		}
	}
	if(count==2){
		return 11;
	}
}
int main() {
  int n;
  printf("moi ban nhap so can kiem tra");
  scanf("%d",&n);
  if(isPrime(n)==11){
  	printf("%d la so nguyen to",n);
  }else{
  	printf("khong phai so nguyen to");
  }
  return 0;
}

