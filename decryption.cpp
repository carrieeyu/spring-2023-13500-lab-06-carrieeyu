#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"
#include <cmath>
#include <vector>

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

//--------------extra lab: automatic Caesar Cipher decoder-------------

//p1 of extra
//make a 26 space vector with all the frequences of the alphabet
//takes encrypted_string and returns the frequency of it
//letters that do not appear in encrypted_string should return 0
//e.g {aaaabbddde}--> {.4, .2, .0, .3, .1,.....(.0) for the rest up to z}
double stringFrequency(char c, std:: string str){ 

  double frequencyCount = 0;

  for(int i = 0; i < str.length(); i++){
    if(str[i] == c){ //if acsii char values are equal
      frequencyCount++;
    }
  }
  return frequencyCount/str.length(); //convert from whole number to decimal

}

//helper func to stringFrequecny, which focuses on a single char rather than the entire string
std:: vector <double> entireStringFreq(std:: string str){

  std:: vector <double> entireString; //vector array to store frequencies of all chars

  for(int i = 97; i <= 122; i++){ //traversing through lowercase letters
    entireString.push_back(stringFrequency(i, str)); //placing freqs of str to the back of the vector array
  }
  return entireString;

}

//p2 of extra
//distance using the distance formula between 2 arrays of 26 elements
//Euclidean distance formula: sqrt(x^2+y^2+z^2)
double distance(std:: vector <double> array1, std:: vector <double> array2){
  
  double totalSqred;
  double result;
  
  for(int i = 0; i < 26; i++){ 
    totalSqred += pow((array1[i]-array2[i]), 2.0); //sum of the difference of specified squared nums--> (x1-x2)^2+(y1-y2)^2+..... 
  }
  result = sqrt(totalSqred);
  return result;

}

std:: string solve(std:: string encrypted_string){

  //frequences of encrypted_string and the English alphabet
  std:: vector <double> thisVectorEncrypted = entireStringFreq(encrypted_string); 
  std:: vector <double> alphabetFreq = {8.2, 1.5, 2.8, 4.3, 12.7, 2.2, 2.0, 6.1, 7.0, 0.2, 0.8, 4.0, 2.4, 6.8, 7.6, 1.9, 0.1, 6.0, 6.3, 9.1, 2.8, 1.0, 2.4, 0.2, 2.0, 0.074}; 

  std:: string solution;
  double minimum = distance(thisVectorEncrypted, alphabetFreq); //distance btwn the encrypted_string's frequencies and the English alphabet
  
  for(int i = 0; i < 26; i++){
    std:: string decryptThisString = decryptCaesar(encrypted_string,i); //decryption of encrypted_string
    std:: vector <double> freqOfThisDecryptedString = entireStringFreq(decryptThisString); //frequencies of all chars from the decrypted 
   double distanceBtwn = distance(freqOfThisDecryptedString, alphabetFreq); //distance bwtn the decrypted frequencies and the English alphabet

    //finding the rotation with the smallest distance
    if(distanceBtwn < minimum){ 
      minimum = distanceBtwn;
      solution = decryptThisString;
    }
  }
  return solution;

}



/*Notes from class
realFreq =  (the actual frequency);

r = rotate(test_sentece, i);
v = make_freq_vector(r);
d = dist(realFreq, v);
}

smallest distance = rotate(sentence, the i from the smallest distance)
realFreq-test;
*/

/*Notes

vector<int> v(3);

v[0]=10;
v[1]=22;
v[2]=5;
v.push_back(7);

std:: cout << v.front() << std:: endl; -->10
std:: cout << v.back() << std:: endl; -->7
std:: cout << v.at(2) << std:: endl; -->5

10 22 5 7 -->in order
*/
