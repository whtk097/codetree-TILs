#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
     int n;
     int sum=9;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",sum);
            sum--;
            if(sum<1)sum=9;
        }
        printf("\n");
    }
    return 0;
}