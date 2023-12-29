#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        if(a[i]%3!=0){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}