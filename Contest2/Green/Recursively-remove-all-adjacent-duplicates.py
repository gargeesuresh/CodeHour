#code
t = int(input())
for _ in range(t):
    s = input()
    def solve(s):
        if len(s) == len(set(s)):
            return s
        s += ' '
        groups = []
        t = s[0]
        ch = s[0]
        for i in range(1, len(s)):
            if s[i] == ch:
                t += s[i]
            else:
                groups.append(t)
                t = s[i]
                ch = s[i]
        return ''.join([st for st in groups if len(st) == 1])
    while s != solve(s):
        s = solve(s)
    print(s)