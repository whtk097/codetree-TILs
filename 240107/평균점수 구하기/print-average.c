#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    float sum=0;
    float a;

    for(int i=0;i<8;i++){
        scanf("%f",&a);
        sum+=a;
    }
    printf("%.1f",sum/8);

    return 0;
}