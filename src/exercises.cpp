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
  string espacio1;
    switch(n){
        case 1:
        espacio1 =  " "s;
        break;
        case 2:
        espacio1 =  "  "s;
        break;
        case 3:
        espacio1 =  "     "s;
        break;
        case 4:
        espacio1 =  "        "s;
        break;
        case 5:
        espacio1 =  "           "s;
        break;
        case 6:
        espacio1 =  "              "s;
        break;
        case 7:
        espacio1 =  "                 "s;
        break;
    }

    string _i;
    for(int i = 1; i<=k; ++i){
        int p = 20;
        int r = 0;
        while(r <= 14){
            if(espacio1.size() == p + (p*r) + r){
              espacio1= espacio1 + '\n';
              break;
            }
            ++r;
        }
        if(n==1 && espacio1.size()==1){
          espacio1 = espacio1 + to_string(i);
        }
        else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]!='\n'){
            _i = "  " + to_string(i);
            espacio1 = espacio1 + _i;
        }
        else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]=='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;

        }
        else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]!='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        }
        else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]=='\n'){
            espacio1 = espacio1 + to_string(i);
        }

    }
    cout << espacio1 << " " << endl;
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
    cout << -2 << endl;
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