#include <iostream>
#include <fstream>

using namespace std;

int main(){
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
	return  0;
}
