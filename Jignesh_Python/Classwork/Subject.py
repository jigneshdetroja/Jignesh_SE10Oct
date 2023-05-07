l1 = ['English','Math','Java','Android','SS']

tops_subject = ['C','C++','Java','Android','SS']

def myfun(seq):
    if (seq in tops_subject):
        return True
    else:
        return False

filtered_data = filter(myfun,l1)

for i in filtered_data:

    print(i)