#include <stdio.h> 

int main() { 

int secret = 0xdeadbeef; 

char name[150] = {0}; 

read(0, name, 0x150); 

if (secret == 0x1337) { 

puts("FLAG={REDSENTRY_1271827183}");
} 
else { 
puts("Failed to get the flag");
 } 

}

