# 2936 - Quanta Mandioca - beecrowd

q = [300, 1500, 600, 1000, 150]
t = 225

for i in range(len(q)):
    p = int(input())
    t += p * q[i]

print(t)
