# 2455 - Gangorra - beecrowd

p1, c1, p2, c2 = map(int, input().split())

resultado = p1 * c1 - p2 * c2

if resultado == 0:
    print(0);
else:
    print(1 if resultado < 0 else -1)
