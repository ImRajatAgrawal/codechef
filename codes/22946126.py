# Guess it right - february long challenge
import fractions as ff
from math import ceil
def mulmod(a,b,mod):
    res = 0
    a = a % mod
    while b > 0:
        if b % 2 == 1:
            res = (res + a) % mod
        a = (a * 2) % mod
        b =b// 2
    return res % mod
def fast_power(base, power, MOD):
    result = 1
    while power > 0:
        if power % 2 == 1:
            result = (result * base) % MOD
        power = power // 2
        base = (base * base) % MOD
    return result
mm=1000000007
t=int(input())
for i in range(t):
    n,k,m=map(int,input().split())
    x=ceil(m/2)
    y=m//2
    ppp=fast_power(n,x,mm)
    pp=fast_power(n-1,x,mm)
    s=ff.Fraction(ppp-pp,ppp)
    if m%2==0:
        qqq=fast_power(n,y,mm)
        qq=fast_power(n-1,y,mm)
        s=s+ff.Fraction(qq,qqq*(n+k))
    q=fast_power(s.denominator,mm-2,mm)
    print(mulmod(s.numerator,q,mm))
