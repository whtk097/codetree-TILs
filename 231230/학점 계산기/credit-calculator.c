#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0;
    scanf("%d",&n);
    double a[10];
    double sum=0;int i;
    for( i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    printf("%.1lf\n",sum/n);
    if((float)sum/n>=4){
        printf("Perfect");

    }
    else if(sum/n>=3) printf("Good");
    else printf("Poor");
    return 0;
}