/** 
 *   Roman Numeral Converter
 * 
 * \author Lukas Kalbertodt
 */

#include <iostream>
using namespace std;

void f(int n,int o=0){auto*c=R"(�M �CM�D �CDd C Z XC2 L ( XL
 X 	 IX V  IV I )";auto v=*(short*)(c+o);if(n>0){if(n<v)f(n,o+4);else{cout<<*(c+o+2)<<*(c+o+3);f(n-v,0);}}}

void test(int num) {
  cout << num << " -> ";
  f(num); 
  cout << endl;
}

int main() {
  for(int i = 1; i < 20; i++) {
    test(i);
  }
  // for(int i = 0; i < 40; i++)
  //   cout << "V" << (char)i << "V" << endl;
  // test(5);
  // test(10);
  // test(15);
  // test(3999);
}