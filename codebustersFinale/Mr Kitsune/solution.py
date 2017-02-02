def check(primary, derived):
    for i in range(26):
        if derived[i] > primary[i]:
            return "NO"
    return "YES"

for tc in range(int(input())):
    word = input()
    wordcnt = [0]*26
    for i in word:
        wordcnt[ord(i) - 97] += 1
    q = int(input())
    while q > 0:
        q -= 1
        newword = input()
        newwordcnt = [0]*26
        for i in newword:
            newwordcnt[ord(i) - 97] += 1
        print(check(wordcnt, newwordcnt))