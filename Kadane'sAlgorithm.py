def maxSubArraySum(a,size):
    ##Your code her
    maxc = maxg= a[0]
    for i in range(size):
        if i == 0:
            pass
        else:
            maxc = maxc +a[i]
            if maxc >= maxg:
                maxg = maxc
                if a[i] >= maxg:
                    maxc = maxg = a[i]
            elif maxc <= 0:
                maxc = 0
    return maxg
