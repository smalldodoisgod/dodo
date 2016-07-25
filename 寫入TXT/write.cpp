#include <iostream>
#include <fstream>

using namespace std;

int main(){
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
	return  0;
}
