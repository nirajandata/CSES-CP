n=input().split()
a=[i for i in input().split()]
a=[list(i) for i in set(tuple(x) for x in a)]
print(len(a))
