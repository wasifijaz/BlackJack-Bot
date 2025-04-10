from keyauth import api
import hashlib
import sys

def getchecksum():
    md5_hash = hashlib.md5()
    print(''.join(sys.argv))
    file = open('testKeyAuth.py', "rb")
    md5_hash.update(file.read())
    digest = md5_hash.hexdigest()
    return digest

keyauthapp = api(
    name = "PROJECT_NAME",
    ownerid = "OWNER_ID",
    secret = "YOUR_SECRET_KEY",
    version = "1.0",
    hash_to_check = getchecksum()
)

def login(user, password):
    return keyauthapp.login(user, password)

def signup(user, password, license):
    return keyauthapp.register(user, password, license)

# response = signup('blackjack', 'qwerty12345', 'hkhdkd')
response = login('blackjack', 'qwerty12345')
print(response)
