import sys
sys.stdin = open("input2.txt", "r")
sys.stdout = open("output2.txt", "w")

for tc in range(int(input())):
    n = input()
    arr = list(map(str, input().split()))
    res = []
    for word in arr:
        if word == word[::-1]:
            res.append(word)
    res.sort()
    print(len(res))
    for word in res:
        print(word)
