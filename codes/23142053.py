#chef and secret password - february cookoff 2019
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    cc=s.count(s[0])
    pp=n//cc
    for i in range(n):
        if s.count(s[:pp-i])==cc:
            print(s[:pp-i])
            break
        else:continue
