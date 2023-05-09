def compare(a):
    str = 0
    for i in a:
        if len(i) > 2 and i[0] == i[-1]:
            str+= 1
    return str

a = ['abc', 'xyz', 'aba', '1221', 'aaa', 'asdasdsada']
for i in a:
    z = compare(a)

print(z)
