def contatore_parole(lista_parole):
    lista_lunghezze = []
    for parola in lista_parole:
        lunghezza = len(parola)
        lista_lunghezze.append(lunghezza)
    return lista_lunghezze

# Test funzione
parole = ["Ciao", "Epicode", "Python", "Cybersecurity"]
print(contatore_parole(parole))


# Funzione generatore password 
# Premetto in anticipo che per lo svolgimento di "Generatore Password" mi sono fatto venire in aiuto da ChatGPT

import random
import string

def generatore_password():
    print("Benvenuto all'interno del generatore di password")
    print("Hai la possibilità di scegliere il livello della tua password")

    # Livello di complessità della password
    print("\nScegli la complessità per la tua password:")
    print("1. Semplice (lettere, numeri)")
    print("2. Complessa (lettere, numeri, caratteri speciali)")
    livello = input("Inserisci: 1 per Semplice o 2 per Complessa: ").strip()

    if livello == "2":
        caratteri = string.ascii_letters + string.digits + string.punctuation
    else:
        caratteri = string.ascii_letters + string.digits

    # Lunghezza della password
    try:
        lunghezza = int(input("\nInserisci la lunghezza della password: ").strip())
        if lunghezza <= 0:
            raise ValueError("La lunghezza deve essere un numero maggiore allo 0.")
    except ValueError as e:
        print(f"Errore: {e}")
        return
    
    # Genera password
    password = "".join(random.choice(caratteri) for _ in range(lunghezza))

    # Output
    print(f"\nLa password generata è la seguente: {password}")
    print("Grazie per aver utilizzato il nostro servizio, a presto!")

generatore_password() 
