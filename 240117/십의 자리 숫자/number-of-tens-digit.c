#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[10]={0};
    int i=0;
    do{
        scanf("%d",&n);
        a[n/10]++;

    }while(n!=0);
    for(int i=1;i<=9;i++){
        printf("%d - %d\n",i,a[i]);
    }
    return 0;
}