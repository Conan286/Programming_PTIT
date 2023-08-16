def ptit(a,b):
    if a%b == 0 or b%a ==0:
        print("YES")
    else:
        print("NO")

def main():
    t = int(input())
    while (t > 0):
        a,b = map(int,input().split())
        ptit(a,b)
        t -= 1

if __name__ == '__main__':
    main()
