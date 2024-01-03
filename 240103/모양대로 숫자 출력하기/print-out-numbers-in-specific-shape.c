#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int sum=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("  ");
            sum--;
        }
        for(int j=0;j<n-i;j++){
            printf("%d ",sum);
            sum--;
        }
        sum=n;printf("\n");
    }
    return 0;
}