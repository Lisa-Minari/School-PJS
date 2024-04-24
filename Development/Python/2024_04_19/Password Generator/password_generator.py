import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']
lettere = []
simboli = []
numeri = []

print("Benvenuto sul tuo generatore di password!")
nr_letters= int(input("Quante lettere ti piacerebbe avere nella tua password?: ")) 
nr_symbols = int(input(f"Quanti simboli ti piacerebbe avere nella tua password?: "))
nr_numbers = int(input(f"Quanti numeri ti piacerebbe avere nella tua password? "))

for c in range(nr_letters):
    lettere.append(random.choice(letters))
    
for c in range(nr_symbols):
    simboli.append(random.choice(symbols))

for c in range(nr_numbers):
    numeri.append(random.choice(numbers))
    
password = simboli+ lettere+ numeri
random.shuffle(password)

print('Ecco a te la tua nuova password: ', end="")
for c in range(nr_letters+nr_symbols+nr_numbers):
    print(password[c], end="")  
    
    
    