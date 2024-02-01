#include <stdio.h>
int main ()
 {
int n ,a  , index = 0;
    printf("Enter the number of month : ");
    scanf("%d",&n);
    switch (n)
     {
        case 1:
        printf("This is January \n");

    break;
    case 2:
     { scanf(" %d",&a);
     
        do
    {
        printf(" \n The number is  %d ", index,index*a);
        index = index + a ; //condition 
    }while (index <= a*10);
     break;
      default :
      printf("  EXIT  ");
     }
     }
     
      
    return 0;

}