#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i;
    int a[100];
    for(i=0;i<2;i++){
        scanf("%d",&a[i]);
    }
    for(i=2;i<10;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]%10);
    }
    return 0;
}