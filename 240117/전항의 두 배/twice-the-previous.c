#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    scanf("%d %d",&a[0],&a[1]);
    printf("%d %d ",a[0],a[1]);
    for(int i=2;i<10;i++){
        a[i]=a[i-1]+2*a[i-2];
        printf("%d ",a[i]);
    }
    return 0;
}