#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    for(int j=1;j<=9;j++){
        for(int i=b;i>=a;i=i-2){
            if((i*j)%2==0){
                if(i!=a)
                printf("%d * %d = %d / ",i,j,i*j);
                else printf("%d * %d = %d ",i,j,i*j);
            }
        }
        printf("\n");
    }
    return 0;
}