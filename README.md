# My-Random-Learnings
I am interested in these stuffs.
### AND (&)
100  
101  
---  
100  
### OR (|)
100  
101  
---  
101  
### XOR (^)
100  
101  
---  
001  
### NOT (~)
101 
---  
010  
### Shift (>>) and (<<)
0001_0111 >> 3 = 0000_0010
0001_0111 << 3 = 1011_1000
## Arithmetic
### Multiply x by 2k
x << k
Example: 5 * 8 = 5 << 3
### Divide x by 2k
x >> k
Example: 20 / 16 = 20 >> 4
### Mod by 2k
x & (2k-1)

Example: 20 % 16 = 20 & 15
### Is x power of 2?
(x != 0) && (x & (x - 1)) == 0
