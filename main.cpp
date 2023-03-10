#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main()
{
  //Task B; Caesar cipher encryption
  std:: cout << encryptCaesar("Way to Go!", 5) << std:: endl; ////output: "Bfd yt Lt!"

  //Task C; Vigenere cipher encryption
//encryptVigenere(std:: string plaintext, std:: string keyword);
  std:: cout << encryptVigenere("Hello, World!", "cake") << std:: endl;

//Task D; Decryption
//decryptCaesar(ciphertext, rshift) == plaintext
//decryptVigenere(ciphertext, keyword) == plaintext
  std:: cout << decryptCaesar("Rovvy, Gybvn!", 10) << std:: endl;
  std:: cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std:: endl;

}
