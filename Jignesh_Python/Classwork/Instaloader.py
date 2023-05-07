#pip : python index package

import instaloader

name = input("Enter instagram username : ")
insta = instaloader.Instaloader()

insta.download_profice(name,profile_pic_only=True)
