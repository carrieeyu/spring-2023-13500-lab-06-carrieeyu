#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main(){
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

  std:: cout << "---------------------EXTRA LAB: SOLVE----------------------" << std:: endl;

  //Extra; String Frequency
  std:: cout << "(String Freq)" << std:: endl;
  std:: cout << stringFrequency('a', "aaaabbddde") << std:: endl; //0.4
  std:: cout << stringFrequency('b', "aaaabbddde") << std:: endl; //0.2
  std:: cout << stringFrequency('c', "aaaabbddde") << std:: endl; //0.0

  //Extra; Distance
  /*
  std:: vector <double> array1 = {10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  std:: vector <double> array2 = {8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  std:: vector <double> array3 = {10,5,7,5,2,9,0,45,8,1,0,3,2,4,6,8,3,1,0,5,7,6,1,2,3,9};
    std:: vector <double> array4 = {10,5,7,5,2,9,0,45,8,1,0,3,2,4,6,8,3,1,0,5,7,6,1,2,3,9};
  
  std:: cout << "\n(Distance)" << std:: endl;
  std:: cout << distance(array1, array2) << std:: endl;
  std:: cout << distance(array3, array4) << std:: endl;
  */

  //solve func; decodes the encrypted strings
  std:: cout << "\n(Solve)" << std:: endl;
  std:: string encrypt1 = encryptCaesar("Way to Go!", 5);
  std:: cout << solve(encrypt1) << std:: endl;

  std:: string encrypt2 = encryptCaesar("hello, i am tired", 3);
  std:: cout << solve(encrypt2) << std:: endl; 

  std:: string encrypt3 = encryptCaesar("I love to sleep and do absolutely nothing.", 1);
  std:: cout << solve(encrypt3) << std:: endl;
  
}
