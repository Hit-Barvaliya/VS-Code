str1 = "Hello World"
print(str1[6])

print("we can not change the specific character with the help of index")
# str1[1] = 'H' ==> This is give error

str2 = "Barvaliiya Hit Rajeshbhai"
print(str2[8 : 19])     # -> work in this formate :- [a,b) a will add while b is not add in the answer
print(str2[8 : 9999])
print(str2[8 : len(str2)])
print(str2[8 : ])   #this is end at last element of that string
print(str2[ : 19]) #this is start wiht 0th index
#here index was in negative  like this
#string          -> A  p  p  l  e
#index number      -5 -4 -3 -2 -1       
str3 = "Hello World"
print("This is asnwer of str3[-8 : -1] :- ",str3[-8 : -1])
print("This is answer of str3[-8 : ] :- ",str3[-8 : ])
print("This is answer of str3[ : -3] :- ",str3[ : -3])