#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=1,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cnt<=9)
            printf("%d",cnt);
            else printf("%d",cnt%9);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}