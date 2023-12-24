#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0,yoon=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%100==0&&i%400!=0)continue;
       else  if(i%4==0) yoon++;
        
    }
    printf("%d",yoon);
    return 0;
}