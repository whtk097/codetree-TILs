#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[20];
    int n; int cnt=0;int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==1){
            sum+=a[i];
            cnt++;
            }

    }
    printf("%d %.1f",sum,(float)sum/cnt);
    return 0;
}