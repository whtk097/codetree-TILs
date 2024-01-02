#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){sum++; printf("%d ",sum);}
            else{
                sum+=2;
                printf("%d ",sum);
            } 
        }
        printf("\n");
    }
    return 0;
}