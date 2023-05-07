s1 = "abc"
s2 = "string"
if len(s1) > 2:
    if s1.endswith('ing'):
        s1 += 'ly'
    else:
        s1 += 'ing'
if len(s2) > 2:
    if s2.endswith('ing'):
        s2 += 'ly'
    else:
        s2 += 'ing'

print(s1)
print(s2)