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
  
}

void exercise_4(int n) {
 
}

void exercise_5(int n, int k) {
  
}

int exercise_6(int n) {

    
  return 0;
}

void exercise_7(int n) {
  int n = 3;
  double result;
  for(int i = 1; i <= n; i++){
    result += pow((-1),i +1)/i;
  }
  cout << result << endl;
  return 0;
}

void exercise_8(string s) {
  int s_size = s.size();
  string s_s;
  for(int i = 0; s_size - 1 >= i ; ++i){
    char s_letra = s[i];
    if(s_letra != ' '){
      s_s = s_s + s_letra;
    }
  }
  bool Futbol = true;
  int l = s_s.size();
  for(int i = 0; i < l / 2; ++i){
    if(s_s[1] != s_s [l - 1 - i]){
      Futbol = false
      break;
    }
  }
  if(Futbol){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}

void exercise_9(string s) {
  int cantidad = 0;
  int segundos = 0;
  for(int i = 0; i <= s.size(); ++i){
    if(s[i] == 'f'){
      segundos = i;
      ++ cantidad
    }
  }
  switch(cantidad){
    case 0:
    cout << -2 << endl,
    break;
    case 1:
    cout << -1 << endl;
    break;
    cout 2:
    cout << segundos << endl;
    break;
  }
}

int exercise_10(int a, int b) {
  int sus = 1;
  if (a == 0){
    return b;
  }
  else if (b == 0){
    return a;
  }
  else{
    for(int i = 2; a >= i&& b >= i; i++){
      while(a % i == 0 && b % i == 0){
        sus = sus * i;
        a = a/i;
        a = b/i;
      }
    }
  }
  return sus;
}

void exercise_11() {
  double UT = 1;
  cout << "U0 = 1" << endl;
  for(int i = 1; 10 >= i; ++i){
    double result = UI/( i + 1);
    cout << "U" << i << " - " << UI << endl;
  }
}

void exercise_12() {
  double UI = 1;
  double U = UI;
  for(int i = 1; 10 >= i; ++1){
    int VI = U;
    double resultado = UI/(i +1);
    cout << "U" << i << " - " << UI << " " << "V" << i << " - " << VI << endl;
    UI = resultado;
  }
}

long exercise_13(int n, int k) {
    cin >> n;
    cin >> k;
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += pow(i,k);
    }
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
  int cociente = 0;
  int residuo = divident;
  int i = 0;
    if(divider!=0){
      for(i; residuo-divider >- 0; ++i){
        residuo = residuo - divider;


      }
      cociente = i;
      cout << cociente << " ";
      cout << residuo << endl;
    }
}

void exercise_17(int n) {
  int i = 0;
    int w = 2; 

    while(n > i){
      bool Primo = true;
      for (int i = 2; i <= w/2; ++i) {
        if (w % i == 0) {
          Primo = false;
          break;
        }
    }
    if (Primo) {
      cout << w << " ";
      ++i;
    }
    ++w;
  }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}