def solution(s):
    answer = True
    cnt = 0
    for char in s:
        if char == '(':
            cnt += 1
        elif char == ')':
            cnt -= 1
        
        if cnt < 0:
            return False
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')

    return cnt == 0