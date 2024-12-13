#include <stdio.h>
/*

	Cac ham xu ly chuoi trong C
	1. strlen:  ham tinh so luong phan tu trong chuoi
	2. strcmp  so sanh 2 chuoi
	3. strcat : noi 2 chuoi lai voi nhau
	4. strcpy: ham dung de copy chuoi str1 vao str2 (strcpy (str2,str1))
	5. strncpy: ham dung de copy
	6. strchr: 
*/

int main() {
 	char myStr[] = "Hello World";
 	// * ki hieu con tro
	char *myPtr = strchr(myStr, 'o');

	  printf("%s", myPtr);


  return 0;
}

