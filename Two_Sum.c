/**LeetCode Two Sum**/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int nums[100],i,size,j,target,sum=0;
    printf("Enter the size of an array :\n");
    scanf("%d",&size);
    printf("Enter the array elemnt:\n" );
    for(i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the value of array :\n");
    scanf("%d",&target);
    for(i=0;i<size;i++){
        for(j=i+1;i<size;i++){
            sum=nums[i]+nums[j];
            if(sum==target){
                printf("Output : [%d , %d] ", i , j );
            }
        }
    }

    return 0;
}