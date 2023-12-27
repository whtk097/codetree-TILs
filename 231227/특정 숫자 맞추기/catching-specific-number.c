#include <stdio.h>

int main() {
    int a=0;
    // 여기에 코드를 작성해주세요.
    while(1){
        scanf("%d",&a);
        if(a>25) printf("Lower\n");
        else if(a<25) printf("Higher\n");
        else{
            printf("Good");
            break;
        }
    }
    return 0;
}