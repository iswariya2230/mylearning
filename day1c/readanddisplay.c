#include<stdio.h>
int main(){
       int arr[100],n,i;
       printf("enter the number of elements");
       scanf("%d",&n);
       //read elements
       for(i=0;i<n;i++){
           scanf("%d",arr[i]);
           }
          //for display elements
       printf("display elements");
       for(i=0;i<n;i++){
              printf("%d",arr[i]);
			  }
       return 0;
      }

