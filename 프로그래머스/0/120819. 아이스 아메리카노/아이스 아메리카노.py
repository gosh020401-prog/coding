def solution(money):
    answer = []
    cup = int(money % 5500)
    skajwl = int(money / 5500)
    answer.append(skajwl)
    answer.append(cup)
    return answer