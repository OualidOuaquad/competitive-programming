t = int(input())
case =1 
while t>0:
	dp  = [[0 for x in range(51)] for x in range(1501)] 
	dp[0][0] = 0
	a = []



	n,k,p = map(int ,input().split())

	for i in range(n):
		a.append( list(map(int, input().split())))

	for i in range(n):
		for j in range(k):
			s = 0 
		

			s+= a[i][j]

			l = 0
			while l+j+1 <= p:
				dp[i+1][l+j+1] = max(dp[i][l]+s, dp[i+1][l+j+1])
				l+=1
	





	
	print("------------------------------------")
	print("Case #"+ str(case)  +": "+str(dp[n][p]) )
	print("------------------------------------\n")

	case+=1
	t-=1 



# a = [[10, 10 ,100 ,30],[80, 50 ,10 ,50]]
# n,k,p = 2, 4, 5

# dp  = [[0 for x in range(51)] for x in range(1501)] 
# dp[0][0]  = 0 





# i = 0
# while i<n:
# 	j = 0
# 	while j < k :
# 		s = 0 
# 		s+= a[i][j]

# 		l = 0
# 		while l+j+1 <= p:
# 			dp[i+1][l+j+1] = max(dp[i][l]+s, dp[i+1][l+j+1])
# 			l+=1

# 		j+=1 

# 	i+=1



