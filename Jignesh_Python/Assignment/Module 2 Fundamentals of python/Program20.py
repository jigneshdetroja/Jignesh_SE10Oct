def longest_word(word_list):
        
        word_len = []
        for i in word_list:
            word_len.append((len(i), i))
        word_len.sort()
        return word_len[-1][0], word_len[-1][1]

result = longest_word(["Python", "Programming", "Backend"])
print("\nLongest word: ", result[1])
print("Length of the longest word: ", result[0])



