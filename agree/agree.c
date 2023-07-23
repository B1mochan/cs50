#include<stdio.h>
int main(void)
{
    char a;
    printf("do you agree? ");
    scanf("%c",&a);
     (a == 'y' || a == 'Y')
    {
printf("Agreed");        
    }
    else if (a == 'n'|| a == 'N')
    {
        printf("Disagreed");
    }
    else{
        printf("Please enter a valid input i.e y/n or Y/N");

    }

}