def decodeHuff(root, s):
	#Enter Your Code Here
    encodings = dict()
    def solve(root, cstr):
        if not root:
            return
        if not root.left and not root.right:
            encodings[root.data] = cstr
            return
        solve(root.left, cstr + "0")
        solve(root.right, cstr + "1")
    solve(root, "")
    ans = t = ""
    i = 0
    while i < len(s):
        t += s[i]
        for key, values in encodings.items():
            if values == t:
                t = ""
                ans += key
        i += 1
    print(ans)