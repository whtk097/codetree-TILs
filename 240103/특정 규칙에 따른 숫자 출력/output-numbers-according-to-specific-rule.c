#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;int cnt=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=0;j<n-i;j++){
            if(cnt%9!=0)printf("%d ",cnt%9);
            else printf("9 ");
            cnt++;
        }printf("\n");
    }
    return 0;
}