#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            printf("%d",a[i-1]);
            return 0;
        }
    }

    return 0;
}