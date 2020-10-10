class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        cnt = dict()
        for el in nums:
            if el not in cnt: cnt[el] = 0
            cnt[el] += 1
        n = len(nums)
        sol = []
        for i in range(n):
            for j in range(i + 1, n):
                for k in range(j + 1, n):
                    a = nums[i]
                    b = nums[j]
                    c = nums[k]
                    cnt[a] -= 1
                    cnt[b] -= 1
                    cnt[c] -= 1
                    # print(a, b, c)
                    if target - (a + b + c) in cnt and cnt[target - (a + b + c)] > 0:
                        now = [a, b, c, target - (a+b+c)]
                        now.sort()
                        if now not in sol:
                            sol.append(now)
                    cnt[a] += 1
                    cnt[b] += 1
                    cnt[c] += 1
        return sol