#Using Python as a Calculator

2 + 2
#4

50 - 5*6
#20

(50 - 5*6) / 4
#result=5.0

8 / 5  # division always returns a floating-point number
#result=1.6

17 / 3  # classic division returns a float
5.666666666666667

17 // 3  # floor division discards the fractional part:kesirli kısmı atar
#5

17 % 3  # the % operator returns the remainder of the division
#2

5 * 3 + 2  # floored quotient * divisor + remainder:kalan
#17

5 ** 2  # 5 squared
#25

2 ** 7  # 2 to the power of 7
#128

"""
n  # try to access an undefined variable
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
NameError: name 'n' is not defined

"""
#trings can be concatenated (glued together) with the + operator, and repeated with *:

x='Py' 'thon'
print(x)
#python

#SyntaxError print(3('s'+2i+r)) derleyici i yi komplex sayı olarak degerlerndirir

#path 1
word='k'+2*'a'+'n'
print(word)

#path 2
# Değişkenlerin tanımlanması
k = 'k'
a = 'a'
n = 'n'

# 'kaan' kelimesinin oluşturulması
word = k + 2 * a + n

# Sonucun yazdırılması
print(word)

#kaan
"""------------------------------------------------------------

+---+---+---+---+---+---+
 | P | y | t | h | o | n |
 +---+---+---+---+---+---+
 0   1   2   3   4   5   6
-6  -5  -4  -3  -2  -1

"""

#Positive Indexing
word = 'Python'
word[0]  # character in position 0 ---> 'P'
word[5]  # character in position 5 ---> 'n'

#Negative Indexing
word[-1] # last character ---> 'n'
word[-2] # second-last character --->'o'
word[-6] # character in position 0 ---> 'P' the first character

#slicing
word[0:2]  # characters from position 0 (included) to 2 (excluded)    --> 'Py'
print(word[2:5])  # characters from position 2 (included) to 5 (excluded)   -->'tho'

#Changing Letter------------------------------------------------------------

word = 'Python'
result1 = 'J' + word[1:]
result2 = word[:2] + 'py'

print(result1)  # 'Jython'
print(result2)  # 'Pypy'

#len() returns the length of a string:-------------------------------------------

s = 'supercalifragilisticexpialidocious' #34
print(len(s))























