#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];int sum=0,sum1=0,cnt=0;
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    if(i%2==1){
        sum+=a[i];
    
    }
    if(i==2||i==5||i==8){
        sum1+=a[i];
        cnt++;
    }
   }
   printf("%d %.1f",sum,(double)sum1/cnt);


    return 0;
}