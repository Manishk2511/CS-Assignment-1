
import random
import sys
from datetime import datetime



n=int(sys.argv[1])
m=int(sys.argv[2])

a=[[0]*m]*n
b=[[0]*m]*n
c=[[0]*m]*n

for i in range(0,n):
    for j in range(0,m):
        a[i][j]=random.random()
        b[i][j]=random.random()
    
start=datetime.now()



for i in range(0,n):
    for j in range(0,m):
        c[i][j]=0
        for k in range(0,n):
            c[i][j]+=a[i][k]*b[k][j]
        
time=datetime.now()-start
print(time)

    

 


