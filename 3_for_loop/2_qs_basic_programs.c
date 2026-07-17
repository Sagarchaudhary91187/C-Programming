
#include<stdio.h>
int main(){


//print num from 1 to 100
   printf("num 1 to 100\n");
   for(int n=1;n<=100;n++){
      printf("%d ",n);  
   }
   printf("\n");


//print even num from 1 to 100
   printf("even num 1 to 100\n");
   for(int e=1;e<=100;e++){
      if(e%2==0)
      printf("%d ",e);
   }
   printf("\n");


//print odd num 1 to 100 
   printf("odd num from 1 to 100\n");
   for(int o=1;o<=100;o=o+2){
      printf("%d ",o); 
   }
   printf("\n");

   
//print table of 19
   printf("table of 19\n");
   for(int t=1;t<=20;t++){
      printf("19x%d=%d\n",t,t*19);
   }
}