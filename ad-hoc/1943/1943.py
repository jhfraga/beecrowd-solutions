# 1943 - Top N - beecrowd

c = [1, 3, 5, 10, 25, 50, 100]

k = int(input())

for i in range(len(c)):
    if k <= c[i]:
        print(f"Top {c[i]}")
        break
