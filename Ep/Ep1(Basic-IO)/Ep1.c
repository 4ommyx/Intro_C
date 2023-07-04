#include<stdio.h>
int main(){

    //การประกาศตัวแปร
    int score;
    char name[20];

    //การแสดงผล
    printf("Enter your name : ");

    //การรับค่าตัวแปร (การรับค่า int ต้องใส่ addrest ด้วย)
    scanf("%s",name);

    printf("Enter your score : ");
    scanf("%d",&score);

    printf("Hello Mr.%s score is %d " ,name, score);
}