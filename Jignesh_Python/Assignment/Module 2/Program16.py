string = input("Please enter a String : ")
words = []

words = string.split()
frequency = [words.count(i) for i in words]

myDictionary = dict(zip(words, frequency))
print("Dictionary items : ", myDictionary)