#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

std:: string decryptCaesar(std:: string ciphertext, int rshift){

  std:: string result;
  
  result += encryptCaesar(ciphertext, 26-rshift); 

  return result;
}

std:: string decryptVigenere(std:: string ciphertext, std:: string keyword){ 

  std:: string result;
  
  for(int i = 0; i < keyword.length(); i++){
    int x = keyword[i] - 'a'; //a=97
    keyword[i] = ('z'+1) - x; //'z'+1-123
  }
  result += encryptVigenere(ciphertext, keyword);
  return result;
  
}

