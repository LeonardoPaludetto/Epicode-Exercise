from math import pi

figura = input("Inserisci la figura (quadrato, cerchio, rettangolo): ")
print("Hai scelto:", figura)

if figura == "quadrato":
    lato = float(input("Inserisci la lunghezza del lato: "))
    perimetro = lato * 4
    print("Il perimetro del quadrato è:", perimetro)

elif figura == "cerchio":
    raggio = float(input("Inserisci il raggio del cerchio: "))
    perimetro = 2 * pi * raggio
    print("Il perimetro del cerchio è:", perimetro)

elif figura == "rettangolo":
    base = float(input("Inserisci la base del rettangolo: "))
    altezza = float(input("Inserisci l'altezza del rettangolo: "))
    perimetro = 2 * base + 2 * altezza
    print("Il perimetro del rettangolo è:", perimetro)

else:
    print("Figura non conosciuta dal sistema")
    