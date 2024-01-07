#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10],b[10],c[10],d[10];int i=0;int sum=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
        if((float)(a[i]+b[i]+c[i]+d[i])/4>=60){printf("pass\n"); sum++;}
        else printf("fail\n");

    }

        printf("%d ",sum);
    
    return 0;
}