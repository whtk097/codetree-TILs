#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0; char c;
    scanf("%c %d",&c,&n);
    if(c=='A'){
        for(int i=1;i<=n;i++)printf("%d ",i);
    }
    else{
        for(int i=n;i>=1;i--) printf("%d ",i);
    }
    return 0;
}