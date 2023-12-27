#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i;
    scanf("%d",&n);
    int sum=n;
    for(i=1;i<=n;i++){
        sum=sum/i; 
        if(sum<=1){
            break;
        }
    }
    printf("%d",i);
    return 0;
}