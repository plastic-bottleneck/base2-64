# [🌲] base2-64 :: base converter [🌲]

> Base2-64 is a simple C programm that converts any BaseX(2-64) value to every single Base2 to 64 value.
## 🔧 Install
### 📌 Compile
> Run the following in the root directory of the base2-64 repo on your system:
```bash
cc main.c -o base2-64
```
### 📌 Run
> Now run the program by doing the following:
```bash
./base2-64
```
## 👉 Usage
- The program simply asks you for any value first. (f.e.: '100101101', 'Hello' or 'EFF201')  
- After that it asks you what type of base you gave as value. (Base 2 to 64)  
- If everything has worked out, you should see a long list containing the output base values.
- Note: base64 only supports a maximum of 10 characters for the input.
## ✈️ Example
```bash
$ ./base2-64

Input: 101010
Base between 2 and 64: 2
Base 2: 101010
Base 3: 1120
Base 4: 222
Base 5: 132
Base 6: 110
Base 7: 60
Base 8: 52
Base 9: 46
Base 10: 42
Base 11: 39
Base 12: 36
Base 13: 33
Base 14: 30
Base 15: 2C
Base 16: 2A
(...)
Base 62: g
Base 63: g
Base 64: g
```
