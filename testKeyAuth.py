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
    name = "BLACKJACK AI",
    ownerid = "1M0KDtgoMO",
    secret = "85c75cdd548a9a82b836e518d3b341186e703b08d338018f5a3de405ec677a0f",
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