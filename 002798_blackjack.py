#첫째줄 N(3<=N<=100)개의 카드, M(10<=M<=300000)의 최대 합
#둘째줄 N개의 값을 받아야 한다. 이 값은 100000을 넘지 않는다.
'''
N, M = map(int, input().split())
num_list = list(map(int, input().split()))
num_list = num_list[:N]


result = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            #print(num_list[i], num_list[j], num_list[k])
            #print(num_list[i] + num_list[j] + num_list[k])
            total = (num_list[i] + num_list[j] + num_list[k])
            if ((total > result) and (total <= M)):
                result = total

print(result)
'''
N, M = map(int, input().split())
num_list = list(map(int, input().split()))
num_list = num_list[:N]

result = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            total = (num_list[i] + num_list[j] + num_list[k])
            if (total > result and total <= M):
                result = total

print(result)
