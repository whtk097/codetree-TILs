#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=i*i;j+=i){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}