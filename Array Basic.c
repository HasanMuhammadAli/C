#include<stdio.h>
int main(void) {
	// your code goes here
    int arr[5];

    for(int i=0;i<=4;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        sum+=arr[i];
    }
    printf("%d\n",sum);
    
    
    return 0;
}