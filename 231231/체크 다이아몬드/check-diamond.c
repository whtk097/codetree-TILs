#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);

    // 모양에 맞게 윗쪽 별을 출력합니다.

	
	// 모양에 맞게 아랫쪽 별을 출력합니다.
	for(int i = 0; i <n-1; i++) {
		for(int j = n-1; j > i; j--)
			printf(" ");
		for(int j = 0; j <= i; j++)
			printf("* ");
		printf("\n");
    }
		for(int i = 0; i < n; i++) {
		for(int j = 0; j <(i); j++)
			printf(" ");
		for(int j = 0; j < n-i; j++)
			printf("* ");
		printf("\n");
    }
    return 0;
}