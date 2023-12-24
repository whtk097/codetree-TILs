#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0;
    scanf("%d",&n);
    int toilet=0, clas=0,bok=0;
    for(int i=1;i<=n;i++){
        
        if(i%12==0)toilet++;
        else if(i%3==0) bok++;
        else if(i%2==0) clas++;

    }
    printf("%d %d %d",clas,bok,toilet);
    return 0;
}