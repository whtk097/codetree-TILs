#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int n; int a[100];
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;){
        sum=0;
        scanf("%d",&sum);
        if(sum%2==0){
            a[cnt]=sum;
            cnt++;
        }
        i++;
    
    }
    int i=0;
    while(i<=cnt-1){
        printf("%d ",a[i]);
        i++;
    }
    return 0;
}