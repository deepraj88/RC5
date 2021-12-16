#include <stdio.h>
#include "rc5.h"

int main() {

   WORD ct[2], pt[2], pt_out[2];
   unsigned char K[b];

   int i, j;
   
   for(i=0;i<b;i++) {
        K[i] = 0;
   }

   for(i=0;i<2;i++) {
        pt[i] = 0;
   }

   RC5_SETUP(K);
   RC5_ENCRYPT(pt, ct);
   RC5_DECRYPT(ct, pt_out);

   if((pt[0] == pt_out[0]) && (pt[1] == pt_out[1])) {
        printf("Testcase Passed.\n");
   } else {
        printf("Testcase Failed.\n");
        printf("pt = %02X, %02X; ct = %02X, %02X; pt_out = %02X, %02X \n",
        		pt[0], pt[1], ct[0], ct[1], pt_out[0], pt_out[1]);
   }
    

   return 0;
}
