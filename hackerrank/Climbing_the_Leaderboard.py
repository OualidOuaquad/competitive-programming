import math
import os
import random
import re
import sys

# Complete the climbingLeaderboard function below.

# def insert(list, n): 
      
#     # Searching for the position 
#     for i in range(len(list)): 
#         if list[i] < n: 
#             index = i 
#             break
    
#     # Inserting n in the list 
#     list = list[:i] + [n] + list[i:] 
#     return list

# def climbingLeaderboard(scores, alice):
# 	n = len(scores)
# 	m = len(alice)
# 	r = 1

# 	ranks = [1]
# 	for i in range(1,n):
# 		t = scores[i-1]
# 		if scores[i] == t:
# 			ranks.append(r)
# 		else:
# 			r+=1
# 			ranks.append(r)


	
# 	alice_ranks = []

# 	for a in alice:
# 		if a in scores:
# 			ar = scores.index(a)
# 			alice_ranks.append(ranks[ar])
# 		elif a<min(scores):
# 			alice_ranks.append(ranks[-1]+1)
# 		else:
# 			l = insert(scores,a)
# 			ar = l.index(a)
# 			alice_ranks.append(ranks[ar])
		
	
# 	return alice_ranks

#########################################################################
# def climbingLeaderboard(scores,alice):
# 	n = len(scores)
# 	m = len(alice)
# 	R = [1 for x in range(m)]

# 	for i in range(m):
# 		for j in range(n):
# 			if alice[i]<scores[j]:
# 				R[i] += 1

# 	return R



# import pandas as pd
# import bisect 

# def climbingLeaderboard(scores,alice):
# 	n = len(scores)
# 	m = len(alice)
# 	ranks = []

# 	for a in alice :
# 		l = [s for s in scores]
# 		l.reverse()
# 		bisect.insort(l,a)
# 		l.reverse()
# 		df_l = pd.DataFrame(data = l, columns = ['scr']) 
# 		df_l['Rank'] = df_l.rank(method='dense',ascending=False).astype(int)
# 		x =df_l.loc[df_l.scr ==a ].Rank.values.tolist()[0]
# 		ranks.append(x)
# 	return ranks




n = int(input())
scores = list(map(int ,input().split()))
m = int(input())
alice =  list(map(int ,input().split()))

def climbingLeaderboard(scores,alice):


	alice_ranks =  []

	for sa in alice :
		index = 0
		l = [x for x in  scores]
		for i in range(len(l)): 
			if l[i] < sa: 
				index= i
				break
		if i == len(l)-1 and index == 0:
			l.append(sa)
		else:
			l = l[:index] + [sa] + l[index:]

		print('scores:	', scores,'	sa:	',sa)
		print('l:	',l)
		

		ranks = [0 for x in range(n+1)]   # n is the number of players 
		ranks[0]  = 1 
		if l[0] == sa :
			alice_ranks.append(1)
		else:
			for i in range(1,len(l)):
				if l[i] == l[i-1]:
					ranks[i] = ranks[i-1]

				else : 
					ranks[i] = ranks[i-1]+1

				if l[i]==sa:
					alice_ranks.append(ranks[i])
					break




	return alice_ranks 


print("--------------------------------------")
print(climbingLeaderboard(scores, alice))
print("--------------------------------------")

# scores = [100, 100 ,50, 40 ,40 ,20, 10]
# alice = [5 ,25 ,50, 120]

# l = [4,3,1]
# l_ = insert(l,3)
# print(l_.index(3))


# python Climbing_the_Leaderboard.py