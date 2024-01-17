#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[11]={0};
    int i=0;
    do{
        scanf("%d",&n);
        if(n==100)a[10]++;
        else a[n/10]++;

    }while(n!=0);
    for(int i=10;i>=1;i--){
        printf("%d0 - %d\n",i,a[i]);
    }
    return 0;
}