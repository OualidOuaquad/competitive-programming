

import math 


def encryption(s):
	encrypted = ""
	L = len(s)
	r = math.floor(math.sqrt(L))
	c = math.ceil(math.sqrt(L))

	if r*c < L:
		r=c

	print(L,r,c)
	grid =[]

	a = 0
	b = c
	for i in range(r):
		try :
			grid.append(s[a:b])
			a = b
			b+=c

			# print(a,b)

		except : 
			grid.append(s[t:])


	for j in range(c):
		 
		for i in range(r-1):
			encrypted+=grid[i][j]

		encrypted+=" "	

	index = r-1
	for i in range(len(grid[-1])):
		# s.insert(index,grid[-1][i])
		encrypted = encrypted[:index] + grid[-1][i] + encrypted[index:]
		index+=1+r

	return encrypted


print(encryption("chillout"))

# i = 2
# a = "ch il lout"

# v = a[0:i]+"0"+a[i:]
# i+=2+2
# c = v[0:i]+"0"+v[i:]
# print(c)
