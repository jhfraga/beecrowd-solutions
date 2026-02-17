# 2339 - Avioes de Papel - beecrowd

c, p, f = map(int, input().split())

print('N' if ((p - c * f) < 0) else 'S')
