lst=[]
n=int(input())
for i in range(0,n):
    x, y, z = map(int, input().split())

    if((x==1 and y==1) or (y==1 and z==1)or(x==1 and z==1)):
        lst.append(1)
        
s=lst.count(1)
print(s)