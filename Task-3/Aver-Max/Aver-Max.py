t = int(input())

for i in range(t) :
    n, k = map(int, input().split())
    numbers = list(map(float, input().split()))
    absNumbers =  [abs(x) for x in numbers]
    maxVal = max(absNumbers)
    if k > 0 :
        print(maxVal)
    else :
        print(max(numbers))