#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=0,b=0,sum=0;
    scanf("%d %d",&a,&b);
    int cnt=0;
    int i=0;
    for(i=a;i<=b;i++){
        if(i%5==0||i%7==0){
        sum+=i;
        cnt++;}
        
    }
    printf("%d %.1f",sum,(float)sum/cnt);
    return 0;
}