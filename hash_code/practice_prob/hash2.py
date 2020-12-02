# -*- coding: utf-8 -*-
"""
Created on Wed Feb 19 14:06:40 2020

@author: O136114O
"""


# c_medium    [1,n-2]

filename = "b_small"
l=[]

f = open(filename+'.in','r')

for i in range(2):
    
    x=f.readline()
    l.append([int(s) for s in x.split() if s.isdigit()])
    
    
#print(l)
#print('\n')

m = l[0][0]
n = l[0][1]
types = l[1]

import bisect

from itertools import combinations
from math import factorial as fct

bingo = []
min_diff = m



#while bingo==0:
#for x in range(2):

for i in range(1,n+1):
    #comb_number = fct(n)/(fct(i)*fct(n-i))
    comb = list(combinations(types,i))
    
    #print('number of comb for :',i," : ",comb_number)
    for j in comb:
        #print(sum(j))
        
        
        #diff = m-sum(j)
        #print('diff : ',diff)
        
        if   0 <= m-sum(j) < min_diff :
        #if diff== tol:
            min_diff = m-sum(j)
            bingo=j
            print(min_diff)
             
    print("")
    #tol+=1
    #m-=1
    #print ('New_tol : ',tol)
    
print('err ',min_diff)
print('bingo: ',bingo)

for i in bingo:
    out=[types.index(i) for i in bingo]
    
print('output: ',out)    
    


   """
def main():
    bingo=[types[i] for i in range(opt+1) ]
    bingo2 = [i for i in bingo]
    err = m-sum(bingo)
    start_time = time.time()

def apnd():
    a  = types[randrange(len(types))]
    
    if a in bingo2 :
        pass
    else:
        bingo2.append(a)
        
    
def delete():
    del bingo2[randrange(len(bingo2))]
    
#fct = [apnd(),delete()]
"""
    