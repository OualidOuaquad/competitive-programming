# -*- coding: utf-8 -*-
"""
Created on Wed Feb 19 19:07:51 2020

@author: O136114O
"""
################### data preparation ################################
filename = 'a_example'

f = open(filename+'.txt','r')

l = []

#for i in f:
 #   l.append([s for s in f.split()])
 
for line in f:
    l.append(str(line).rstrip('\n').split())
    
n = int(l[0][0])
del l[0]

for i in l :
    i[1]=int(i[1])

orig = [i for i in l]

print(l)
print("")
####################################################################


    

# fct to get a slide from two Vertical photos
def vslide(i):
    if l[i][0]=='V' and l[i+1][0]=='V' :
        l[i][2:]+= l[i+1][2:]
        l[i][1] += l[i+1][1]
        l[i]=list(dict.fromkeys(l[i]))  # to remove doubles
        del l[i+1]
    
    
def score(i,j):
    a = len([value for value in l[i][:2] if value in l[j][:2] ])  # common betewen i & j
    b = len([value for value in l[i][:2] if value not in l[j][:2] ])  # in i but not in j
    c = len([value for value in l[j][:2] if value not in l[i][:2] ])  # in j but not in i
    return min(a,b,c)

def orig_index():
    new_slides = []
    for i in slides :
        a = orig.index(conserved_l[i])
        
        if orig[a][0]=='V':
            new_slides.extend([a,a+1])
        else :
            new_slides.append(a)
            
        return new_slides


##################################################################
    
for i in range(len(l)-1):
    vslide(i)
  
conserved_l = [i for i in l]  

slides =[0]

for i in range(len(l)):
    max_score = 0
    index = 0
    for j in range(i,len(l)):
        if score(i,j)>=max_score:
            #print(i,j,score(i,j))
            index = j
            max_score = score(i,j)
    
    del l[index]
    slides.append(index)                    

new_slides = orig_index()
print(new_slides)


