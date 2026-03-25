if False:
    print("Hi")
print("Selam")
if True:
    print("Merhaba")

# if - elif - else
val = 10

if val < 0:
    print("Negative")
elif val == 0:
    print("Zero")
else:
    print("Positive")

# Kisaltilmis if (ternary)
x = 5
y = 10
result = "x buyuk" if x > y else "y buyuk"
print(result)

print("------")

# Donguler (for loop)
#  for, break, continue, pass
sayilar = [1, 2, 3, 4, 5]

for s in sayilar:
    if s == 3:
        continue   # skip 3
    if s == 4:
        break      # break loop at 4
    print("Number:", s)

# pass  
for i in range(5):
    pass  

# Condition inside loop
for i in range(1, 6):
    if i % 2 == 0:
        print(i, "even")
    else:
        print(i, "odd")

print("------")

# Nested loops
for i in range(1, 4):
    for j in range(1, 4):
        print(f"i={i}, j={j}")

print("------")

metin = ["abc","def","ghi"]

for kelime in metin:
    for  harf in kelime:
        """
        if harf == 'd':
            continue
        """
        print(harf)
    print("\nkelime: ",kelime)
print("\nCongrats!")

print("------")

#Donguler (while loop)
x = 2

if x <5:
    print(x)

while x < 5:
    print(x)
    """
    if i == 3:
        break 
    if i == 4:
        continue
    """
    x += 1
print("----")

#List Comprehension

liste_80 = [81,82,83,84,85]
liste_90 = [91,92,93,94,94]
yeni_liste = []

for i in liste_80:
    yeni_liste.append(i)
print(yeni_liste)

yeni_liste = [i for i in liste_90]
print(yeni_liste)

yeni_liste = [i+10 for i in liste_90]
print(yeni_liste)

print("----")

numbers = [1,2,3,4,5,6,7,8,9]
odd_num = list()

for n in numbers:
    if n % 2 == 0 or n == 10:
        odd_num.append(n)
print(odd_num)

odd_num = [n**2 for n in numbers if(n % 2 == 0 or n == 10)]
print(odd_num)