#include <stdio.h>

/*
    Khai báo và gán giá tri cho 1 chuoi bat ki,
    + dem so luong ki tu la chu cai
    + dem so luong ki tu la  chu so
    + dem so luong ki tu la ki tu dac biet
	INPUT: hfdf23@r4r!
	OUTPUT: 
		+ 6 ki tu la chu cai
		+ 3 ki tu la chu so
		+ 2 ki tu la chu cai dac biet
*/
int main() {
   char text[]="fdf123@!fdf";
   int countCharText=0;
   int countCharNum=0;
   int countCharSpecial=0;
   int size= strlen(text);
   for(int i=0; i<size; i++){
   	if(isalpha(text[i])){
   		countCharText++;
   	}else if(isdigit(text[i])){
   		countCharNum++;
   	}
   }
   printf(" \n so luong ki tu la chu cai trong chuoi ban dau la %d",countCharText);
   printf("\n so luong ki tu la chu so trong chuoi ban dau la %d",countCharNum);
   printf(" \n so luong ki tu la chu cai dac biet trong chuoi ban dau la %d",size-countCharText-countCharNum);

  return 0;
}

