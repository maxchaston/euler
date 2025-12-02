import math

def gen_triangular_number(num):
    return sum(range(1,num+1))

def get_factors(num):
    factors=[]
    for i in range(1, math.ceil(math.sqrt(num))):
        if num%i == 0:
            factors.append(i)
            factors.append(num/i)
    return list(map(int, factors))

print(gen_triangular_number(7))
print(get_factors(28))

divisor_num = 0
i = 0
while divisor_num<500:
    i+=1
    divisor_num = len(get_factors(gen_triangular_number(i)))

print(i)
print(gen_triangular_number(i))
