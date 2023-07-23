#include<stdio.h>
#include<stdbool.h>
int getsize(int n);
void printgrid(int size);
int main(void)
{
   
   
   int n=getsize(n);
    printgrid(n);

   
  
}








































int getsize( int n)
{
    ; 
  do{
       printf("enter the value of n: ");
       scanf("%d",&n);
       return n;
      
    }while(n<1);   
}



void printgrid(int size)
{
     int j=0;
     
        while (j<size)
    {
       for (int i = 0; i<size; i++)
           {
             printf("#");
           }
            printf("\n");
            j++;

    }
}