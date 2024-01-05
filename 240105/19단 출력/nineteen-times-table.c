#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for(int i=1;i<20;i++){
        for(int j=1;j<20;j++){
            printf("%d * %d = %d ",i,j,i*j);
            if(j==19) printf("\n");
            else if (j%2==1)printf("/ ");
            else printf("\n");
        }
    }
    return 0;
}