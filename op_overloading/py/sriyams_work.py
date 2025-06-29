def evenmethod(i):
    if i%2 == 0:
        return 0
    else:
        return i

l = [1,2,3,4]
even = list(map(evenmethod,l))
print(even)
