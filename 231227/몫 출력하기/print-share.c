#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=0;
    
    
    scanf("%d",&a); int sum=0;
    if(a%2==1) return 0;
    else{
        printf("%d\n",a/2);
        for(int i=0;i<3;i++){
            scanf("%d",&sum);
            if(sum%2==1) continue;
            else{
            sum/=2;
            printf("%d\n",sum);}
        }
    }
    return 0;
}