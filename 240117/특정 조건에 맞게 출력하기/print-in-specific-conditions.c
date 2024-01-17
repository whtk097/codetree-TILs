#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int i=0;
    while(1){
        scanf("%d",&a[i]);
        if(a[i]==0) return 0;
        else if(a[i]%2==1) a[i]+=3;
        else a[i]/=2;
        printf("%d ",a[i]);
        i++;
    }
    
    return 0;
}