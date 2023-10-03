from collections import Counter
n=int(sys.stdin.readline().strip())
k=int(sys.stdin.readline().strip())
arr=[]
minindex=[]
while(n):
	x=int(input())
	arr.append(x)
	n=n-1
def Reverse(lst):
    lst.reverse()
    return lst
reverse1=Reverse(arr)
for i in range(k):
	o=min(reverse1)
	mm=reverse1.count(o)
	while(mm):
		reverse1.remove(o)
		mm=mm-1
reverse2=Reverse(reverse1)
sum=0
for i in range(len(reverse2)):
	sum=sum+reverse2[i]*100003**i
print(sum%1000000007)

	





	





