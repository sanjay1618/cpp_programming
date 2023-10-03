from math import gcd
n=int(input())
arr=[]
lcmarr=[]
while(n):
	x=int(input())
	arr.append(x)
	n=n-1
lenn=len(arr)
while(lenn):
	if len(arr)==1:
		print("1")
	for i in range(0,len(arr),2):
		x=arr[i]*arr[i+1]//gcd(arr[i],arr[i+1])
		lcmarr.append(x)
	lenn=len(arr)

  
	
	


