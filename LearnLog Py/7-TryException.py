"""
try-except blogu kullanimi
try:
    #riskli kod
except:
    #hata durumunda burasi calisir
"""

try:
    x = int("abc")
except:
    print("Hata!")

try:
    x = int("abc")
except Exception as e:
    print("Hata: ", e)

try:
    x = 5 / 0
except Exception as e:
    print(type(e))

print("------------")


try:
    x = 1 / 1
except:
    print("Hata")
else:
    print("else blogu")
finally:
    print("Finally blogu") 

print("------------")


try:
    x = int("fsfsfsfs")
except:
    print("Hata")
else:
    print("Hata yoksa calisirim")
finally:
    print("Her zaman calisir")

print("------------")


try:
    x = 5
except:
    print("Hata")
else:
    print("Hata yoksa calisirim")
finally:
    print("Her zaman calisir")

print("------------")

#once ozel hata sonra genel hata yazilir
#asagidaki kod blogunda value error bloguna girmez
try:
    x = int("abc")
except Exception:
    print("Genel hata")
except ValueError:
    print("ValueError")

print("------")

#Ayni anda hata yakalama
try:
    x = int("abc")
except (ValueError, ZeroDivisionError, IndexError) as e:
    print("Hata oluştu:", e)

print("------")

#raise(hata firlatma)
#in java throw exception

"""def kontrol(yas):
    if yas < 0:
        raise ValueError("Yas negatif olamaz!")
    print("Yas:", yas)

kontrol(-5)"""

try:
    raise ValueError("HATA")
except ValueError as e:
    print("yakalandi:", e)

try:
    print("1")
    raise ValueError("Hata")
    print("2")
except ValueError:
    print("3")
except Exception:
    print("4")
finally:
    print("5")
#1 3 5