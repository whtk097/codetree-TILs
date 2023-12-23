#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n;
    scanf("%d %d",&a,&n);
    int i=0;
    for(i=0;i<n;i++){
        a=a+n;
        printf("%d\n",a);
    }
    return 0;
}