import string

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    s = input()
    lower = string.ascii_letters
    ans = 0
    for ch in lower:
        now = l = r = cnt = 0
        while r < len(s):
            if s[r] != ch:
                cnt += 1

            while cnt > k:
                if s[l] != ch:
                    cnt -= 1
                l += 1
            now = max(now, r - l + 1)
            r += 1
        ans = max(ans, now)
    print(ans)
