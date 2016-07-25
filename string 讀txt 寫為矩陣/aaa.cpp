#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int N = 0;
int M = 0;
int i,j;
string X[10][10];
int main() {
  ifstream inFile("12345.txt");
  string line;

  while(getline(inFile,line)) {
   cout << line << endl;
    istringstream ss(line);
    string word;
    N=0;
    while(ss >> word) {
      X[M][N] = word;
      N++;
    }
    
    M++;
    //cout << endl;
  }
for (i=0;i<M+1;i++){
	for (j=0;j<9+1;j++){
	
	cout<<X[i][j]<<" ";
	
}cout<<endl;
}
  

  inFile.close();

  return 0;
}
