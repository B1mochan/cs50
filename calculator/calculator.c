#include<stdio.h>
float calculator(long x,long y);

int main(void)

{
    long a,b;
float p = calculator (a,b); 
   
printf("the division of the two entered numbers is:%.20f",p);

      
}


float calculator (long x,long y)

{

    printf("x:");
    scanf("%li",&x);
        printf("y:");

    scanf("%li",&y);
    float z= (float)x/(float)y;
       return z ;

}
