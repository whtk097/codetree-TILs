#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];int i=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==1) a[i]=0;

    }
    for(i=i-1;i>=0;i--){
        if(a[i]!=0)printf("%d ",a[i]);
    }
    return 0;
}