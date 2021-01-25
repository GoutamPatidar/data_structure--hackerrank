
def hourglass(arr):
    max=-9999999
    for x in range(4):
        for y in range(4):
            a=arr[x][y]+arr[x][y+1]+arr[x][y+2]+arr[x+1][y+1]+arr[x+2][y]+arr[x+2][y+1]+arr[x+2][y+2]
            if(max<int(a)):
                max=a     
    return max

a=[]
for _ in range(6):
    a.append(list(map(int,input().rstrip().split())))

print(hourglass(a))