#!/usr/bin/python3

'''
import dis

def read_bytecode(file_path):
    with open(file_path, 'rb') as file:
        byte_code = file.read()

    dis.dis(byte_code)

# Provide the path to your compiled Python file
file_path = 'crackme4'
read_bytecode(file_path)
'''

'''
'''

import platform
import time
import sys
import binascii
import marshal
import dis
import struct

def view_pyc_file(path):
    """Read and display a content of the Python`s bytecode in a pyc-file."""

    with open(path, 'rb') as file:

        magic = file.read(4)
        bit_field = None
        timestamp = None
        hashstr = None
        size = None

        if sys.version_info.major == 3 and sys.version_info.minor >= 7:
            bit_field = int.from_bytes(file.read(4), byteorder=sys.byteorder)
            if 1 & bit_field == 1:
                hashstr = file.read(8)
            else:
                timestamp = file.read(4)
                size = file.read(4)
                size = struct.unpack('I', size)[0]
        elif sys.version_info.major == 3 and sys.version_info.minor >= 3:
            timestamp = file.read(4)
            size = file.read(4)
            size = struct.unpack('I', size)[0]
        else:
            timestamp = file.read(4)

        code = marshal.load(file)

    magic = binascii.hexlify(magic).decode('utf-8')
    timestamp = time.asctime(time.localtime(struct.unpack('I', timestamp)[0]))

    dis.disassemble(code)

    print('-' * 80)
    print(
        'Python version: {}\nMagic code: {}\nTimestamp: {}\nSize: {}\nHash: {}\nBitfield: {}'
        .format(platform.python_version(), magic, timestamp, size, hashstr, bit_field)
    )
    file.close()


if __name__ == '__main__':
    view_pyc_file(sys.argv[1])


'''
output of above is :


  1           0 LOAD_NAME                0 (input)
              3 LOAD_CONST               0 ('Password: ')
              6 CALL_FUNCTION            1 (1 positional, 0 keyword pair)
              9 STORE_NAME               1 (pwd)

  2          12 LOAD_CONST               1 ('Zen of Python')
             15 STORE_NAME               2 (ok)

  3          18 LOAD_NAME                2 (ok)
             21 LOAD_CONST               2 (' C')
             24 BINARY_ADD
             25 STORE_NAME               2 (ok)

  4          28 LOAD_NAME                2 (ok)
             31 LOAD_CONST               3 (1)
             34 LOAD_CONST               4 (3)
             37 BUILD_SLICE              2
             40 BINARY_SUBSCR
             41 LOAD_NAME                2 (ok)
             44 LOAD_CONST               4 (3)
             47 BINARY_SUBSCR
             48 BINARY_ADD
             49 LOAD_NAME                2 (ok)
             52 LOAD_CONST               5 (14)
             55 BINARY_SUBSCR
             56 BINARY_ADD
             57 LOAD_NAME                2 (ok)
             60 LOAD_CONST               4 (3)
             63 BINARY_SUBSCR
             64 BINARY_ADD
             65 LOAD_NAME                2 (ok)
             68 LOAD_CONST               6 (7)
             71 LOAD_CONST               7 (9)
             74 BUILD_SLICE              2
             77 BINARY_SUBSCR
             78 BINARY_ADD
             79 LOAD_NAME                2 (ok)
             82 LOAD_CONST               8 (None)
             85 LOAD_CONST               9 (6)
             88 BUILD_SLICE              2
             91 BINARY_SUBSCR
             92 LOAD_CONST               8 (None)
             95 LOAD_CONST               8 (None)
             98 LOAD_CONST              12 (-1)
            101 BUILD_SLICE              3
            104 BINARY_SUBSCR
            105 BINARY_ADD
            106 STORE_NAME               2 (ok)

  6         109 LOAD_NAME                1 (pwd)
            112 LOAD_NAME                2 (ok)
            115 COMPARE_OP               2 (==)
            118 POP_JUMP_IF_FALSE      134

  7         121 LOAD_NAME                3 (print)
            124 LOAD_CONST              10 ('OK')
            127 CALL_FUNCTION            1 (1 positional, 0 keyword pair)
            130 POP_TOP
            131 JUMP_FORWARD            10 (to 144)

  9     >>  134 LOAD_NAME                3 (print)
            137 LOAD_CONST              11 ('KO')
            140 CALL_FUNCTION            1 (1 positional, 0 keyword pair)
            143 POP_TOP
        >>  144 LOAD_CONST               8 (None)
            147 RETURN_VALUE
--------------------------------------------------------------------------------
Python version: 3.4.3
Magic code: ee0c0d0a
Timestamp: Fri Jan  6 00:44:37 2017
Size: 195
Hash: None
Bitfield: None


'''



'''
source code is :

pwd = input('Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[None:6] + ok[None:None:-1]
if pwd == ok:
    print('OK')
else:
    print('KO')

'''

'''
password:

'en C PyZen ofC nohtyP fo neZ'

'''
