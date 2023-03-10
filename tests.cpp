#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

TEST_CASE("Strings and Ciphers"){
  //shiftChar
  CHECK(shiftChar('a', 3) == 'd');
  CHECK(shiftChar('y', 5) == 'd');
  CHECK(shiftChar('Z', 3) == 'C');
  
  //Task B
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!"); 
  CHECK(encryptCaesar("Sleep Good", 2) == "Unggr Iqqf"); 

  //Task C
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(encryptVigenere("help me!", "app") == "htap bt!");

  //Task D
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}
