#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=8;i+=2){
        for(int j=b;j>1;j--){
            printf("%d * %d = %d",j,i,j*i);
            if(j!=2)printf(" / ");
        }
        printf("\n");
    }
    return 0;
}