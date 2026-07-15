#include<stdio.h>
void main(){
        int a[100],b[100];
        int i,j=0,n;
        int count=0;
        printf("enter stuffed frame length:\n");
        scanf("%d",&n);
        printf("enter stuffed frame bits:\n");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
           b[j++]=a[i]; 
           if(a[i]==1){
            count++;
            if(count==5){
             i++;    
             count=0;  
            }
           }
           else{
            count=0;   
           }
          }
           printf("\n after bit destuffing:\n");
           for(i=0;i<j;i++){
            printf("%d",b[i]);
           }
         printf("\n");
}

