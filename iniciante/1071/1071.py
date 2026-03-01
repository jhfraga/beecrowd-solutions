# 1071 - Soma de Impares Consecutivos I - beecrowd

x = int(input())
y = int(input())

s = 0

for i in range(min(x, y) + 1, max(x, y)):
    if i % 2 != 0:
        s += i

print(s)
