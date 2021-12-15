t = int(input())
while t :
    t -= 1
    sum1 = 0
    sum2 = 0
    arr = []
    n, m, v, k = map(int,input().split())
    arr = list(map(int, input().split()))
    arr.sort()
    arr = [[i, i] for i in arr]
    ind = 0
    for i in arr :
        i[1] += k * v
        i[0] -= k * v
        if (i[1] > n) :
            i[1] = n
        if (i[0] < 1) :
            i[0] = 1
        sum2 += (i[1] - i[0]) + 1
        if (ind > 0 and arr[ind - 1][1] >= i[0]) :
            sum1 += (arr[ind - 1][1] - i[0]) + 1
        ind += 1
    
    print(n - (sum2 - sum1))