#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);

    if(marks>90){
	        	printf("The student is scorec A grade %d",marks);
	   		}
			
    else if(marks>80){
				printf("The student is scored B grade %d",marks);
 		   }	
		    
	else if(marks>70){
				printf("the student is scored c grade %d",marks);
			 }
			 
	else if(marks>60){
			 	printf("the student is scored d grade %d",marks);
			 }
			 
	else{
			 	printf("the student is failed %d",marks);
			}
		
	return 0;
}
				
