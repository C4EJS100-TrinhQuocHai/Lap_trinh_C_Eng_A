#include <stdio.h>
/*
	ham strcpm di so sang 2 chuoi
		+ neu 2 chuoi giong nhau ket qua tra ve 0
		+ neu 2 chuoi khac nhau thi ket qua tra ve -1
*/
int main() {
  // di so sanh 2 chuoi trong C
  char text1[]="abc";
  char text2[]="abc1";
  // kiem tra xem 2 chuoi co giong nhau hay khong?
  // strcmp(text1,text2)
  int result= strcmp(text1,text2);
  printf("%d",result);
  return 0;
}

