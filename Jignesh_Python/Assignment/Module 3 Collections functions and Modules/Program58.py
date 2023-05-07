import random  # import random

file = open("random_file.txt","w")
file.write("Added Second Line\n")
file.write("Added Third Line\n")
file.write("Added Fourth Line\n")
file.write("Added Fifth Line\n")
file.write("Added Sixth Line\n")
file.close()

# Function For Get a Random line from a file
def read_random_line(line):
    lines = open(line).read().splitlines()
    return random.choice(lines)

print(read_random_line('random_file.txt'))