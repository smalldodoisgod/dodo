#include <iostream>
#include <fstream> 
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

#define size 100

char line[size];
int row = 0;
int N,M;
int main(){
	

	
	
	//cout<<"row"<<endl;
	fstream file;
	file.open("12345.txt",ios::in);//ios::in �ɮ׶}�Ҭ�Ū��(��J)���A
	while(file.getline(line,sizeof(line))){
		row++;
		cout<<row<<"   "<<line<<endl;//�C�X�����Ʀr
	/*if (row==N){
		cout<<line[M-1]<<endl;//��ܲĴX��ĴX�C 
	}*/	
	}
	
	cout<<"select row =";
	cin>>N;
	cout<<"select column =";
	cin>>M;
	
	row = 0;
	
	
	
	
	
	
	fstream file2;
	file2.open("12345.txt",ios::in);//ios::in �ɮ׶}�Ҭ�Ū��(��J)���A
		while(file2.getline(line,sizeof(line))){
		row++;
		//cout<<row<<"   "<<line<<endl;//�C�X�����Ʀr
	if (row==N){
		cout<<"("<<N<<","<<M<<")="<<line[M-1]<<endl;//��ܲĴX��ĴX�C 
	}	
	}

	
	system("pause");
	return 0;
}
