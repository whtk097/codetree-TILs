#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; int sum,cnt=0;
    scanf("%d",&n);
    for(int i=n;i<=n*n;i+=n){
        sum=i;
        cnt++;
        for(int j=n;j>0;j--){
            printf("%d ",sum);
            sum-=cnt;

        }
printf("\n");
    }
    return 0;
}