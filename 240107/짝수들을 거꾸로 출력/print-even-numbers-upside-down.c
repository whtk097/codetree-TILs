#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];int i=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==1) a[i]=-1;

    }
    for(i=i-1;i>=0;i--){
        if(a[i]!=-1)printf("%d ",a[i]);
    }
    return 0;
}