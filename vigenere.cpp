#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std:: string encryptVigenere(std:: string plaintext, std:: string keyword){

  /*
  //declaring variables
  std:: string result;
  int count = 0;

  for(int i = 0; i < plaintext.length(); i++){
    if(count == keyword.length()){ 
    count = 0; //restart count
  }
    result += shiftChar(plaintext[i], (int)keyword[count]-97);
    
    if((plaintext[i] > 64 && plaintext[i] < 91) || (plaintext[i] > 96 && plaintext[i] < 123)){ //upper or lower case letters
      count++;
    }
  }
  return result;
  */
  std:: string result;
  int count = 0;

  for(int i = 0; i < plaintext.length(); i++){
    if(count > keyword.length()-1){ 
    count = 0; //restart count
  }
    result += shiftChar(plaintext[i], (int)keyword[count]-97);
    
    if((plaintext[i] > 64 && plaintext[i] < 91) || (plaintext[i] > 96 && plaintext[i] < 123)){ //upper or lower case letters
      count++;
    }
  }
  return result;
  
}

