#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main ()
{
    char ln[100],n,lang[20];
    fstream fi1;
    ofstream fo1;
    {
		fi1.open ("infile.txt",ios::in);
	        cout<<"Which character's line you want to copy in other text file(f/m/r/s):";
		cin>>n;
                fo1.open ("result.txt",ios::trunc|ios::out);
		while(!fi1.eof())
		{
			fi1.getline(ln,60);
			if(ln[9]==n)
			{
			     fo1<<ln<<endl;
			}

		}
	

		fi1.close();
		fo1.close();
	}

 	ifstream fri2;
	ofstream fco2;
	{
		fri2.open("result.txt",ios::in);
		fco2.open("cleaned.txt",ios::trunc|ios::out);
		
		while(!fri2.eof())
		{
			fri2.getline(ln,100);
			int i=14;
			fco2<<"\"";
			while(ln[i]!='"')
			{
			    fco2<<ln[i];
			    i++;

			}
			fco2<<"\""<<endl;
		}
		
		fri2.close();
		fco2.close();
	}

	ifstream fci3;
	ofstream ffo3; 
	{
		fci3.open ("cleaned.txt",ios::in);
		ffo3.open ("final.bat",ios::trunc|ios::out);
		cout<<"enter the language you prefer:: \n";
		cin>>lang;
		while(!fci3.eof())
		{

			fci3.getline(ln,50);
			ffo3<<lang<<ln<<endl;

		}
		
		fci3.close();
		ffo3.close();
	}
return 0;
}

