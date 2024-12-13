#include <stdio.h>
// de quy trong ham
/*
	dequy la gi: ham tu goi lai chinh no
	ap dung de quy tinh giai thua cua mot so n
	
	CHU Y: 
	khi dung de quy thi phai cho ham co diem dung,
	neu khong ham se chay vo tan
	
	
*/
int hamDeQuy(int n){
	// n=5;
	if(n==1){
		return 1;
	}
	return n * hamDeQuy(n-1); // 4+3+2+1+1
	/*
		 5+ hamDeQuy(4)
		=5+4+ hamDeQuy(3)
		=5+4+3+hamDeQuy(2)
		=5+4+3+2+hamDeQuy(1)
		=5+4+3+2+1
		=15
	*/
}

int main() {
   int a=5;
   printf("%d",hamDeQuy(5));// doi so argument

  return 0;
}

