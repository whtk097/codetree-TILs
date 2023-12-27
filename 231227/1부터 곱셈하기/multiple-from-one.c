#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int i=0,sum=1;
    for(i=1;i<=10;i++){
        sum*=i;
        if(sum>=n) break;
    }
    printf("%d",i);
    return 0;
}