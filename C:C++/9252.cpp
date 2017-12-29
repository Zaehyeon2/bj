#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int arr1[500];
int arr2[500];
int sum;

int main() {
  string inp1, inp2; cin >> inp1 >> inp2;
  int l1 = inp1.size();
  int l2 = inp2.size();
  for (int i = 0; i < l1; i++) {
    arr1[inp1[i]]++;
  }
  for (int i = 0; i < l2; i++) {
    arr2[inp2[i]]++;
  }
  for (int i = 'A'; i <= 'Z'; i++) {
    sum += min(arr1[i], arr2[i]);
  }
  printf("%d\n", sum);
  for (int i = 'A'; i <= 'Z'; i++) {
    for(int j = 0; j < min(arr1[i], arr2[i]); j ++){
      printf("%c", i);
    }
  }
  printf("\n");
}
