
from functools import reduce

def extraLongFactorials(n):
<
	result = reduce((lambda x, y: x * y), [i for i in range(1,n+1)])
	return result




print(extraLongFactorials(25))


print([i for i in range(1,21)])
