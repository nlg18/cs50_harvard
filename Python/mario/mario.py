import cs50
    
valid_range = [1, 2, 3, 4, 5, 6, 7, 8]
while (True):
    h = cs50.get_int("Half-Pyramid Height: ")
    if h in valid_range:
        break

for i in range(h):
    print("")

    for b in range(h-1-i):
        print(" ", end=" ")
        #para triangulo: print("", end=" ")

    for x in range(i+1):
        print("#", end=" ")
        
print(" ", end="\n\n")
