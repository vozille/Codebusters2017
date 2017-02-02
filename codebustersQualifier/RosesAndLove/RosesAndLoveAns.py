import sys
sys.stdin = open("input1.txt", "r")
sys.stdout = open("output1.txt", "w")

for tc in range(int(input())):
    n = input()
    arr = list(map(int, input().split()))
    print(max(arr))
    print(min(arr))
