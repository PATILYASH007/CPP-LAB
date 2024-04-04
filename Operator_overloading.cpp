#include<iostream>
#include<string>
#include<list>
using namespace std;
class YouTube_Channel
{
	public:string name;
	public: YouTube_Channel()
	{
		name="yash_YT\n";
	}
	public: YouTube_Channel(string a)
	{
		name=a;
	}
	
};
class MyCollection{
	public:list<YouTube_Channel>MyPlaylist;
	public:void operator +=(YouTube_Channel &ytc)
	{
	MyPlaylist.push_back(ytc);
	}
};
ostream& operator <<(ostream& COUT,YouTube_Channel& ytc)
	{
		COUT<<ytc.name<<endl;
	return COUT;
	}
ostream& operator <<(ostream& COUT,MyCollection& mc)
	{
	for(YouTube_Channel& ytc:mc.MyPlaylist)
	{
		COUT<<ytc;
	}
	return COUT;
	}
	
int main()
{
	YouTube_Channel YT0;
	YouTube_Channel YT1("AI_tech");
	YouTube_Channel YT2("my_tech");
	MyCollection mc;
	mc+=YT0;
	mc+=YT1;
	mc+=YT2;
	cout<<mc;
	return 0;
}
