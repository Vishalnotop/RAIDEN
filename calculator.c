#include <stdio.h>
int main ()
{
    int num1,num2,num3;
    float Num1,Num2,Num3,reminder;
    char choose;
    printf("What you want to do\n");
    printf(" (+) (/) (*) (-) \n");
    scanf("%c",&choose);
    if(choose =='+')
    {
         printf("Enter the num1 : \n");
             scanf("%d",&num1);
        printf("Enter the num2 : \n");
             scanf("%d",&num2); 
          num3=num1+num2;
        printf("Sum of %d and %d is %d",num1,num2,num3); 
    }
    else if (choose == '-') 
    {
        printf("Enter the num1 : \n");
             scanf("%d",&num1);
        printf("Enter the num2 : \n");
            scanf("%d",&num2); 
          num3=num1-num2;
        printf("Subtraction of %d and %d is %d",num1,num2,num3);
    }
else if (choose == '*')
    {
        printf("Enter the num1 : \n");
             scanf("%d",&num1);
        printf("Enter the num2 : \n");
             scanf("%d",&num2); 
          num3=num1*num2;
        printf("Multiplication of %d and %d is %d",num1,num2,num3);
    }
else if (choose == '/')
    {
        printf("Enter the Num1 : \n");
         scanf("%f",&Num1);
        printf("Enter the Num2 : \n");
          scanf("%f",&Num2); 
         Num3=Num1/Num2;
          printf("Division of %f and %f is %f",Num1,Num2,Num3);
    
    }
}