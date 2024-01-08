#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
int cnt=0;int a[100];int sum=0;int i=0;
    do{
        scanf("%d",&a[i]);
        cnt++;
        i++;
    }while(a[i-1]!=0);

    for(int i=cnt-1;i>=cnt-4;i--){
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}