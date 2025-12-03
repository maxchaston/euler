def collatz_step(num):
    if num%2 == 0:
        return num/2
    else:
        return num*3+1

def loop_collatz(num):
    count = 0
    while num!=1:
        # print(num)
        num = collatz_step(num)
        count+=1
    return count+1

print(max([(i,loop_collatz(i)) for i in range(1, 1_000_001)], key=lambda x: x[1]))

# loop_collatz(13)
