#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class vehicle
{
    protected:
        int vid;
        string mdno;
        int rcd;
    public:
    	string type;
    	vehicle()
    	{
    		cout<<"Type Bike/Car for rent :";
    		cin>>type;
		}
};
class carbike
{
    public:
        void bikes(string n)
        {
            cout<<endl<<"Following is the list of Bike available for Rent"<<endl;
            cout<<endl;
            cout<<"1. Royal Enfield Classic 350 : 1220Rs/Day"<<endl;
            cout<<"2. TVS Apache RTR 160 : 804Rs/Day"<<endl;
            cout<<"3. KTM Duke 390 : 1950Rs/Day"<<endl;
            cout<<"4. Honda SP 125 : 820Rs/Day"<<endl;
            cout<<"5. Bajaj CT 110 : 600Rs/Day"<<endl;
        }
        void car(string n)
        {
            cout<<endl<<"Following is the list of Car available for Rent"<<endl;
            cout<<endl;
            cout<<"1. Mahindra Scorpio : 2400Rs/Day"<<endl;
            cout<<"2. VolksWagon Virtus : 2980Rs/Day"<<endl;
            cout<<"3. Skoda Octavia : 3000Rs/Day"<<endl;
            cout<<"4. Honda Civic : 1933Rs/Day"<<endl;
            cout<<"5. Tata Harrier : 3800Rs/Day"<<endl;
        }
};
class rental:carbike
{
    public:
    	int sno;
    	rental()
    	{
    		cout<<endl<<"Enter Series no. of the Car/Bike to go ahead :";
    		cin>>sno;
		}
};
int main()
{	
	vehicle v1;
	carbike cb1;
    if(v1.type=="bike"||v1.type=="Bike")
    {
    	cb1.bikes(v1.type);
	}
	else if(v1.type=="car"||v1.type=="Car")
	{
		cb1.car(v1.type);
	}
	else
	{
		cout<<"Invalid Type"<<endl;
		goto end;
	}
	if(v1.type=="bike"||v1.type=="Bike")
	{
		rental rb1;
		int rdays;
		int trent;
		switch(rb1.sno)
		{
			case 1:
				cout<<"Selected -->> Royal Enfield Classic 350 : 1220Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 1220;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 2:
				cout<<"Selected -->> TVS Apache RTR 160 : 804Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 804;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 3:
				cout<<"Selected -->> KTM Duke 390 : 1950Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 1950;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 4:
				cout<<"Selected -->> Honda SP 125 : 820Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 820;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 5:
				cout<<"Selected -->> Bajaj CT 110 : 600Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 600;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			default:
				cout<<"Invalid Parameters"<<endl;
		}
	}
	else if(v1.type=="car"||v1.type=="Car")
	{
		rental rb1;
		int rdays;
		int trent;
		switch(rb1.sno)
		{
			case 1:
				cout<<"Selected -->> Mahindra Scorpio : 2400Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 2400;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 2:
				cout<<"Selected -->> VolksWagon Virtus : 2980Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 2980;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 3:
				cout<<"Selected -->> Skoda Octavia : 3000Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 3000;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 4:
				cout<<"Selected -->> Honda Civic : 1933Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 1933;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			case 5:
				cout<<"Selected -->> Bajaj CT 110 : 600Rs/Day"<<endl;
				cout<<endl<<"Enter number of days for rent :";
				cin>>rdays;
				trent = rdays * 600;
				cout<<endl<<"Total rent for "<<rdays<<" days is :"<<trent<<"Rs"<<endl;
				break;
			default:
				cout<<"Invalid Parameters"<<endl;
		}
	}
	end:
    return 0;
}
