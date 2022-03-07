https://leetcode.com/discuss/interview-question/1825509/problems-asked-in-hackwithinfy-2022-round-1

# Author: @devangs

mod = 1000000007

def combinationsum(candidates, target, k):
    ret = [] #list of lists
    backtrack(candidates, target, [], ret, k)
    return len(ret) % mod

def backtrack(nums, target, path, ret, k):
    if target < 0: 
        return
    
    if target >=0: 
        if (len(path) == k):
            #print(*path)
            ret.append(path)
        
        for i in range(len(nums)): 
            backtrack(nums[i:], target-nums[i], path+[nums[i]], ret, k)
        return    
    
n = int(input())
k = int(input())
sum = int(input())
arr = list()
for i in range(n):
    x=int(input())
    arr.append(x) 
print(combinationsum(arr, sum, k))

    



IP:

3
3
4
1
2
3

OP:
2


IP:

2
2
20
6
3

OP:
3