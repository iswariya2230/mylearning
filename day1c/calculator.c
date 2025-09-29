#include<stdio.h>
int main(){
	int a,b;
	char operator;
	printf("enter a and b");
	scanf("%d %d" ,&a , &b);
	printf("enter operator");
	scanf(" %c",&operator);

	switch(operator){
	case'+':
	    printf("add a and b %d",a+b);
	    break;
        case'-':
	    printf("sub a and b %d",a-b);
	    break;
	case'*':
	    printf("multiply a and b %d",a*b);
	    break;
	case'/':
	    if(b!=0){
		printf("divide a and b %d",a/b);
		break;
	    }
	    else { 
		printf("we cannot divide this number");
	        break;
	    }
	default:printf("number will not be calculated");break;
	}  
        return 0;
}

	
