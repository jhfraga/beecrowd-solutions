# 2791 - Feijao - beecrowd

c = list(map(int, input().split()))

for i in range(len(c)):
    if c[i] == 1: 
        r = i + 1

print(r)
