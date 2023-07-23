#include<stdio.h>
int main(void)
{
    int x,y;
 printf("enter a number: ");
 scanf("%d",&x);
 printf("enter another number: ");
 scanf("%d",&y);
 if (x>y)
 {
    printf("x is greater than y\n");

 }
 else if (x<y)
 {
printf("x is less than y\n");      
 }
 else{
    printf("x and y are both the same");
 }
 
}