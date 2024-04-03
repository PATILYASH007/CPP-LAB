#include<iostream>
using namespace std;
class Movie{
	char Moviename[100];
	int mvCount;
	public: Movie(){
		static int mvCount;
		Movie();
	}
	void movieBook(){
		mvCount++;
	}
	static void MovieNotBooked(){
		cout<<"The End \n Total no. of Tickets Booked: "<<Movie::mvCount;
	}
};
int main(){
	char Moviename[100];
	cout<<"Enter the Choice: "<<endl;
	if(choice = Y){
		cout<<Moviename;
	}
	else{
		cout<<Movie::MovieNotBooked;
	}
	
}
