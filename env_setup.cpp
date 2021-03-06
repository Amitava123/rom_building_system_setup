#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void env_setup()
{
	int flag=0;
	ofstream fout;
	fout.open("~/.profile",ios::app);
	if(fout.is_open()){
		fout<<"\n\n# set PATH so it includes user's private bin if it exists\nif [ -d \"$HOME/bin\" ] ; then\n\tPATH=\"$HOME/bin:$PATH\"\nfi\n";
		fout<<"\n# add Android SDK platform tools to path\nif [ -d \"$HOME/platform-tools\" ] ; then\n\tPATH=\"$HOME/platform-tools:$PATH\"\nfi";
		flag=1;
	}
	fout.close();

	if(flag){
		cout<< "\nsource ~/.profile";
		cin.ignore();
		getchar();
		system("source ~/.profile");
		cout<<endl;
	}
}

int main()
{
	env_setup();
	cout<<endl;
	return 0;
}
