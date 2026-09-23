
f1 = open('D:\\Programming\\Python\\telusko\\fileHandling','r')
print("This will print read() :- ")
print(f1.read()) # to read the whole file


# after read the file with f1 pointer it will reach to the end of pointer so we cannot read more with that pointer so we set that pointer at start or make a  new pointer

print("\nThis is will readline() :- ")
f2 = open('D:\\Programming\\Python\\telusko\\fileHandling','r')
print(f2.readline())
print(f2.readline(),end="") # it will not give extra space
print(f2.readline())

    
f3 = open('D:\\Programming\\Python\\telusko\\fileHandling','r')

w1 = open('D:\\Programming\\Python\\telusko\\fileHandlingnew','w')
"""
-> if the file is not exsits then it will creat a new file otherwise open old file
-> when we open file in write then it will erase all previous data 
"""

# w1.write("People")

for i in f3:
    w1.write(i)


f4 = open('D:\\Programming\\Python\\telusko\\fileHandling_photo_new.jpg','rb')
print("We read file in binary form :-")

print(f4.read())

# we can make a copy of photo
w2 = open('D:\\Programming\\Python\\telusko\\fileHandling_photo_new.jpg','wb')

w2.write(f4.read())

# we must use '#' for comment while ' """ ' is not used for comment our pointer this line
# ' """ ' is used for documentation not for the comment


