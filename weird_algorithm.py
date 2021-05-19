n=int(input())
while True:
 if(n==1):
  print(n,end=" ")
  break
 print(n,end=" ")
 if (n%2==0):
     n//=2
 else:
    n*=3
