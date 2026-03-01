# 1070 - Seis Numeros Impares - beecrowd

x = int(input())

if x % 2 == 0: x += 1

for i in range(x, x + 12):
    if i % 2 != 0:
        print(i)
