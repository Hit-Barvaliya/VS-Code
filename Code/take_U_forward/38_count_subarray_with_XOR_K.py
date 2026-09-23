
# this is to take inpout

# n = int(input('Enter size of arrya :- '))
# ls = []
# for i in range(n):
#     temp = int(input('number :- '))
#     ls.append(temp)

# for i in ls:
#     print(i)
"""
This is brute solution :- 
timecomplexity :- O(n^3)
"""
# for i in range(ls.__len__()):
#     for j in range(i,ls.__len__()):
#         xr = 0
#         for k in range(i,j+1):
#             xr  ^= ls[k]
#             if xr==0 :
#                 count +=1



"""

"""

ls = [4,2,2,6,4]
count = 0

for i in range(len(ls)):
    xr = 0
    for j in range(i, len(ls)):
        xr ^= ls[j]        # incremental XOR
        if xr == 0:
            count += 1


print(count)

