import cs50

valid_range = [1, 2, 3, 4, 5, 6, 7, 8]
while (True):
    h = cs50.get_int("Double-Pyramid Height: ")
    if h in valid_range:
        break
    
    print("")
    
for i in range(h):
    
    
#linha, numero de espaços, numero de #, valor de i
#i + 1, h - 1 - i        , i + 1      , 0
#i + 1, h - 1 - i        , i + 1      , 1

    
    for b in range(h - 1 - i):
        print(" ", end=" ")

    for x in range(i+1):
        print("#", end=" ")
        
    print(" ", end="")
        
    for y in range(i+1):
        print("#", end=" ")
        
    print("")
        
print(" ", end="\n\n")