L=[]
N=int(input())
j=1
while j<N:
    command=input()
    if command=="insert":
        L.insert(i,e)
    if command=="remove":
        L.remove(e)
    if command=="append":
        L.append(e)
    if command=="sort":
        L.sort()
    if command=="pop":
        L.pop()
    if command=="reverse":
        L.reverse()
    if command=="print":
        print(L)
    j=j+1
