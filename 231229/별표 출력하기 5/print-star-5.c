#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            for(int k=i;k>0;k--){
                 printf("*");
            }
           printf(" ");
        }
        printf("\n");
    }
    return 0;
}