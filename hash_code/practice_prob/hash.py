# -*S- coding: utf-8 -*-
"""
Created on Sun Feb 16 14:38:58 2020

@author: O136114O
"""


files = {"a_example":1,"b_small":2,"c_medium":1,"d_quite_big":5,"e_also_big":5}

for filename in files.keys() :
    max_err = files[filename]
    
    
    l=[]
    
    
    
    f = open(filename+'.in','r')
    
    for i in range(2):
        
        x=f.readline()
        l.append([int(s) for s in x.split() if s.isdigit()])
        
        

    
    m = l[0][0]
    n = l[0][1]
    types = l[1]
    
    ###########################################
    import numpy as np 
    import bisect
    from random import randrange
    import time
    
    sums = np.cumsum(types).tolist()
    bisect.insort(sums, m) 
    opt = sums.index(m)-1
    
    bingo=[types[i] for i in range(opt+1) ]
    bingo2 = [i for i in bingo]
    bingo_ = types[opt+1:]    
        
    err = m-sum(bingo)
        
    del sums[sums.index(m)]
    
 

    while err > max_err:
        
        a = randrange(len(bingo2))
        b = randrange(len(bingo_))

        y = bingo_[b]
        
        
        bingo2[a],bingo_[b] = bingo_[b],bingo2[a] 
            
        if m-sum(bingo2)>=0:
            
            bingo = [i for i in bingo2]
            
            err = min(m-sum(bingo),err)

        else:
            bingo_[b],bingo2[a]  = bingo2[a],bingo_[b]
    
    
            
    
    bingo.sort()
    out=[types.index(i) for i in bingo]
    
    ref = 0
    for i in range(len(out)-1):
        c = out.count(out[i])
        ref = out[i]
        
        for j in range(1,c):
            if out[j+i]==ref:
                out[i+j]+=1 
            

    
    
    with open(filename +'.txt', 'w') as f:
        f.write("%s\n" % len(out))
        for item in out :
            f.write("%s " % item)
    
    
    print("")