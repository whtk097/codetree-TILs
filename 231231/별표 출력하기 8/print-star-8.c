#include <stdio.h>


int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);

    // 모양에 맞게 윗쪽 별을 출력합니다.

	
	// 모양에 맞게 아랫쪽 별을 출력합니다.
	for(int i = 0+1; i <n+1; i++) {
		if(i%2==0){
            for(int j=0;j<i;j++)printf("* ");
        }
        else printf("*");
        printf("\n");
    }
		
    return 0;
}