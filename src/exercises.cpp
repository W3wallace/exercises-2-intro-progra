#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
    for(int i = 0; i <= s1.size(); ++i){
      if (s1[i] == ' '){
        cout << i << endl;
      }
    }
    cout << s1.size() << endl;
}

void exercise_2(string s1) {
  
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {

}

int exercise_6(int n) {

}

void exercise_7(int n) {
  
}


void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  int cantidad = 0;
  int segundos = 0;
  for(int i = 0; i <= s.size(); ++i){
    if(s[i] == 'f'){
      segundos = i;
      ++cantidad;
    }
  }
  switch(cantidad){
    case 0:
    cout <<-2 << endl;
    break;
    case 1:
    cout << -1 << endl;
    break;
    case 2:
    cout << segundos << endl;
    break;
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}