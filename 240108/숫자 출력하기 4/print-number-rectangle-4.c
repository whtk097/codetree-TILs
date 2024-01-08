#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,sum;
    int k;
    scanf("%d %d",&n,&k);
    if(k==1){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("%d ",i);
            }
            printf("\n");
        }
    }
    else if(k==2){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i%2==1)printf("%d ",j);
                else printf("%d ",n-j+1);
            }
            printf("\n");
        }
    }
    else{
        for(int i=1;i<=n;i++){
            sum=i;
            for(int j=1;j<=n;j++){
                printf("%d ",sum);
                sum+=i;
            }
            printf("\n");
        }
    }
    return 0;
}