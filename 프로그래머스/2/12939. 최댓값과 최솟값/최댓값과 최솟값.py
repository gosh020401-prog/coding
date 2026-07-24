def solution(s):
    answer = ''
    li = []
    result = []
    for a in range(s):
        li.append(a)
    result.append(max(li))
    result.append(min(li))
    for b in li:
        result += 'b'
        
    return answer