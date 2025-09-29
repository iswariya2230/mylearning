#include<stdio.h>
int main(){
    char choice;
	float area,a,b; 
	printf("enter the choice 'c' for circle 'T' for triangle 'R' for rectangle");
	scanf("%c",&choice);

	switch(choice) {
		case 'c':
		    printf("enter radius");
            scanf("%f",&a);
			area=3.14*a*a;
			printf("%f",area);
			break;
		case 'T':
		    printf("enter the a and b");
			scanf("%f %f",&a,&b);
			area=0.5*a*b;
			printf("%f",area);
			break;
		case 'R':
		    printf("enter the a and b");
			scanf("%f %f",&a,&b);
			area=a*b;
			printf("%f",area);
			break;
		default:
			printf("Invalid choice");
		}
		return 0;
	}
