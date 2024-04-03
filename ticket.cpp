#include<iostream>
using namespace std;
class Ticket{
 int ticket;
	int no_of_ticket;
	public:
		Ticket(int ticket,int no_of_ticket){
			this->ticket=ticket;
			this->no_of_ticket=no_of_ticket;
			
		}
		void showInfo(){
			cout<<ticket<<endl<<no_of_ticket<<endl;
		}
};

int main(){
	Ticket t1(140,23);
	
	t1.showInfo;
}
