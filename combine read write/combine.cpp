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
	file.open("12345.txt",ios::in);//ios::in 檔案開啟為讀取(輸入)狀態
	while(file.getline(line,sizeof(line))){
		row++;
		cout<<row<<"   "<<line<<endl;//列出全部數字
	/*if (row==N){
		cout<<line[M-1]<<endl;//選擇第幾行第幾列 
	}*/	
	}
	
	cout<<"select row =";
	cin>>N;
	cout<<"select column =";
	cin>>M;
	
	row = 0;
	
	fstream file2;
	file2.open("12345.txt",ios::in);//ios::in 檔案開啟為讀取(輸入)狀態
		while(file2.getline(line,sizeof(line))){
		row++;
		//cout<<row<<"   "<<line<<endl;//列出全部數字
	if (row==N){
		cout<<"("<<N<<","<<M<<")="<<line[M-1]<<endl;//選擇第幾行第幾列 
	}	
	}
	
	
	system("pause");
}if (A == 2){

	

	char x[20];
	cout<<"input data"<<endl;
	cin>>x;
	
	
	
	char filename[]="creat.txt";
	fstream fp;//創造檔案叫fp
	fp.open(filename,ios::out); //開啟檔案 並且為可寫入狀態 
	
	cout<<"file data"<<fp<<endl;
	fp<<"it is just test"<<endl
	<<x<<endl;//寫入fp內容
	
	fp.close();//關閉檔案
	system("pause");

		
			
	}
	
	return 0;
}
