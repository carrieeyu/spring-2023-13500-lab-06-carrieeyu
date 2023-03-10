#include <iostream>
#include "caesar.h"
#include <cctype>

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){

  //initial
  /*
  if((c > 64) && (c < 91)){ //upper alphabet
    c += rshift;
  }
  else{
    if((c > 96) && (c < 123)){ //lowercase alphabet
    c += rshift;
      }
    }
  return c;
*/

   if((c > 64 && c < 91)){ //character values from A to Z
    c += rshift; //adding rshift to the current character value
    if(c <= 64){
      c+=26;
    }
    else if(c >= 91){
      c-=26;
    }
  }
  else{
    if((c > 96 && c < 123)){ //character values from a to z
    c+= rshift;
    if(c <= 96){
      c+=26;
    }
    else if(c >= 123){
      c-=26;
    }
  }
}
return c;
  
}

// Caesar cipher encryption
std:: string encryptCaesar(std:: string plaintext, int rshift){

  std:: string result;

  for(int i = 0; i < plaintext.length(); i++){ //loops through each char of plaintext
    result += shiftChar((int)plaintext[i], rshift); 
  }
  return result;
  
}



