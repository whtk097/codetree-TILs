#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0, sum=0,a=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==1&&a%3==0){
            sum+=a;
        }
    }
    printf("%d",sum);
    return 0;
}