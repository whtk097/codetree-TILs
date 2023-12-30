#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int i,sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]<250){
            sum+=a[i];

        }
        else{
            printf("%d %.1f",sum,(float)sum/i); return 0;
        }
    }
    printf("%d %.1f",sum,(float)sum/i);
    return 0;
}