#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0;
    int a[100];
    int min=-1;
    int max=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=100) min=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=100){
            if(min>a[i]) min=a[i];
        }
        else {
            if(max<a[i]) max=a[i];
        }
        
    }
    if(min!=-1){
        if(min-100>100-max) printf("%d ",max);
    else printf("%d ",min);
    }
    else printf("%d ",max);
    printf("%d",min);
    return 0;
}