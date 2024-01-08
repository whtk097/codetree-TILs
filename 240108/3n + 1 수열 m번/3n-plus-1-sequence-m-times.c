#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,i,cnt=0;
    scanf("%d",&m);
    for(int j=0;j<m;j++){
        cnt=0;
        scanf("%d",&i);
    while(i!=1){
        if(i%2==0){i=i/2;}
        else i=(i*3)+1;
        cnt++;
                
    }
    printf("%d\n",cnt);}
    return 0;
}