# 1080 - Maior e Posicao - beecrowd

m = 0
p = 0

for i in range(100):
    x = int(input())

    if (x > m): 
        m = x
        p = i + 1

print(m)
print(p)
