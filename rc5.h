typedef unsigned int WORD;       /* Should be 32-bit = 4 bytes */


#define r        12             /* number of rounds                  */
#define b        16             /* number of bytes in key            */
#define c         4             /* number  words in key = ceil(8*b/w)*/
#define t        26             /* size of table S = 2*(r+1) words   */

void RC5_ENCRYPT(WORD *pt, WORD *ct); /* 2 WORD input pt/output ct    */
void RC5_DECRYPT(WORD *ct, WORD *pt); /* 2 WORD input ct/output pt    */
void RC5_SETUP(unsigned char *K); /* secret input key K[0...b-1]      */
