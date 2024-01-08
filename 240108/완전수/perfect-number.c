#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; int cnt=0,sum=0,a,b;
    scanf("%d %d",&a,&b);
for(int j=a;j<=b;j++){
    sum=0;
    for(int i=1;i<j;i++){
        if(j%i==0)sum+=i;
    
    }
    if(sum==j) cnt++;
}
printf("%d",cnt);
    return 0;
}