

import random

gioco = ['Sasso', 'Carta', 'Forbice']
nome = input ('Ehi ciao! Dimmi il tuo nome prim di giocare: ').upper()

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

scelta = input('Sasso, Carta o Forbice?: ')
print(' ', nome)
if scelta == 'Sasso':
    print(' ', rock)
elif scelta == 'Forbice':
    print(' ', scissors)
else:
    print(' ', paper)

uscita = random.choice(gioco)
print('COMPUTER')
if uscita == 'Sasso':
    print(' ', rock)
elif uscita == 'Forbice':
    print(' ', scissors)
else:
    print(' ', paper)

if  uscita == 'Sasso' and scelta == 'Forbice' or uscita == 'Carta' and scelta == 'Sasso' or scelta == 'Carta' and uscita == 'Forbice':
    print("HAI PERSO, RITENTA UN' ALTRA VOLTA")
elif uscita == scelta :
    print("PAREGGIO! RITENTA UN'ALTRA VOLTA")

else:
    print("HAI VINTO!")

