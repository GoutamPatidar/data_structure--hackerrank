a=input().rstrip().split()
n=int(a[0])
m=int(a[1])
arr=list(map(int,input().rstrip().split()))
for x in range(0,m):
     temp=arr[0]
     for y in range(0,len(arr)-1):
           arr[y]=arr[y+1]
     arr[len(arr)-1]=temp
for x in arr:
    print(x)       

print (arr)