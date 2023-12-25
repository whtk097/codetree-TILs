#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=0;
    int sum=0,cnt=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a);
        if(a>=0&&a<=200){
            sum+=a;
            cnt++;
        }
    }
    printf("%d %.1f",sum,(float)sum/cnt);
    return 0;
}