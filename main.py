from time import time

def isPrimary(x):
    if x < 2: return False
    if x >= 2:
        for i in range(2, x//2):
            if x % i == 0: return False
    return True

def quadruplet(x):
    T = []
    y = 2
    while y + 8 <= x:
        if isPrimary(y)==True and isPrimary(y + 2)==True and isPrimary(y + 6)==True and isPrimary(y + 8)==True:
            T.append([y, y + 2, y + 6, y + 8])
        y += 1
    return T

n = int(input("Podaj liczbę: "))

start_time = time()

print("Zestawy liczb czworaczych: ", quadruplet(n))

end_time = time()
print("\n-------", end_time - start_time, "seconds -------")
