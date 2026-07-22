def solution(arr):
    answer = []
    if arr[0] == 10:
        arr[0] = -1
        answer = arr
    else:
        del arr[arr.index(min(arr))]
        
        answer = arr
    
    return answer