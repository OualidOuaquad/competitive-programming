

def func(x):
	return x

##########################################################
t = int(input())
filename = 'out.txt'
with open(filename , 'w') as f:

	for i in range(t):
		f.write("case : %d %d\n" %(i ,func(t)))

	# for i in range(t):
			
	# 	R, C = map(int ,input().split()) 
	


	# 	f.write("%s\n" % func(G,P))
