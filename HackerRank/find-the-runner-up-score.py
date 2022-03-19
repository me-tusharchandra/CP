def check(l,n):
    if(l[n-1]!=l[n-2]):
        return l[n-2]
    else:
        return check(l[0:n-1],n-1)

n = int(input())
l = [int(i) for i in input().split()]
l.sort()
print(check(l,n))
            
        