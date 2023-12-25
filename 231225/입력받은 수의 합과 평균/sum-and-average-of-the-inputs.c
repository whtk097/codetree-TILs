#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int a=0,sum=0,cnt=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
        cnt++;

    }
    printf("%d %.1f",sum,(float)sum/cnt);
    return 0;
}