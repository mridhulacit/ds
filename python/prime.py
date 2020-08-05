import matplotlib.pyplot as plt 
x=[]
for Number in range (2,10):
    count = 0
    for i in range(2, (Number//2 + 1)):
        if(Number % i == 0):
            count = count + 1
            #break
    if (count == 0):
        x.append(Number)

n=len(x)
y = list(range(n))
plt.scatter(y,x) 
plt.show() 

