#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;int cnt=0;int j=0;
    scanf("%d",&n);
    if(n>2){
        printf("2 ");
    for(int i=3;i<=n;i++){
        cnt=0;
        for( j=2;j<i;j++){
            if(i%j==0)cnt++;
        }
        if(cnt==0)
         printf("%d ",i);
    }}
    
    return 0;
}