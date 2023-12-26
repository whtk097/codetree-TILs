#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=1;
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++){
        sum=sum*a;
    }
    printf("%d",sum);
    return 0;
}