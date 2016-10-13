#Script to generate ROT-1 string for the user given input.


def getinput():
	rawstr = raw_input("Enter the plaintext  to continue : ")  #Not really required, just for the sake of it.
	return rawstr

def rot(rawstr):
	ciphertext=''
	for letter in rawstr :
		ciphertext += chr(ord(letter)+1)
	return ciphertext

def write(cookedstr):
	file = open('ciphertext.txt','w')
	file.write(cookedstr)



temp = getinput()
print "\nWriting ciphertext to 'cipher.txt' "
write(rot(temp))
