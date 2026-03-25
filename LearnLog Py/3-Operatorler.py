#Aritmetik Operatorler
print(3 + 3.2)
print(5 - 2)
print(2 * 3.5)
print(4 ** 2)
print(pow(4,2))
print(10 / 5)
print(10 // 5)
print(8 % 2)
print(pow(2,3,2)) #pow(base: int, exp: int,mod:int)

print("\n------\n")

#Matematiksel Fonksiyonlar
abs(-8)  #8
round(3.33)     #3
round(3.14159,2)    #3.14
list = [2,2,2,2]
sum(list)   #8

set = {5,5,5}
sum(set)    #5

set2 = {5,4,1}
sum(set2)   #10

for i in range(2,8):
    print(i)

for i in range(2,8,2):
    print(i)

print("\n------\n")

#Assignment Operatorleri
a = 3
a += 2 # a = a + 2
a -= 1
a *= 2
# a /= 4
a //= 4
a **= 3
a %= 3
print(a)

print("\n------\n")

#Karsilastirmali(Comparison) Oprt
val0 = 3
val1 = 4
val3 = 3

print(val0 == val1)
print(val0 != val1 )
print(val0 < val1) 
print(val0 > val1)
print(val0 >= val1)
print(val0 <= val1)

print(id(val0))
print(id(val1))
print(id(val3)) 
# Small Integer Cache [-5 , 256]
# It's like string pool in java

x = 257
y = 257
print(x is y)   # False 
print(x == y)   # True 

print("\n------\n")

#Mantik(Logical) Oprt
n1 = 1
n2 = 2
n3 = 3
n4 = 4

n1 != n2 and n3 != n4
n1 == n2 or n3 == n4
not True
not( n1 == n2 or n3 == n4)

print("\n------\n")

#Membership Oprt
num_list = [51,52,53,54,55]
print(50 in num_list)
print(7 not in num_list)

print("\n------\n")

#Bitwise Oprt
print(bin(23)) #10111
bin(2)
23 & 2 # AND Gate
23 | 2 # OR Gate
23 ^ 2 #XOR
~23 #NOT
23<<2 #left rotation
23>>2 #right rotation

"""
&=
|=

"""
print("\n------\n")

