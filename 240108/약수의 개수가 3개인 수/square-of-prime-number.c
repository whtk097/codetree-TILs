#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=0,cnt=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        sum=0; 
        for(int j=1;j<=i;j++){
            if(i%j==0)
            sum++;
        }
        if(sum==3) 
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}