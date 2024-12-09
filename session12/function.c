#include <stdio.h>

/*
	Function: Ham
	- ham giup to chuc doan ma code thuc hien mot chuc nang,
	 nhiem vu nhat dinh.
	- giup cho viec tai su dung code(  viet mot lan, dung nhieu lan)
	- muon ham duoc thuc thi, thi bat buoc phai goi ham
	- quy tac dat ten ham giong voi quy tac dat ten bien
	
*/
/*
	Cac cach khai bao trong ham
	1. ham co kieu du lieu tra ve, khong co tham so.
	2. ham co kieu du lieu tra ve , va co tham so.
		THAM SO: parameter.
		THAM SO LA KHI KHAI BAO HAM VA KHAI BAO THAM SO TRONG()
		DOI SO  LA KHI GOI HAM TRUYEN GIA TRI.
	3. ham khong co kieu du lieu tra ve, khong co tham so
	4. ham khong co kieu du lieu tra ve, co tham so
*/
// ham 1
 int tinhTong(){
 	// khai bao ham co kieu du lieu tra ve int, ham khong co tham so
 	int a=5;
 	int b=6;
 	printf("tong cua %d va %d la %d",a,b,a+b);
 	return a+b;
 }
 // ham 2
 int sum (int a, int b){
 	printf("tong cua %d va %d la %d \n",a,b,a+b);
 	return a+b;
 } 
 // ham 3
  void  sayHello(){
 	// in ra cau xin chao
 	printf("xin chao!");
 }
 // ham 4
 void findMaxValue(int arr[],int size){
 	// tien hanh kiem tra
 	int maxValue= arr[0];
 	for(int i=0; i<size; i++){
 		if(arr[i]>maxValue){
 			maxValue= arr[i];
 		}
 	}
 	printf("phan tu lon nhat trong mang la : %d \n",maxValue);
 }
 
int main() {
  printf("hoc ve function! \n");
//  tinhTong(); // loi goi ham;	
//  sum(1,3);// goi ham sum va truyen 2 gia tri doi so(argument) 1,3
//  sum(4,7);
//  sayHello();
// goi ham tim gia tri lon nhat trong mang
  int numbers1[]={4,6,5,9,1,3};
  int numbers2[]={8,4,33,1,5};
  int size1= sizeof(numbers1)/sizeof(int);
  findMaxValue(numbers1,size1);
  findMaxValue(numbers2,5);
  return 0;
}

