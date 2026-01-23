# 2344 - Notas da Prova - beecrowd

conceito = ['D', 'C', 'B', 'A']
notas = [35, 60, 85, 100]

n = int(input())

if n == 0: 
    print("E")
else:
    for i in range(len(notas)):
        if n <= notas[i]:
            print(conceito[i])
            break
