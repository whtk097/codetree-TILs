#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int sum,a,b;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        sum=1;
        for(int j=a;j<=b;j++){
            sum=sum*j;
        }
        printf("%d\n",sum);
    }
    return 0;
}