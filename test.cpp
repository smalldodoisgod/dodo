#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdlib.h>





using namespace std;

int main()
{
int N,M,O,box;

cout<<"block = 1 or 0  ";
cin>>box;

while (box != 0 && box != 1){
	cout<<"0 or 1  ";
	cin>>box;
}
//cout<<"box = "<<box<<endl;

cout<<"N*M*O matrix    N=";
cin>>N;
cout<<"N*M*O matrix    M=";
cin>>M;
cout<<"N*M*O matrix    O=";
cin>>O;


double x[N][M][O];
int X,Y,Z;
int i,j,k;



cout<<setw(3)<<"x"<<setw(3)<<"y"<<setw(3)<<"z"<<setw(10)<<"Value"<<endl;   



 for ( i = 0 ; i < N ; i++){
 	for ( j = 0 ; j < M ; j++){
 		for ( k = 0 ; k < O ; k++) {
 			if (box == 0){
 				x[i][j][k]=(i+j+k);
			 }if (box == 1){
			 	x[i][j][k]=(i*j*k);
			 }
		 }
	 }
 }
 
 for (i = 0 ; i < N ; i++ ){
 	for (j = 0 ; j < M ; j++){
 		for (k = 0 ; k < O ; k++){
 		cout<<setw(3)<<i<<setw(3)<<j<<setw(3)<<k<<setw(8)<<x[i][j][k]<<endl;
 		}
	 }
 }
 
 
 
 
 
 cout<<"x axis=";
 cin>>X;
 while (X >= N || X < 0){
 	cout<<"error 0 <= x < N "<<endl;
 	cout<<"x axis=";
 	cin>>X;
 }

 
  cout<<"y axis=";
 cin>>Y;
  while (Y >= M || Y < 0){
 	cout<<"error  0 <= y < N"<<endl;
 	cout<<"y axis=";
 	cin>>Y;
 }
 
  cout<<"z axis=";
 cin>>Z;
  while (Z >= O || Z < 0){
 	cout<<"error  0 <= z < N"<<endl;
 	cout<<"z axis=";
 	cin>>Z;
 }




 printf("(x,y,z)=%f",x[X][Y][Z]);
 
 system ("pause");
 
 return 0;
}

