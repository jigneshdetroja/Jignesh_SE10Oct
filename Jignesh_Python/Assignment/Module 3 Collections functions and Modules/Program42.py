a = [{'d' : 100},{'d' : 100},{'q' : 200},{'w' : 300},{"e" : 900}]

s = set(val for dict in a for val in dict.values())

print("Unique Values :",s)