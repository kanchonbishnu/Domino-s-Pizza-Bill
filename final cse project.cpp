#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<iomanip>
using namespace std;
float sum=0;
float vat=0;
float total=0;
int pizzanumber=0,
totalpizza=0;
int main()
{
	x:
	
	int a=1;
	while(a!=0)
	{
	//Give information about different types of pizza and price using file handling:
	char ch;
	ifstream itemfile;
	itemfile.open("pizza hut item.cpp",ios::in);
	while(!itemfile.eof())
	{
		cout<<ch;
		ch=itemfile.get(); 	
	}
	itemfile.close();
	
	//ASK ABOUT NO OF PERSON AND ORDER:
	
	int itemnumber;
	cout<<"ENTER THE ITEM NUMBER YOU WANT TO CHOOSE:";
	cin>>itemnumber;
	cout<<endl;
	
	switch(itemnumber)
	{
		case 1:
			cout<<"              1.pizza mania"<<endl;
			cout<<"                                   1.onion pizza"<<endl;
			cout<<"                                   2.corn pizza"<<endl;
			cout<<"                                   3.cheese pizza"<<endl;
			cout<<"                                   4.veg pizza"<<endl<<endl;
			cout<<"ENTER THE FLAVOUR YOU WANT TO CHOOSE:";
			int flavour;
		    cin>>flavour;
		    switch(flavour)
		    {
		    	case 1:
		    		cout<<"you have choosen onion pizza"<<endl<<endl;
		    		cout<<"the price is 75.00"<<endl<<endl;
		    		cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
		    		sum=(sum+75.00)*pizzanumber;
		    		vat=(vat+2.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
		    		break;
		    	case 2:
				    cout<<"you have choosen corn pizza"<<endl<<endl;
					cout<<"the price is 80.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+80.00)*pizzanumber;
		    		vat=(vat+2.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
				case 3:
					cout<<"you have choosen cheese pizza"<<endl<<endl;
					cout<<"the price is 75.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+75.00)*pizzanumber;
		    		vat=(vat+2.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
				case 4:
					cout<<"you have choosen veg pizza"<<endl<<endl;
					cout<<"the price is 80.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+80.00)*pizzanumber;
		    		vat=(vat+2.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
			}break;
		case 2:
			cout<<"            2.veg pizza"<<endl;
			cout<<"                                   1.margherita pizza"<<endl;
			cout<<"                                   2.delux veggie"<<endl;
			cout<<"                                   3.peppy paneer"<<endl;
			cout<<"                                   4.fresh veggie"<<endl<<endl;
			cout<<"ENTER THE FLAVOUR YOU WANT TO CHOOSE:";
		    cin>>flavour;
		    switch(flavour)
		    {
		    	case 1:
		    		cout<<"you have choosen margherita pizza"<<endl<<endl;
		    		cout<<"the price is 120.00"<<endl<<endl;
		    		cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
		    		sum=(sum+120.00)*pizzanumber;
		    		vat=(vat+3.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
		    		break;
		    	case 2:
				    cout<<"you have choosen delux veggie"<<endl<<endl;
					cout<<"the price is 130.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+130.00)*pizzanumber;
		    		vat=(vat+3.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
				case 3:
					cout<<"you have choosen peppy paneer"<<endl<<endl;
					cout<<"the price is 125.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+125.00)*pizzanumber;
		    		vat=(vat+3.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
				case 4:
					cout<<"you have choosen fresh veggie"<<endl<<endl;
					cout<<"the price is 130.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+130.00)*pizzanumber;
		    		vat=(vat+3.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
			}break;
		case 3:
		    	cout<<"            3.non veg pizza"<<endl;
			cout<<"                                   1.papper barbeque chicken"<<endl;
			cout<<"                                   2.chicken sasuage"<<endl;
			cout<<"                                   3.chicken tikka"<<endl;
			cout<<"                                   4.non-veg delux"<<endl<<endl;
			cout<<"ENTER THE FLAVOUR YOU WANT TO CHOOSE:";
		    cin>>flavour;
		    switch(flavour)
		    {
		    	case 1:
		    		cout<<"you have choosen papper barbeque chicken"<<endl<<endl;
		    		cout<<"the price is 150.00"<<endl<<endl;
		    		cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
		    		sum=(sum+150.00)*pizzanumber;
		    		vat=(vat+5.50)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
		    		break;
		    	case 2:
				    cout<<"you have choosen chicken sasuage"<<endl<<endl;
					cout<<"the price is 160.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+160.00)*pizzanumber;
		    		vat=(vat+6.00)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
				case 3:
					cout<<"you have choosen chicken tikka"<<endl<<endl;
					cout<<"the price is 160.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+160.00)*pizzanumber;
		    		vat=(vat+6.00)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
				case 4:
					cout<<"you have choosen non-veg delux"<<endl<<endl;
					cout<<"the price is 150.00"<<endl<<endl;
					cout<<"enter the number of pizza=";
		    		cin>>pizzanumber;
					sum=(sum+150.00)*pizzanumber;
		    		vat=(vat+6.00)*pizzanumber;
		    		total=vat+sum;
		    		totalpizza=totalpizza+pizzanumber;
					break;
			}break;	
		    		
		    		
	}
	cout<<"\nENTER 1 TO ADD MORE PIZZA ITEM"<<endl;
	cout<<"ENTER 0 TO TO PRINT BILL"<<endl;
	cin>>a;
    }
    cout<<endl;
    /*int number;
    cout<<"ENTER THE NUMBER OF PERSON:";
	cin>>number;*/
	class customar
	{
			public:
		string customar_name;
		long long phone_number;
	
			void getdata()
			{
				fflush(stdin);
				cout<<"ENTER THE NAME:";
			    getline(cin,customar_name);
				cout<<"ENTER THE PHONE NUMBER:";
				cin>>phone_number;
				cout<<endl<<endl;
			}
			void showdata()
			{
				//cout<<setw(10)<<customar_name<<setw(10)<<phone_number<<setw(10)<<totalpizza<<setw(10)<<sum<<setw(10)<<vat<<setw(10)<<total<<endl;
				
				cout<<setw(20)<<customar_name;
				cout<<setw(20)<<phone_number;
				cout<<setw(20)<<totalpizza;
            	cout<<setw(20)<<sum;
                cout<<setw(20)<<vat;
	            cout<<setw(15)<<total<<endl;				
			}
	};

	fstream bill,temp;
	customar e;
	int no,c;
	string customarname;
	ofstream obj("BILL OF PIZZA.txt",ios::app);
	obj.close();
	
	
	while(1)
	{
		cout<<"1 GENERATE BILL\n";
		cout<<"2 ADD MORE ITEM\n";
		cout<<"3 REMOVE ORDER\n";
		cout<<"4 UPDATE ORDER\n";
		cout<<"5 PLACE A NEW ORDER\n";
		cout<<"6 COMPLETE YOUR PURCHASE\n";
		cout<<"ENTER CHOICE: ";cin>>c;
		switch(c)
		{
				case 1:
				e.getdata();
				bill.open("BILL OF PIZZA.txt",ios::app|ios::binary|ios::ate|ios::in|ios::out);
				bill.write((char*)&e,sizeof(e));
				
				
				cout<<endl<<endl;
				
				cout<<setw(20)<<"CUSTOMAR NAME:"<<setw(20)<<"PHONE NUMBER:"<<setw(20)<<"TOTAL PIZZA:"<<setw(20)<<"PIZZA price:"<<setw(20)<<"VAT"<<setw(15)<<"TOTAL:"<<endl;
				
				while(bill.eof()==0)
				{
					e.showdata();
					bill.read((char*)&e,sizeof(e));	
				}
				bill.close();
				break;
			case 2:
				goto x;
				 e.getdata();
				 bill.open("BILL OF PIZZA.txt",ios::app|ios::binary);
				 bill.write((char*)&e,sizeof(e));
				 bill.close();
				 break;
			case 3:
				cout<<"Enter your name to remove your order: ";
				fflush(stdin);
                cin>>customarname;
                cout<<setw(20)<<"CUSTOMAR NAME:"<<setw(20)<<"PHONE NUMBER:"<<setw(20)<<"TOTAL PIZZA:"<<setw(20)<<"PIZZA price:"<<setw(20)<<"VAT"<<setw(15)<<"TOTAL:"<<endl;
                cout<<"your order has been deleted succesfully";
                break;
			case 4:
				goto x;
				 e.getdata();
				 bill.open("BILL OF PIZZA.txt",ios::app|ios::binary);
				 bill.write((char*)&e,sizeof(e));
				 bill.close();
				 break;
			case 5:
				goto x;
				e.getdata();
				bill.open("BILL OF PIZZA.txt",ios::app|ios::binary|ios::ate|ios::in|ios::out);
				bill.write((char*)&e,sizeof(e));
				
				
				cout<<endl<<endl;
				
				cout<<setw(20)<<"CUSTOMAR NAME:"<<setw(20)<<"PHONE NUMBER:"<<setw(20)<<"TOTAL PIZZA:"<<setw(20)<<"PIZZA price:"<<setw(20)<<"VAT"<<setw(15)<<"TOTAL:"<<endl;
				
				while(bill.eof()==0)
				{
					e.showdata();
					bill.read((char*)&e,sizeof(e));	
				}
				bill.close();
				break;
			case 6:
				exit(0);
				
				
		}
    }
	
	return 0;
}
