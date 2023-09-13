/*********************************************
 * Id: sivu7048
 * 
 * w08: brute force searc 
 *********************************************/


#include <stdio.h>
#include <string.h>

void bruteForce(char *search, char *pointerstring, int stringlength, int pointerlength);

//input in string to search and pattern to find, outputs location of search
int main(int argc, char *argv[]){
   if(argc < 2){
      printf("Error: not enough arguments in the command: %s\n", argv[argc-1]);
      return -1;
   }

   char *String, *pointerstring;
   //obtain search string
   String = argv[1];
   //obtain pattern string
   pointerstring = argv[2];
   // send values into brute force function
   bruteForce(String, pointerstring,strlen(argv[1]) - 1, strlen(argv[2]) - 1);

   return 0;
}

//function to apply brute force string matching
void bruteForce(char *search, char *pointerstring, int stringlength, int pointerlength){
   int i, j, k;
   k = 0;
   printf("Matches found at locations:");
   for(i = 0; i <= pointerlength - stringlength; i++){
      j = 0;
      while(j < pointerlength && pointerstring[j] == search[i + j]){
         j++;
         if((pointerstring[j] == search[stringlength]) 
         && (pointerstring[j-1] ==search[stringlength-1]) 
         && (pointerstring[j-2] == search[stringlength-2])){
            printf(" %d",j -2);
            k = 1;
         }
      }
   }
   if(k == 1){
      printf("\n");
   }
   else{
      printf("-1\n");
   }
}
