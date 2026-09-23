str = "i am studying in CHARUSAT collage."
#---------str.endswith----------
x = str.endswith("ge")     #returns true if string ends with substring
print(x)
print(str.endswith("ge."))  # -> this line will not change in original string


#---------str.capitalize----------
str = str.capitalize()      #this line change in original string
                            #capitalize 1st letter {and all other letter make samll}
print(str)


#----------str.replace----------
                             #to replace some value
print(str.replace("i","A"))                  #we do also cahnge in words


#---------str.find--------------
print(str.find("c"))            #find the index of substring
print(str.find("study"))        #if return -1 means that substring is not matched


#---------str.count--------------
print(str.count("in"))          #for count words and letter
print(str.count("a")) 

