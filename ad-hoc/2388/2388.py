# 2388 - Tacografo - beecrowd

def calc(n : int):
    s = 0

    for _ in range(n):
        t, v = map(int, input().split())
        s += t * v
    
    print(s)

def main():
    n = int(input())
    calc(n)

if __name__ == "__main__":
    main()
