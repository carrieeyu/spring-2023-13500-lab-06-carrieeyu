#include <iostream>
#include "caesar.h"
#include <cctype>

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
  
  if((c > 64 && c < 91)){ //character values from A to Z
    if(c+rshift <= 90){
      c += rshift; //adding rshift to the current character value
    }
    else if(c+rshift >= 91){
    c += rshift - 26;
    }
  }
  else{
    if((c > 96 && c < 123)){ //character values from a to z
      if(c+rshift <= 122){
        c += rshift; //adding rshift to the current character value
      }
      else if(c+rshift >= 123){
        c+= rshift - 26;
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




