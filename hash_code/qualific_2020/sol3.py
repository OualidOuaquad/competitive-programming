# -*- coding: utf-8 -*-
"""
Created on Fri Feb 21 17:10:08 2020

@author: O136114O
"""


files0 = ["b_read_on.txt","c_incunabula.txt","d_tough_choices.txt","e_so_many_books.txt","f_libraries_of_the_world.txt"]

files = ["d_tough_choices.txt"]

#filename = 'a_example.txt'
for filename in files :
    
    print(filename,' start')
    
    f = open(filename,'r')
    
    
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
        
    lib_not_opt = {}
    
    for b in range(bld[0]):
        lib_not_opt[b] =  scores[b]
        
    sorted_lib_not_opt= {k: v for k, v in sorted(lib_not_opt.items(), key=lambda item: item[1],reverse=True)}

    import math 
    
    
    def n_shipbooks(t,lib_i):
        
            
        rd = bld[2] - t    # reamining time 
        #print("lib_i ",lib_i)
        tot_book_number  = lib_info[lib_i][0][0]
        n_book_per_day =  lib_info[lib_i][0][2]
        tot_shiping_days  =math.ceil( tot_book_number/n_book_per_day)
        
        while rd<tot_shiping_days:
            tot_book_number -=1
            tot_shiping_days  =math.ceil( tot_book_number/n_book_per_day)
            
        return tot_book_number
    
    def shipbooks(t,lib_i):
        n = n_shipbooks(t,lib_i)
        b_lst = []
        for key in sorted_lib_not_opt:
            for i in range(n):
                if key == lib_info[lib_i][1][i]:
                    b_lst.append(key)
        #print(b_lst)
        return b_lst
    """    
    def bcount(b):
        return all_books.count(b)
        
    """

    

    ########################################################
    
    
    t = 0 
    lib_ship = []
    lib_i = 0   # lib index 
    books =  []
    while t < bld[2] and lib_i<l:
        if n_shipbooks(t,lib_i)!=0:
            lib_ship.append(lib_i)
            t+=lib_info[lib_i][0][1]
            #books.append(lib_info[lib_i][1][0:n_shipbooks(t,lib_i)])
            #print(n_shipbooks(t,lib_i))
            books.append(shipbooks(t,lib_i))
            lib_i+=1
            
        else :
            print("saturation")
            break
    
    #print(lib_ship)    

    with open('out3\\'+filename +'_out.txt', 'w') as f:
        f.write("%s\n" % len(lib_ship))
        for lib in lib_ship:
            f.write("\n%s %s\n" % (lib,len(books[lib_ship.index(lib)])))
            for b in books[lib_ship.index(lib)]:
                f.write("%s " %b)


    print(filename,' finish')
    print("")