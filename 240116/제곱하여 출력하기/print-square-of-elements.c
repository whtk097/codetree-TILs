#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[100];

    scanf("%d",&n);
    for(int i;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]*a[i]);
    }
    return 0;
}