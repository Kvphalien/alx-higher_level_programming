#!/usr/bin/python3
"""This script fetches data from
    https://alx-intranet.hbtn.io/status
"""

import urllib.request

url = 'https://alx-intranet.hbtn.io/status'

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3'
}

req = urllib.request.Request(url, headers=headers)

with urllib.request.urlopen(req) as response:
    body = response.read().decode('utf-8')

print('- Body response:')
print('\t{}'.format(body))
