#pip : python index package

import instaloader

name = input("Enter instagram username : ")
insta = instaloader.Instaloader()

insta.download_profile(name,profile_pic_only=True)
