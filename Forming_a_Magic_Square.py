import numpy as np

s =np.asarray([[4 ,9, 2],
			   [3 ,5 ,7],
			   [8 ,1, 5]]
) 

print(s[s<5]) 
# print(sum(s[0]))

print(s[:,2])


def formingMagicSquare(s):
	c = 0
	n = len(s[0])
	rows_sum = [sum(r) for r in s]   
	cols_sum = [sum(s[:,i]) for i in range(n) ]
	diag_sums = [sum(s.diagonal()), sum(np.fliplr(s).diagonal())]
	cost = 0
	mc = (n**2+1)*n/2
	diff={}

	while np.all(rows_sum)!= mc or np.all(cols_sum)!= mc or np.all(diag_sums) :
		break		


		
	return rows_sum,cols_sum,diag_sums,cost


a,b,c ,cost= formingMagicSquare(s)
print(a)
print(b)
print(c)

