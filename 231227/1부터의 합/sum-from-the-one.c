#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i;
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=100;i++){
        sum+=i;
        if(sum>=n) break;
    }
    printf("%d",i);
    return 0;
}