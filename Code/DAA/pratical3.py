
def mergeLS(ls, low, mid, high):

    temp = []

    left,right = low,mid+1

    while(left<=mid & right<=high):
        if(ls[left] >= ls[right]):
            temp.insert(ls[right])
            right += 1
        else :
            temp.insert(ls[left])
            left += 1

    if(left < mid):
        while(left <= mid):
            temp.insert(ls[left])
            left += 1

    if(right < high):
        while(right < high):
            temp.insert(ls[right])
            right += 1

    for i in range(len(temp)):
        ls[i] = temp[i]



def ms(ls, low, high):
   
    mid = (low + high)/2

    if(low >= high):
         return

    ms(ls,low,mid)
    ms(ls,mid+1,high)

    mergeLS(ls,low,mid,high)

    print("After sorting array is :- ",ls)




# main function 

size = int(input("Enter the size of array :- "))
ls = []

# take inout of array :- 
for i in range(size):
   num = int(input("Enter element :- "))

   ls.append(num)

ms(ls,0,len(ls))


