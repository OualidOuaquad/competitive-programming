

t = int(input())
j =1 
while t>0:
	n,b = map(int ,input().split())
	a = list(map(int, input().split()))

	a.sort()

	x = 0
	i = a[0]
	while i<= b :
		i+=a[x+1]
		x+=1
	# print("------------------------------------")
	print("Case #"+ str(j)  +": "+str(x) )
	# print("------------------------------------\n")

	j+=1
	t-=1 



# n,b = 4 ,100
# a = [20, 90, 40, 90]




