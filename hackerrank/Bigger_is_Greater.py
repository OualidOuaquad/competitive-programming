
def biggerIsGreater(w):
	a = [ord(i) for i in list(w)]
	pre = []
	b = []
	

	i = len(a) - 1
	j = len(a) - 2 
	while i>=0 and j>=0 :
		if  a[i]<=a[j] and len(a)>2:
			if j==0 :
				i-=1
				j=i
			else:
				j-=1 
		else :
			a[i],a[j] = a[j],a[i]
			c = a[j+1:]
			c.sort()
			pre = a[:j+1] + c
			break

 
	b = [chr(x) for x in pre]
	result  = ''.join(b)


	if result== w :
		return "no answer"

	else :
		return result





filename = 'Bigger_is_Greater_out.txt' 
t = int(input())
j =1 
with open(filename , 'w') as f:
	while t>0:
		w = str(input())

		
		print("------------------------------------")
		print("Case #"+ str(j)  +": "+biggerIsGreater(w) )
		print("------------------------------------\n")

		j+=1
		t-=1

		f.write("%s\n" % biggerIsGreater(w))

f.close()

# python Bigger_is_Greater.py



import numpy as np 
x = np.array([1,2,3])