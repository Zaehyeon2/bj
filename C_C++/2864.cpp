#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
  string A , B, Amin = "", Bmin = "", Amax = "", Bmax = "";
  int iA, iB;
  cin >> A >> B;
  for (int i = 0; i < A.length(); i++) {
    if ( A[i] == '6' ){
      Amin += '5';
    }
    else {
      Amin += A[i];
    }
  }
  for (int i = 0; i < A.length(); i++) {
    if ( A[i] == '5' ){
      Amax += '6';
    }
    else {
      Amax += A[i];
    }
  }
  for (int i = 0; i < B.length(); i++) {
    if ( B[i] == '6' ){
      Bmin += '5';
    }
    else {
      Bmin += B[i];
    }
  }
  for (int i = 0; i < B.length(); i++) {
    if ( B[i] == '5' ){
      Bmax += '6';
    }
    else {
      Bmax += B[i];
    }
  }
  printf("%d %d\n", stoi(Amin) + stoi(Bmin), stoi(Amax) + stoi(Bmax));
}
