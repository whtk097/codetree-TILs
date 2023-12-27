#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int i=0;
    while(i<5){
        scanf("%d",&i);
        if(i==1) printf("John\n");
        else if(i==2) printf("Tom\n");
        else if((i==3))printf("Paul\n");
        else if((i==4))printf("Sam\n");
        else printf("Vacancy");
    }
    return 0;
}