#include <stdio.h>

int main() {
   char text[]="hoc lap trinh C";
  	// Hoc lap trinh C;
	//   text[0]='H';
	//   printf("%s",text);
	// in ra cac ki tu trong chuoi text nguoc lai.
	int length= strlen(text);
	for(int i=length; i>0; i--){
		printf("%c \n", text[i]);
	}
  return 0;
}

