n=int(input())
ac_sum=[int(x) for x in input().split()]

ac_sum=sum(ac_sum)

c_sum=0
for i in  range(n+1):
 c_sum+=i
 

c_sum=c_sum-ac_sum
print(c_sum)
