# 2061 - As Abas de Pericles - beecrowd

def calc(a : int, x : int):
    for _ in range(x):
        c = str(input())
        if c == "fechou": a += 1
        if c == "clicou": a -= 1
    
    print(0 if a < 0 else a)

def main():
    N, M = map(int, input().split())
    calc(N, M)

if __name__ == "__main__":
    main()
