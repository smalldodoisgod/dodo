#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>

using namespace std ;



int square(int x){
return x*x;
}

int main()
{
int a;
cout<<"��J = ";
cin>>a;	
	
int ans = square(a);
cout<< ans;

return 0;
}
