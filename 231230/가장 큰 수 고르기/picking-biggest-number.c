#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int max=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    printf("%d",max);
    return 0;
}