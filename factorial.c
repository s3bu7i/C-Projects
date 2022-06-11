#include<stdio.h>

int main(){

    int i,n;
    unsigned long long fact = 1;
    printf("Enter the integer :");
    scanf("%d",&n);

    if(i<0){

        printf("Error,Factorial of a negative number doesn't exist.");
    }
    else{

        for(i=1;i<=n;++i){

            fact*=i;
        }

    printf("Factorial of %d = %llu",n,fact);
    }

    return 0;
}