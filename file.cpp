#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void converter(string plaintext, char x[], int a[]){

  for(int i = 0; i < plaintext.length(); i++){
    x[i] = plaintext.at(i);
    a[i] = (int)x[i];
    //cout << a[i] << endl;
  }
}
void rot13(string plaintext, char x[], int a[]){
  for(int i = 0; i < plaintext.length(); i++){
    switch(a[i]){
      case 97 ... 109:
        a[i] += 13;
      break;
      case 110 ... 122:
        a[i] -= 13;
      break;
      case 65 ... 78:
        a[i] += 13;
      break;
      case 79 ... 90:
        a[i] -= 13;
      break;
      default:
      break;
    }
    cout << (char)a[i];
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ifstream D("duom.txt");
  ofstream R("rez.txt");
  string lol;
  char x[1000];
  int a[1000];
  getline(cin, lol);
  converter(lol, x, a);
  rot13(lol, x, a);




  
  D.close();
  R.close();
  return 0;
}
