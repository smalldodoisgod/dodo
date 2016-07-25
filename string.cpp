#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream a("12345.txt");
  string b;

  while(getline(a,b)) {
    cout << b << endl;
  }

  a.close();

  return 0;
}
