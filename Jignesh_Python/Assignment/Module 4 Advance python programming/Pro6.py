def fr(fname):
    with open(fname) as f:
        content_list = f.readlines()
        print(content_list)

fr("file.txt")