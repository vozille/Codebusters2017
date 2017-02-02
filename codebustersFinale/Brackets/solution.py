def is_matching(seq):
    stack = []
    for bracket in seq:
        if bracket == '{':
            stack.append('}')
        elif bracket == '(':
            stack.append(')')
        elif bracket == '[':
            stack.append(']')
        else:
            if len(stack) == 0 or stack[-1] != bracket:
                return "NO"
            stack.pop(-1)
    if len(stack) == 0:
        return "YES"
    else:
        return "NO"


for tc in range(int(input())):
    seq = input()
    print(is_matching(seq))