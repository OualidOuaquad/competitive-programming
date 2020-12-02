
# a_set = {1,7,2,4}
# c = [1,2,3,4]
# data = itertools.combinations(c, 2)
# subsets = set(data)
# print(subsets)
# for i in subsets:
# 	print(sum(list(i)))

# import itertools
# from functools import reduce


# def nonDivisibleSubset(k, s):
# 	allies = {}

# 	# nonDivisible = set()
# 	# excluded = set()

# 	data = itertools.combinations(s, 2)
# 	subsets = set(data)


# 	# print(subsets)
# 	# for tpl in subsets :
		
# 	# 	sum_tpl = sum(list(tpl))

# 	# 	if sum_tpl % k != 0:
# 	# 		if tpl[0] not in nonDivisible :

# 			# nonDivisible = nonDivisible.union(set(tpl))

# 	# for tpl in subsets :
# 	# 	sum_tpl = sum(list(tpl))


# 	# 	if sum_tpl % k == 0:
# 	# 		if tpl[0] not in excluded:
# 	# 			excluded.add(tpl[0])
# 	# 		if tpl[1] not in excluded:
# 	# 			excluded.add(tpl[1])

			
# 	# 	else :
# 	# 		if tpl[0] not in excluded:
# 	# 			nonDivisible.add(tpl[0])
# 	# 		if tpl[1] not in excluded:
# 	# 			nonDivisible.add(tpl[1])
# 			#######################################
# 	for tpl in subsets :
# 		sum_tpl = sum(list(tpl))


# 		if sum_tpl % k != 0:


# 			if tpl[0] not in allies:
# 				allies[tpl[0]] = {tpl[1],tpl[0]}
# 			else : 
# 				allies[tpl[0]].add(tpl[1])

# 			if tpl[1] not in allies:
# 				allies[tpl[1]] = {tpl[0],tpl[1]}
# 			else : 
# 				allies[tpl[1]].add(tpl[0])




# 		# if sum_tpl % k == 0 :
# 		# 	excluded = excluded.union(set(tpl))

# 		# 	print("     " ,excluded)

# 		# elif len(set(tpl)&excluded) == 0:
# 		# 	nonDivisible = nonDivisible.union(set(tpl))


# 	# print("allies:	",allies)


# 	# return len(nonDivisible)
# 	# print("nonDivisible:	", nonDivisible)
# 	# print("len:	",len(nonDivisible))
# 	l = list(allies.values())
# 	# l = [len(i) for i in l]
# 	# result = reduce((lambda x, y: set.intersection(x, y)), [i for i in l]) 
# 	# print("result", result)
# 	l.sort(len)
# 	result = set.intersection(l[0],l[1]) 
# 	# print("len:	", len(result))
# 	m = len(result)
# 	for i in range(1,len(l)-1):
# 		result = set.intersection(result,l[i])
# 		m =max(m,len(result))

# 	return m



# # A = (1,2)

# C = {9}

# B = B.union(C)
# print(B)

# print(set(A).issubset(B))

# Python3 program to get size of 
# subset whose each pair sum is 
# not divisible by k 

# Returns maximum size of subset 
# with no pair sum divisible by k 
def nonDivisibleSubset(k,s): 

	# say for storing frequency 
	# of modulo values 
	f = [0 for i in range(k)] 
	N = len(s)
	# Fill frequency say with 
	# values modulo k 
	for i in range(N): 
		f[s[i] % k] += 1

	# if k is even, then update f[k/2] 
	if (k % 2 == 0): 
		f[k//2] = min(f[k//2], 1) 

	# Initialize result by minimum of 1 or 
	# count of numbers giving remainder 0 
	res = min(f[0], 1) 

	# Choose maximum of count of numbers 
	# giving remainder i or k-i 
	for i in range(1,(k // 2) + 1): 
		res += max(f[i], f[k - i]) 

	return res	
# Driver Code 
# s = [3, 7, 2, 9, 1] 
# N = len(s) 
# k = 3
# print(subsetPairNotDivisibleByk(s, N, k)) 

# This code is contributed by Anant Agarwal. 


n,k = map(int ,input().split())


s =  list(map(int, input().split()))


# print("------------------------------------")
# print("nonDivisible:	",nonDivisibleSubset(k,s))
# print("len:	",len(nonDivisibleSubset(k,s)))
nonDivisibleSubset(k,s)

# print("------------------------------------\n")

# python Non_Divisible_Subset.py

