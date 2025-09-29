#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter three numbers");
    scanf("%d %d %d",&x,&y,&z);

    if(x >= y && x >= z){
        printf("the greatest number is x %d",x);
        }
    else if(y >= x && y >= z){
        printf("the greatest number is %d",y);
        }
    else{
        printf("the greatest number is z %d",z);
        }
    return 0;
}

