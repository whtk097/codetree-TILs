#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("* ");

        }
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int j=i;j>0;j--)printf("* ");
        printf("\n");
    }
    return 0;
}