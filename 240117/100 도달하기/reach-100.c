#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int a[1000];
    a[0]=1; a[1]=n;
    printf("%d %d ",a[0],a[1]);
    for(int i=2;;i++){
        a[i]=a[i-1]+a[i-2];
        printf("%d ",a[i]);
        if(a[i]>=100) return 0;
    }
    return 0;
}