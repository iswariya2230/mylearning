#include<stdio.h>
int main(){
   char ch;
   printf("enter character");
   scanf("%c",&ch);

   if(ch >= 'A' && ch <= 'Z'){
        printf("the character is uppercase %c",ch);
     }
	else if(ch >='a' && ch <= 'z'){
	    printf("the character is lowercase %c",ch);
	}
	else if(ch >= '0' && ch <= '9'){
		printf("the character is a digit %d",ch);
		}
	else{
	    printf("the character is a special symbol");
		}
	return 0;
}



