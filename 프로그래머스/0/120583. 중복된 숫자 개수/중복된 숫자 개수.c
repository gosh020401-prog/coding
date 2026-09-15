#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int i = 0;
    int cnt[] = {0};
    do{
        if(i >= array_len)
            break;
        if(array[i] == n){
            cnt[n]++;
        }
        i++;
    }while(1);
    answer = cnt[n];
    return answer;
}