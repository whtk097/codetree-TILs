#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=1;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        sum=i;
        for(int j=0;j<5;j++){
            
            printf("%d ",sum);
            sum=sum+i;
        }
        printf("\n");
        
    }
    return 0;
}