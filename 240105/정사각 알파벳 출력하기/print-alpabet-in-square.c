#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char sum='A';
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",sum);
            sum++;
        }printf("\n");
    }
    return 0;
}