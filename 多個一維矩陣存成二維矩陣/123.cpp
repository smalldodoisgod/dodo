#include <iostream>
#include <fstream> 
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>

using namespace std;
char line[10] = {'\0'};
char C[10][10] = {'\0'};
int i;
int row = 0;

int main()
{

	
	
		
	fstream file2;
	file2.open("12345.txt",ios::in);//ios::in �ɮ׶}�Ҭ�Ū��(��J)���A
		while(file2.getline(line,sizeof(line))){
		for (i = 0 ; i<10 ; i++){
			C[row][i]=line[i];
			line[i] = ' ';
		}
		row++;
	}
	/* 
	for (row = 0 ; row < 10 ; row++){
		for (i = 0 ;i < 10 ; i++){
			
			if (C[row][i]==51){  // �uprint�X3 
				cout<<'3'<<" ";  //��L���ť� 
			}else{				 //
				cout<<"  ";		 //
			}
			
			
		}cout<<endl;
	}
	*/ 
	for (row = 0 ; row < 10 ; row++){
		for (i = 0 ;i < 10 ; i++){
			
			 cout<<C[row][i]<<" ";
			
		}cout<<endl;
	}
	
	
}
