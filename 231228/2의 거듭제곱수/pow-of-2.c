#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,sum;
    scanf("%d",&n);
    sum=0;
    while(n!=1){
        n=n/2;
        sum++;
    }
    printf("%d",sum);
    return 0;
}