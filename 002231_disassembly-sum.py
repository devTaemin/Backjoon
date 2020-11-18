#X => X의 자리
#1<=N<=1,000,000

N = int(input())
result = 0
temp = 0
prog = True

while(prog):
    for i in range(1,N+1):
        if (i < 10):
            prog = False
                
        elif (10 <= i and i < 100):
            digit_10 = i // 10
            digit_1 = i % 10
            temp = i + digit_10 + digit_1
            if (temp == N):
                result = i
                prog = False
                break   
        elif (100 <= i and i < 1000):
            digit_100 = i // 100
            digit_10 = (i % 100) // 10
            digit_1 = i % 10
            temp = i + digit_100 + digit_10 + digit_1
            if (temp == N):
                result = i
                prog = False
                break      
        elif (1000 <= i and i < 10000):
            digit_1000 = i // 1000
            digit_100 = (i % 1000) // 100
            digit_10 = (i % 100) // 10
            digit_1 = i % 10
            temp = i + digit_1000 + digit_100 + digit_10 + digit_1
            if (temp == N):
                result = i
                prog = False
                break
        elif (10000 <= i and i < 100000):
            digit_10000 = i // 10000
            digit_1000 = (i % 10000) // 1000
            digit_100 = (i % 1000) // 100
            digit_10 = (i % 100) // 10
            digit_1 = i % 10
            temp = i + digit_10000 + digit_1000 + digit_100 + digit_10 + digit_1
            if (temp == N):
                result = i
                prog = False
                break
        elif (100000 <= i and i < 1000000):
            digit_100000 = i // 100000
            digit_10000 = (i % 100000) // 10000
            digit_1000 = (i % 10000) // 1000
            digit_100 = (i % 1000) // 100
            digit_10 = (i % 100) // 10
            digit_1 = i % 10
            temp = i + digit_100000 + digit_10000 + digit_1000 + digit_100 + digit_10 + digit_1
            if (temp == N):
                result = i
                prog = False
                break
        else:
            prog = False
            break

print(result)
