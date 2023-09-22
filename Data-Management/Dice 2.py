import random

print('What is your name?')
name = input('>')
print('Hello,', name, '!')

print('Rolling dice...')
dice1 = random.randint(1, 6)
dice2 = random.randint(1, 6)
sum = dice1 + dice2
print('Die 1:', dice1)
print('Die 2:', dice2)
print('Total value:', sum)

if sum > 7:
    print(name, 'won.')
else:
    print(name, 'lost.')
