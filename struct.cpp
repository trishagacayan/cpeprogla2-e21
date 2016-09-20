#include<iostream>
#include<iomanip>
using namespace std;

struct customer{
	char firstname[50];
	char lastname[50];
	int cnum;
};
struct date{
	int month;
	int day;
	int year;
};
struct item{
	int id;
	char name[50];
double price;
	int quantity;
	int totalprice;
};

main(){
	customer ctm[3];
	date dt;
	item itm[3];
	int i;
	cout <<" Enter 3 Customers:\n";
	
	for(i=0;i<3;i++)
	{
		cout << "Costumer Information " << i+1 <<endl;
		cout << "First Name: ";
		cin.ignore();
		cin.getline(ctm[i].firstname,49);
		cout << "Last Name: ";
		cin.getline(ctm[i].lastname,49);
		cout <<"Contact No. : ";
		cin >> ctm[i].cnum;
		cout <<" Order Date:" <<endl;
		cout << "Day: ";
		cin >> dt.day;
		cout << "Month: ";
		cin >> dt.month;
		cout << " Year: ";
		cin >> dt.year;
		for (int y=0;y<3;y++)
		{
			cout << "ID: " << y+1 <<endl;
			cin.ignore();
			cout << " Name: ";
			cin.getline(itm[y].name,49);
			cout <<"Price:";
			cin >>itm[y].price;
			cout <<" Quantity: ";
			cin >> itm[y].quantity;	
		
		}
		
	}
	cout << "=====================SUMMARY REPORT====================="<< endl;;
	cout << setw(10) <<"costumer No."
		 << setw(20) <<"costumer name:"	
		 << setw(20) <<"order date:"
		 << setw(10) <<"items:"	
		 << setw(10) << "price:"
		 << setw(16) << "Quantity:";

	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	for (i=0;i<3;i++)
	{
	
	cout <<endl;
	cout <<setw(5)<<i+1;
	cout <<setw(18)<<ctm[i].lastname<<", "<<ctm[i].firstname;
	cout <<setw(20)<<dt.day <<"/"<<dt.month <<"/"<<dt.year <<endl;
	
	for (int y=0;y<3;y++)
	{
	cout <<setw(59)<<itm[y].name<<setw(12)<<itm[y].price<<setw(12)<<itm[y].quantity<<endl;
	cout<<"Total Price: ";
	
		
		
	}
}
return 0;
}
