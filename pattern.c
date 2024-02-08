#include <stdio.h>
int main () {
    
    printf("hello vishal\n");
    int n=7;
    int a;
    int b;
    for (a=1 ;a<=n ;   a++ )
    {
        for (b=n;b>=1;b--)
       
        {
            if (a>=b)
               printf("2");
            else 
               printf("");
        }
    
               printf("\n");
    }
    return 0;
}