#include <iostream>
//<cctype>

int main(){

  //prints the singular ascii value of one character only
  //I-->73
  /*
  char input = 'I';
  std:: cout << (int)input<< std:: endl;
  */

  //multiple characters
  std:: string input = "Cat :3 Dog";

  for(int i = 0; i < input.length(); i++){ //traversing through all characters of input string
    //std:: cout << input[i] << " "<< (int)input[i] << std:: 
    std:: cout << i  << " " << input[i] << " "<< (int)input[i] << std:: endl; //printing each character of string that corresponds with the ascii value
    
  }

}


