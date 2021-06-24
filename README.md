# Bit manipulation tricks
- x & (x-1) will clear the lowest set bit of x
- x & ~(x-1) extracts the lowest set bit of x (all others are clear). Pretty patterns when applied to a linear sequence.
- x & (x + (1 << n)) = x, with the run of set bits (possibly length 0) starting at bit n cleared.
- x & ~(x + (1 << n)) = the run of set bits (possibly length 0) in x, starting at bit n.
- x | (x + 1) = x with the lowest cleared bit set.
- x | ~(x + 1) = extracts the lowest cleared bit of x (all others are set).
- x | (x - (1 << n)) = x, with the run of cleared bits (possibly length 0) starting at bit n set.
- x | ~(x - (1 << n)) = the lowest run of cleared bits (possibly length 0) in x, starting at bit n are the only clear bits.
#
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
