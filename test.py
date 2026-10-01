import random

rdm = random.randint(1,100)
guess = 0

print("1. Guess the number")
while (guess != rdm):
    num = input("Input a number: ")
    if (int(num) > rdm):
        print("Lower")
    elif (int(num) < rdm):
        print("Higher")
    else:
        print("Correct!")
        break

print("\n2. TikTok Numbers")
for i in range(1,51):
    if ((i % 3 == 0) & (i % 5 == 0)):
        print("TikTok")
    elif (i % 3 == 0):
        print("Tik")
    elif (i % 5 == 0):
        print("Tok")
    else:
        print(i)

word = input("\n3.Input lowercase characters to translate into UPPERCASE: ")
print(word.upper())