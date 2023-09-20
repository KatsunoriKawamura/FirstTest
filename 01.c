// new 

#include <stdio.h>

int main(void)
{
   char str3[]="Hello" 
         "Banana=%d\n"; // これで1文になる. 改行しても問題ない
   int x=3;
   printf(str3,x);

   getchar();  
   //return 0;
}

