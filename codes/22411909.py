#Yet another problem about sequences - january long challenge
def calc(a,b,c,n,j):
    arr=[]
    k = 0
    h = 1
    l = 0
    m = 0
    while j < n:
        if l == 0:
            arr.append(a * lst[k])
            l = 1
            j += 1
        elif l == 1:
            arr.append(b * lst[h])
            l = 2
            j += 1
        elif l == 2:
            arr.append(c * lst[k])
            j += 1
            if l == 2: k, h = h, k
            m += 1
            l = 0
            if m == 2:
                h += 1
                k = h
                h = h + 1
                m = 0
    return arr
c=0
i=2
lst=[]
while True:
    if i%2!=0 and i%3!=0 and i%5!=0:
        lst.append(i)
        c+=1
    i+=1
    if c==16666:break
t=int(input())
for i in range(t):
    n=int(input())
    if n==3:print(6,15,10)
    elif n==4:print(6,15,35,14)
    elif n==5:print(6,15,35,77,22)
    elif n==6:print(6,15,35,77,143,26)
    elif n==7:print(6,15,35,77,143,221,34)
    elif n==8:print(6,15,35,77,143,221,323,38)
    elif n==9:print(6,15,35,77,143,221,323,437,46)
    else:
        x=n%3
        if  x==0:
            print(6,10,15,end=" ")
            for j in calc(6,10,15,n,3):
                print(j,end=" ")
            print()
        elif x==1:
            print(6,10,15,end=" ")
            brr=calc(6,10,15,n,3)
            brr.insert(0,21)
            brr.insert(1,77)
            brr.remove(42)
            brr.remove(brr[len(brr)-1])
            for j in brr:
                print(j,end=" ")
            print()
        elif x==2:
            print(6,10,15,end=" ")
            brr = calc(6, 10, 15, n, 3)
            brr.insert(0,33)
            brr.insert(1, 77)
            brr.insert(2,14)
            brr.remove(42)
            brr.remove(brr[len(brr)-1])
            brr.remove(brr[len(brr)-1])
            for j in brr:
                print(j,end=" ")
            print()
