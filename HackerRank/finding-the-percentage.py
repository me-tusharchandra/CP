n = int(input())
l = []
for i in range(n):
    x = [str(i) for i in input().split()]
    l.append(x)
# print(l)
name = input()
for i in l:
    if(i[0]==name):
        avg = (float(i[1])+float(i[2])+float(i[3]))/3.00
print('%.2f'%avg)