#include <iostream>
#include <fstream> 
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#define size 100

using namespace std;

int A;
int row = 0;
int N,M;
char line[size];

int main(){
	cout<<"which one wnat to do"<<endl
	<<"1 is read txt"<<endl
	<<"2 is write txt"<<endl
	<<"you choose =";
	cin>>A;
	
	if (A == 1){
	
			
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
}if (A == 2){

	

	char x[20];
	cout<<"input data"<<endl;
	cin>>x;
	
	
	
	char filename[]="creat.txt";
	fstream fp;//�гy�ɮץsfp
	fp.open(filename,ios::out); //�}���ɮ� �åB���i�g�J���A 
	
	cout<<"file data"<<fp<<endl;
	fp<<"it is just test"<<endl
	<<x<<endl;//�g�Jfp���e
	
	fp.close();//�����ɮ�
	system("pause");

		
			
	}
	
	return 0;
}
