#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main()
{
  //shiftChar
  std:: cout << shiftChar('a', 3) << std:: endl;
  std:: cout << shiftChar('y', 5) << std:: endl;
  std:: cout << shiftChar('Z', 3) << std:: endl;
  
  //Task B; Caesar cipher encryption
  std:: cout << encryptCaesar("Way to Go!", 5) << std:: endl; 
  std:: cout << encryptCaesar("Sleep Good", 2) << std:: endl; 

  //Task C; Vigenere cipher encryption
  std:: cout << encryptVigenere("Hello, World!", "cake") << std:: endl;
  std:: cout << encryptVigenere("help me!", "app") << std:: endl;

  //Task D; Decryption
  std:: cout << decryptCaesar("Rovvy, Gybvn!", 10) << std:: endl;
  std:: cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std:: endl;
}


