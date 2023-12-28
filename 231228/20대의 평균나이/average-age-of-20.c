#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    float sum=0;
    float cnt=0;
    int age;
    while(1){
        scanf("%d",&age);
        if(age>=20&&age<30){

        sum+=age;
        cnt++;}
        else break;
    }
    printf("%.2f",sum/cnt);
    return 0;
}