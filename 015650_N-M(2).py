#Backtracking

N, M = map(int, input().split())
result = list()
arr = [i for i in range(1, N+1)]

def Series(i, M, result):
    if(Promising(i,M,result)):
        if(len(result) == M):
            for i in range(M):
                print(result[i], end = ' ')
            print()
        else:
            result_o = result[:]
            if (i+1) < N:
                result_o.append(arr[i+1])
                Series(i+1, M, result_o)
            
            result_x = result[:]
            if(i+1 < N):
                Series(i+1, M, result_x)

def Promising(i, M, result):
    return (len(result) <= M)

Series(-1, M, result)
