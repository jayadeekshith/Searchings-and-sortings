def mergeso(ar):
    if len(ar)>1:
        m=len(ar)//2
        l=ar[:m]
        r=ar[m:]
        mergeso(l)
        mergeso(r)
        i=j=k=0
        while i<len(l) and j<len(r):
            #left sub array
            if l[i]<r[j]:
                ar[k]=l[i]
                i+=1
            else:
              #right subarray
                ar[k]=r[j]
                j+=1
            k+=1
        while i<len(l):
            ar[k]=l[i]
            i+=1
            k+=1
        while j<len(r):
            ar[k]=r[j]
            j+=1
            k+=1
li=list(map(int,input().split()))
mergeso(li)
print(li)
