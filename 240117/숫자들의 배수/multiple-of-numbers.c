#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    
    int n;
    a[0]=1;
    scanf("%d",&n);
    int cnt=0;int i=1;
    while(cnt<2){
        a[i]=i*n;
        printf("%d ",a[i]);
        if(a[i]%5==0)cnt++;
        i++;
    }
    return 0;
}