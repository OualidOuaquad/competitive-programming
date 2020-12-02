
s = str(input())
# s = "pwwkew"
# def lengthOfLongestSubstring(s):
# 	s = list(s)
# 	l = []
	
# 	for i in range(len(s)):
# 		sl = []
# 		for j in range(i,len(s)):
# 			if s[j] not in sl :
# 				sl.append(s[j])
# 			else :
# 				break
# 		l.append(sl)


	
# 	len_l = [len(sl) for sl in l]
# 	try :
# 		return max(len_l)
# 	except:
# 		return 0

############################## SOL2 ##############################

def lengthOfLongestSubstring(s):
	d = {}
	s=list(s)
	n = len(s)
	for i in range(n):
		for j in 


# print("---------------------------")
print(lengthOfLongestSubstring(s))
# print("---------------------------")

# python Longest_Substring_Without_Repeating_Characters.py