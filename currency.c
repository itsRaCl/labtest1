#include <stdio.h>

void currency(int c){
    int n1=0, n10=0, n100=0, n500=0;
    n500 = c/500;
    c-=n500*500;
    n100 = c/100;
    c-= 100*n100;
    n10 = c/10;
    c-=10*n10;
    n1 = c;
    printf("Notes Required:\n1: %d\n10: %d\n100: %d\n500: %d\n",n1,n10,n100,n500);
}

int main(){
    int c;
    printf("Enter the amount: ");
    scanf("%d", &c);
    currency(c);
    return 0;
}