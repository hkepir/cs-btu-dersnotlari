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

# Loops: for, break, continue, pass
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

# Nested loops
for i in range(1, 4):
    for j in range(1, 4):
        print(f"i={i}, j={j}")

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
