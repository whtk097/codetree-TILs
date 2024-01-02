#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int sum=1;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=0;j--){
            if(i%2==1){
                printf("%d ",sum);
                sum++;
                continue;
            }
            else{
                printf("%d ",sum+j);
                if(j==0)sum+=n;
                
            }
            
        }
        printf("\n");
    }
    return 0;
}