#include <stdio.h>
int fibb(int num);
int main() {
    // Write C code here
    int fib;
    printf("enter the nth term you want the sequence of : ");
    scanf("%d",&fib);
    printf("%d",fibb(fib)); 

    return 0;
} 

int fibb (int num) {
    if (num == 0){
        return 0;
    }
    if (num==1) {
        return 1;
    }

 int fibbN1 = fibb(num-1);
 int fibbN2 = fibb(num-2);
 int fibbN =  fibbN1 + fibbN2;
 //printf("%d id %d\n",num,fibbN);
 return fibbN;
}