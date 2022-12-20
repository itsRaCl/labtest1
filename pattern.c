#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if (i==1){
            for (int j=1; j<=n; j++){
                printf("%c ", 64+j);
            }
        }
        else if (i>1 && i<n){
            printf("%c ", 64+i);
            for (int j=1; j<=n-i-1; j++){
                printf("  ");
            }
            printf("%c", 64+n);
        }
        else if (i==n){
            printf("%c", 64+n);
        }
        printf("\n");
    }
}