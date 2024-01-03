#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;int sum=11;
    scanf("%d",&n);
    for(int i=11;i<2*n+11;i+=2){
        sum=i;
        for(int j=0;j<n;j++){
            printf("%d ",sum);
            sum+=2;
            
        }
        printf("\n");
    }
    return 0;
}