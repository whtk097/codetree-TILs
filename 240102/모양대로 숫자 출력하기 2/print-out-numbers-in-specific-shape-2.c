#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
     int sum=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sum%8==0)printf("8 ");
            else
            printf("%d ",sum%8);
            sum+=2;
        }
        printf("\n");
    }
    return 0;
}