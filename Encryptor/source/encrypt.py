import random

file = open("C:/Users/Zach/CS_personal/EM24/Enigma/Encryptor/files/symbols.txt.txt", 'r')
f = file.read()
file.close()

symbols = []
for char in f:
    symbols.append(char)

# print (symbols)

encryption = symbols

with open("C:/Users/Zach/CS_personal/EM24/Enigma/Encryptor/files/symbols_randomized.txt", 'w') as f:
    for i in range(30):
        random.seed(i)
        random.shuffle(encryption)
        
        output = ""
        for i in range(10):
            output += encryption[i]
        
        print (output)
        f.write(output)
        f.write('\n')

# to run: python source/encrypt.py