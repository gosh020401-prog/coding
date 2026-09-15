#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t len = strlen(s);
    char* answer = malloc(len + 1);
    int cnt[26] = {0};
    int a = 0;
    if(s == NULL){
        return NULL;
    }
    for (int i = 0; i < 26; i++){
        for (size_t j = 0; j < len; j++){
            if(s[j] == 'a' + i){
                cnt[i]++;
            }
        }
    }
    
    for(int k = 0; k < 26; k++){
        if(cnt[k] == 1){
            answer[a] = 'a' + k;
            a++;
        }
    }
    answer[a] = '\0';
    return answer;
}