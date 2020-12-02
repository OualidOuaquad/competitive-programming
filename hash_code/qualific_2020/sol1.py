# -*- coding: utf-8 -*-
"""
Created on Thu Feb 20 18:33:55 2020

@author: O136114O
"""




filename = 'a_example.txt'

f = open(filename,'r')


lib_info = []
bld_ = f.readline()
scores_ = f.readline()


bld = [ [int(s) for s in bld_.split() if s.isdigit()] ][0]
scores = [ [int(s) for s in scores_.split() if s.isdigit()]][0]

l = bld[1]





#print(bld)
#print(scores)


for i in range(2*l):
    
    
    x=f.readline()
    
    
    lib_info.append([int(s) for s in x.split() if s.isdigit()])
    
    

# les element li west had la list sont des list fihom les information 3la 
print(lib_info)
    

all_books = []

for i in range(l):
    
    all_books.extend(lib_info[2*i+1])
    

def bcount(b):
    return all_books.count(b)
    
dict_books = {}

for b in all_books :
    dict_books[b] = bcount(b)

print(dict_books)    


def countunrep(books):

    x = [0,[]]
    for book in books  :
        
        if dict_books[book]==1:
            
            x[0]+=1
            x[1].append(book)
           
    
    return x

import math 

def unrep_score_sum(books):
    ubooks = countunrep(books)[1]
    
    uscores = [ scores [s] for s in ubooks  ]
    
    return sum(uscores)
    
    

def scorelib(lib_info1,scr,books):
    sup = lib_info1[1]
    perday = lib_info1[2]
    unrep = countunrep(books)[0]
    sum_scores = unrep_score_sum(books)
    days = sup + math.ceil(unrep/perday)
    
    return sum_scores/days


dict_sroce_libs = {}
list_sroce_libs = []



for i in range(l):
    dict_sroce_libs[2*i] = scorelib(lib_info[2*i][1],lib_info[2*i][2],lib_info[2*i+1])
    
sorted_dict_sroce_libs = {k: v for k, v in sorted(dict_sroce_libs.items(), key=lambda item: item[1])}
    

pp = []

for key in sorted_dict_sroce_libs :
    pp.append(countunrep(lib_info[2*key+1]))
    






    