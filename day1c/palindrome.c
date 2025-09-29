#include<stdio.h>
int main(){
	int num,original,reverse=0,remainder;
	printf("enter number");
	scanf("%d",&num);
    original=num;
	while(num!=0){
		remainder=num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	  }
	if(original == reverse){
		printf("it is a palindrome number %d",original);
		}
	else{
		printf("it is not a palindrome number %d",original);
		}
	return 0;
}
		
