#include <stdio.h>

int factorial(int n){
    if (n == 1)
        return 1;
    else
        return n * factorial(n-1);
}


int main(){
    int n;
    printf("Enter n you want:\n");
    scanf("%d", &n);
    int t;
    t = factorial(n);
    printf("%d", t);
    return 0;
}
