#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];int sum=0,sum1=0,cnt=0;
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    if(i%2==1||(i-3)%2==0){
        sum+=a[i];
        cnt++;
    }
   }
   printf("%d %.1f",sum,(float)sum/cnt);


    return 0;
}