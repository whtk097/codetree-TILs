#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[10] = {0};
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&sum);
        a[sum]++;
 
    }

    for(int i=1;i<=9;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}