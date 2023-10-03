n=int(input())
arr=[]


while(n):
	x=int(input())
	arr.append(x)
	n=n-1
initial=0
count=0
k=0 
for i in range(2,max(arr)+1):
	count=0
	initial=0

	for j in range(len(arr)):
		if arr[j]%i==0:
			arr[j]=arr[j]//i
			count=count+1



	if count!=initial:
		k=k+1
	

	

	
		    
print(k)


