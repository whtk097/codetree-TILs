#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10]={0};
    int sum=0;
    for(int i=0;i<10;i++){
        scanf("%d",&sum);
        a[sum]++;
    }
    for(int i=1;i<=6;i++){
        printf("%d - %d\n",i,a[i]);
    }
    return 0;
}