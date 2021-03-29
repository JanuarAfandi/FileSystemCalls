#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string mahasiswa;
	ifstream filetxt("daftar-nama.txt");
	
	ofstream file_temp;
	file_temp.open("4210191017_MochammadJanuarAfandi.csv");
		
	string blank = " ";
	int index = 0;
	string saveMhs[29];
	
	
	if(filetxt.is_open())
	{
		while(getline(filetxt, mahasiswa)) //baca per baris di file txt
		{			
			saveMhs[index] = mahasiswa;		
			index++;			
		}		
		
		filetxt.close();		
		index = 0;
		
		while(index != 29)
		
		{
			file_temp << saveMhs[index] << endl;
			index++;
		}
		
		file_temp.close();
		cout << "File csv telah dibuat" << endl << endl;
	}
	else
	
		cout << "File belum dibuat" << endl;
		
	system("PAUSE");
	
	file_temp.open("4210191017_MochammadJanuarAfandi.csv");
	index = 28;
	
	if(file_temp.is_open())
	{
		while(index != 1) //reverse baris/isi file txt
		{
			file_temp << saveMhs[index] << endl;
			index--;
		}
		cout << "File telah di reverse" <<endl;
	}
	else
		cout << "File belum di reverse" <<endl;
		
	file_temp.close();
	
	cin.get();
	return 0;
}
