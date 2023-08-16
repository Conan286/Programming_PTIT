from fractions import Fraction

def ptit(s):
    hs = 1.5
    s = s[::-1]
    n = len(s)
    res = 0.0
    for i in range(n):
        res += pow(hs,i)*int(s[i])
    k = res - int(res)
    if(k==0):
        print(int(res))
    else:
        print(int(res),str(Fraction(k)))
      
def main():
        s = str(input())
        ptit(s)
  
if __name__ == '__main__':
    main()
