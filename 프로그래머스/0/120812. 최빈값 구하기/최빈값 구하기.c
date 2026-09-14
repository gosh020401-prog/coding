#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int count[1000] = {0};
    for (int i = 0 ; i < array_len; i++){
        count[array[i]]++;
    }
    int max_count = 0;
    for (int i = 0; i < 1000; i++){
        if(array_len == 1)
            return array[0];
        if(count[i] > max_count){
            max_count = count[i];
            answer = i;
        }
        else if(count[i] == max_count)
            answer = -1;
    }
    return answer;
}