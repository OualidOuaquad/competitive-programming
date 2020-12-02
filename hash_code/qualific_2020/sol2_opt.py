# -*- coding: utf-8 -*-
"""
Created on Fri Feb 21 12:26:30 2020

@author: O136114O
"""

files = ["b_read_on.txt","c_incunabula.txt","d_tough_choices.txt","e_so_many_books.txt","f_libraries_of_the_world.txt"]
files0 = ["d_tough_choices.txt"]


#filename = 'a_example.txt'
for filename in files:
    f = open(filename,'r')
    
    def readfile(path):
        with open(path,'r') as file:
            Lines = file.readlines()
        Lines = [s.replace('\n', '') for s in Lines]
        biglist=[]
        for line in Lines:
            templist=line.split(" ")
            biglist.append(templist)
        return biglist
    
    datalist=readfile(filename)
    nbTotalOfBooks=int(datalist[0][0])
    nbOfLibraries=int(datalist[0][1])
    dayForScanning=int(datalist[0][2])
    scoring=datalist[1]
    libraries=datalist[2:]
    i=0
    listFavorableLib=[]
    while(i<int(nbOfLibraries)*2):
        books=int(libraries[i][0])
        signup=int(libraries[i][1])
        bookPerDay=int(libraries[i][2])
        potential=(dayForScanning-signup)*bookPerDay
        empthyDay=(potential-books)/bookPerDay
        listFavorableLib.append(empthyDay)
        i=i+2
    
    indexfavlib=sorted(range(len(listFavorableLib)), key=lambda k: listFavorableLib[k])
    
    doubleindexfavlib=[s*2 for s in indexfavlib]
    totalofday=0
    s=0
    while(s<len(doubleindexfavlib)):
        totalofday=int(totalofday)+int(libraries[doubleindexfavlib[s]][1])
        if(int(totalofday)>int(dayForScanning)):
            break
        s = s + 1
    doubleindexfavlib = doubleindexfavlib[:s]
    indexfavlib=[int(s/2) for s in doubleindexfavlib]
    
    
    print(indexfavlib)
    
    lib_info = []
    bld_ = f.readline()
    scores_ = f.readline()
    
    
    bld = [ [int(s) for s in bld_.split() if s.isdigit()] ][0]
    scores = [ [int(s) for s in scores_.split() if s.isdigit()]][0]
    
    l = bld[1]
    
    #print(bld)
    #print(scores)
    
    
    for i in range(l):
        
        lib_info.append([])
        for j in range(2):
            
            x=f.readline()
            
            lib_info[i].append([int(s) for s in x.split() if s.isdigit()])
        
    

    import math 

    
    
    def shipbooks(t,lib_i):
        
            
        rd = bld[2] - t    # reamining time 
        #print("lib_i ",lib_i)
        tot_book_number  = lib_info[lib_i][0][0]
        n_book_per_day =  lib_info[lib_i][0][2]
        tot_shiping_days  =math.ceil( tot_book_number/n_book_per_day)
        
        while rd<tot_shiping_days:
            tot_book_number -=1
            tot_shiping_days  =math.ceil( tot_book_number/n_book_per_day)
            
        return tot_book_number
            
    """    
    def bcount(b):
        return all_books.count(b)
        
    """
            
    ########################################################
    
    t = 0 
    lib_ship = []
    books = []
    lib_i = indexfavlib[0]   # lib index 
    
    i=0
    
    
    while t < bld[2] and lib_i<l and i < len(indexfavlib) :
        if shipbooks(t,lib_i)!=0:
            lib_ship.append(lib_i)
            t+=lib_info[lib_i][0][1]
            books.append(lib_info[lib_i][1][0:shipbooks(t,lib_i)])
            i+=1
            if i < len(indexfavlib):
                lib_i = indexfavlib[i]   # lib index 
            
        else :
            print("saturation")
            break
    
    #print(lib_ship)    
    """
    with open('out4\\'+filename +'_out.txt', 'w') as f:
        f.write("%s\n" % len(lib_ship))
        for lib in lib_ship:
            f.write("\n%s %s\n" % (lib,len(books[lib_ship.index(lib)])))
            for b in books[lib_ship.index(lib)]:
                f.write("%s " %b)

    """
    
