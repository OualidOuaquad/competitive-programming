
def gridSearch(G, P):


	i = 0 
	j = 0 
	a = 0 
	while i<r and j<R :
		pos = G[j].find(P[i])

		if pos != -1:
			if i == 0 :
				a = pos
				i+=1

			elif a == pos :
				i+=1


		j+=1 
			
	if i == r:
		return ("YES")
	else:
	 	return("NO")

##########################################################
t = int(input())
filename = 'gridSearch.txt'
with open(filename , 'w') as f:

	for i in range(t):
			
		R, C = map(int ,input().split()) 
		G = []
		for i in range(R):
			# G.append([int(g) for g in list(input())])
			G.append(input())


		r, c = map(int ,input().split())
		P = []
		for i in range(r):
			# P.append([int(p) for p in list(input())])
			P.append(input())


		f.write("%s\n" % gridSearch(G,P))

		# print("---------------------")
		# print(gridSearch(G,P))
		# print("---------------------")
