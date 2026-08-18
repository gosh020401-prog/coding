#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    // n번째까지 저장할 동적 배열 할당 (0부터 n까지이므로 크기는 n + 1)
    int* f = (int*)malloc(sizeof(int) * (n + 1));
    
    // 초기값 세팅
    f[0] = 0;
    f[1] = 1;
    
    // 2부터 n까지 반복문으로 계산 (매번 1234567로 나머지 연산)
    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % 1234567;
    }
    
    int answer = f[n];
    
    // 메모리 해제
    free(f);
    
    return answer;
}