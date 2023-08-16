def ptit(s):
    c,l =0,0
    n = len(s)
    for i in range(n):
        if i%2==0 :
            l+=int(s[i])
        else:
            c+=int(s[i])
    print(c,l)
def main():
    t = int(input())
    while (t > 0):
        s = str(input())
        ptit(s)
        t -= 1
if __name__ == '__main__':
    main()
