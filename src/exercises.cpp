#include <cmath>
#include <iostream>

using namespace std;


void exercise_1(string doc){
  // TODO: YOUR CODE HERE
  int i= 0;
  int doc_size1 = doc.size();
    while(i<=doc_size1){
        char doc_char = doc[i];
        
        if(doc_char==' ') {
            cout << i << endl;

        }
        ++i;
    }
    cout << doc.size()<< endl;
}

void exercise_2(string doc) {
  // TODO: YOUR CODE HERE
    int doc_size1 = doc.size();
    string doc_word;
    int i=0;
    while(i<=doc_size1){
        char doc_char = doc[i];

        if(doc_char==' '|| i==doc_size1 && doc != ""){
            cout<< '[' << doc_word << ']' << endl;
            doc_word ="";

        }else {
            doc_word = doc_word + doc_char;
        }
        ++i;
    }
}

void exercise_3(string torta) {
  // TODO: YOUR CODE HERE
    int i= 0;
    while(i < 20){
        if(torta[i]=='1'){
            cout << "Om-nom-nom :P" << endl;
            i = i + 1;
        }else if(torta[i]=='0'){
            cout << "No cake :("<< endl;
            break;
        }else{
            i = i+ 1;
        }
    
    }
  
}

void exercise_4(int numero) {
  // TODO: YOUR CODE HERE
    int i = 1;
    int multiply = 1;
    if(numero < 0){
        cout << "El numero es negativo. Intentelo de nuevo"<< endl;

    }else if(numero>14){
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;

    }else if(numero>=0 && numero <=14){
        while(i<=numero){
                multiply *=i;
                ++i;
            }
  
        cout << multiply<< endl;
        }
    
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
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
        int s = 20;
        int r = 0;
        while(r<=14){
            if(espacio1.size()== s+(s*r) + r){
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
        }else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]=='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        
        }else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]!='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        }else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]=='\n'){
            espacio1 = espacio1 + to_string(i);
        }
        
    }
    cout << espacio1 << " " << endl;
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
    int n_size = to_string(n).size();
    int suma = 0;
    string string_n = to_string(n);
    if(n<=0){
        return 0;
    }else{
    for(int i=0; i<n_size; ++i){
        int digits = string_n[i];
        suma = suma + digits -'0';
        }
    return suma;
    }
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
    double sum = 0;
    for(int i=1;n>=i; ++i){

      sum = sum + (pow((-1), (i+1)))/i;
    }
    cout << sum << endl;
    
}

void exercise_8(string s) {
    int s_size=s.size();
    string s_2;
    for(int i=0;s_size-1>=i ; ++i){

        char s_letter = s[i];
        if(s_letter!=' '){
            s_2 = s_2 + s_letter;
        }
    }
    bool esPalindromo = true;
    int n = s_2.size();

    for (int i = 0; i < n / 2; ++i) {
        if (s_2[i] != s_2[n - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    if(esPalindromo) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
    int quantity = 0;
    int second = 0;

    for(int i=0; i<= s.size(); ++i){
        if(s[i]=='f'){
            second = i;
            ++quantity;
        }
    }
    switch(quantity){
        case 0:
            cout << -2 << endl;
            break;
        case 1:
            cout << -1 << endl;
            break;
        case 2:
            cout << second << endl;
            break;
    }
      
}
int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
    int mcd = 1;
    if(a==0){
      return b;
    }else if(b==0){
      return a;
    }else{
    for(int i=2; a>=i && b>=i; ++i){

        while(a%i==0 && b%i==0){
            mcd = mcd *i;
            a = a/i;
            b = b/i;
        }
    }
  }
    return mcd;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
    double UI = 1;
    cout << "U0 = 1"<< endl;
    for(int i=1; 10>=i; ++i){
        double result = UI/(i +1);
        cout << "U" << i << " = " << UI << endl;
        UI = result;
    }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
    double UI = 1;
    double U = UI;
    for(int i=1; 10>=i; ++i){
        int VI = U;
        
        double result = UI/(i +1);
        cout << "U" << i << " = " << UI << " " << "V" << i << " = " << VI << endl;
        UI = result;
    }
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  int sum =0;
  for(int i=1; n>=i; ++i){
    sum = sum + pow(i,k);
  }
  return sum;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
    string n_string = to_string(n);
    bool esPalindromo = true;
    for(int i=0; n_string.size()>=i; ++i){
        if(n_string[i] != n_string[n_string.size()-1-i]){
            esPalindromo = false;
        }
    }
    if(esPalindromo){
            return "Es palindrome";
        }else{
            return "No es palindrome";
        }

}

void exercise_15(int decimal) {
    string binary;
    string result;
    if(decimal==0){
        result = '0';
            
    }else if(decimal == 1){
        result = '1';

    }else{ 
        for(int i = 0; decimal!=1 ; ++i){
           
            binary = binary + to_string(decimal%2);
            decimal = decimal/2;

    
        }
        binary = binary + '1';

        for(int i = 1; binary.size()>=i; ++i){
            result = result + binary[binary.size()-i];

        }
    }
        cout << result << endl;
}


void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
    int cociente = 0;
    int residuo = divident;
    int i = 0;
    if(divider!=0){
        for(i; residuo-divider >= 0; ++i){
            residuo = residuo - divider;
            
        }
    cociente = i;
    
    cout << cociente << " ";
    cout << residuo << endl;
    }
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
    int i = 0; 
    int  k = 2; 
    
    while (n > i) {
        bool esPrimo = true;
        
        for (int i = 2; i <= k/2; ++i) {
            if (k % i == 0) {
                esPrimo = false;
                break; 
            }
        }
        
        if (esPrimo) {
            cout << k << " "; 
            ++i; 
        }
        
        ++k; 
    }
}

void exercise_18_19(int debut, int fin) {
if(fin>=debut){
    if(debut>0 && fin>0){

        for(debut; debut<=fin; ++debut){
            int i = 0;
            int debut1= debut;
            while(debut1!=0){
                if(debut1%3 == 0){
                    debut1 += 4;
                    ++i;
                    
                }else if(debut1%4==0){
                    debut1 /=2;
                    ++i;
                    
                }else{
                    --debut1;
                    ++i;
                    
                }
            }
            cout << debut << "->" << i << endl;
        }
    }else{
            cout << "El numero debe de ser positivo y mayor a zero" << endl;
        }
    }else{
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
    
    }
}