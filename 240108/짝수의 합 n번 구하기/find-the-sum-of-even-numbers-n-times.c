#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; int a,b;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        sum=0;
        for(int i=a;i<=b;i++){
            if(i%2==0)sum+=i;
            
        }
        printf("%d\n",sum);
    }
    return 0;
}