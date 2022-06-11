#include<stdio.h>
#include <math.h>

long DecimaltoBinary(int decimalnum){
    long binarynum=0;
    int rem, temp=1;
    while(decimalnum!=0){
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp*10;

    }
    return binarynum;
}
int main(){
    int decimalnum;
    printf("Enter a decimalnum  number :");
    scanf("%d",&decimalnum);
    printf("Equivalent Binary Number is: %ld", DecimaltoBinary(decimalnum));
    return 0;
}