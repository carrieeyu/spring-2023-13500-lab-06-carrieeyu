#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

/*
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
*/

//------------------------------Extra Lab-------------------------------

TEST_CASE("Addtional String Freq func"){
  CHECK(stringFrequency('a', "aaaabbddde") == 0.4);
  CHECK(stringFrequency('b', "aaaabbddde") == 0.2);
  CHECK(stringFrequency('c', "aaaabbddde") == 0.0);
}

/*
TEST_CASE("Additional Distance func"){
  std:: vector <double> array1 = {10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  std:: vector <double> array2 = {8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  std:: vector <double> array3 = {10,5,7,5,2,9,0,45,8,1,0,3,2,4,6,8,3,1,0,5,7,6,1,2,3,9};
    std:: vector <double> array4 = {10,5,7,5,2,9,0,45,8,1,0,3,2,4,6,8,3,1,0,5,7,6,1,2,3,9};
  
  CHECK(distance(array1, array2) == );
  CHECK(distance(array2, array3) == );
}
*/


TEST_CASE("Extra Lab; Solve"){
  std:: string encrypt1 = encryptCaesar("Way to Go!", 5);
  CHECK(solve(encrypt1) == "Way to Go!");

  std:: string encrypt2 = encryptCaesar("hello, i am tired", 3);
  CHECK(solve(encrypt2) == "hello, i am tired");

  std:: string encrypt3 = encryptCaesar("I love to sleep and do absolutely nothing.", 1);
  CHECK(solve(encrypt3) == "I love to sleep and do absolutely nothing.");
}

