#include <stdio.h>
#include <stdlib.h>

int main (){
  HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString("123456789012345678901234567890");
  printHugeUnsignedInt (hugeNumber);
  hugeNumber = createHugeUnsignedIntFromString("0000000123456789012345678901234567890");
  printHugeUnsignedInt (hugeNumber);
}
