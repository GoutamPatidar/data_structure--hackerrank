
p=list(map(int,input().split()))
n=int(p[0])+1
m=int(p[1])
arr=[0]*n
for x in range(0,m):
    k=list(map(int,input().split()))
    a=k[0]-1
    b=k[1]
    c=k[2]
  #  print(a,b,c)
    #j=int(arr[a])
    #q=int(arr[b])
    arr[a]=arr[a]+k[2]
    arr[b]=arr[b]-k[2]
   # print(arr[a],arr[b])


sum=0
print(arr)
for y in arr:
     sum=sum+y
    # print(sum)
     if(sum>y):
         sum=y

        #print(arr)
print(abs(sum))