#Backtracking

n,m = map(int,input().split())
check = [False] * (n+1)
a = [0] * m

def Series(target, n, m):
    if (target == m):
        for i in range(m):
            print(a[i], end = ' ')
        print()
        return
    for i in range(1, n+1):
        if (check[i]):
            continue
        check[i] = True
        a[target] = i
        Series(target+1, n, m)
        check[i] = False

Series(0,n,m)



'''
#N은 MAXNUM, M은 개수
N,M = map(int, input().split())
result = list()
arr = [i for i in range(1, N+1)]

def Series(i, M, result):
    if (Promising(i, M, result)):
        if(len(result) == M):
            print(result)
        else:
            result_o = result[:]
            if (i+1 < N):
                result_o.append(arr[i+1])
                Series(i+1, M, result_o)
                
            result_x = result[:]
            if (i+1 < N):
                Series(i+1, M, result_x)


def Promising(i, M, result):
    return (len(result) <= M)

Series(-1, M, result)
'''

