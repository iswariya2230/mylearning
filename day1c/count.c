#include<stdio.h>
int main(){
	int n,count=0;
	printf("enter the number for nterms:");
	scanf("%d",&n);
	
	if(n==0) count=1;
	while(n!=0){
	    count++;
            n=n/10;
	}
	printf("count the number of given digits %d",count);
	return 0;
}	
