#include<stdio.h>
int main(){

    int count;
    int x[10];
    int sum = 0;

    printf("Enter your count : ");
    scanf("%d",&count);

    for (int i = 0; i < count; i++)
    {
        printf("Enter youe number : ");
        scanf("%d",&x[i]);
    }

    for (int i = 0; i < count; i++)
    {   
        sum+=x[i];
        printf("%d = %d ",x[i],sum);
    }
    
}
