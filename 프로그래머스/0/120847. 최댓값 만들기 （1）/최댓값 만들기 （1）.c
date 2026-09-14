#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int temp, a, b;
    for (int i = 1; i < numbers_len ; i++){
        for (int j = 0; j < numbers_len - i; j ++)
        {
            if(numbers[j] > numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
            else
                continue;
        }
    }
    int answer = numbers[numbers_len - 1] * numbers[numbers_len - 2];
    return answer;
}