#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int sum=0,sum1=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(i%2==0)sum+=a[i];
        else sum1+=a[i];

    }
    if(sum>sum1) printf("%d",sum-sum1);
    else printf("%d",sum1-sum);
    return 0;
}