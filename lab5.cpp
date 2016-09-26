//Lab5
#include <iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;

void newline(){
    char xs;
    do{cin.get(xs);}while(xs!='\n'); 
}


void prob1(){
	struct Student{
	int id;
	char name[30];
};

struct Quiz{
	double quizy;
	double average;
};

int main;{
	Student stud[1];
	Quiz quiz[3];
	float total=0;
	int check;
	cout << "==============STUDENT QUIZ==============="<<endl;
    cout << "Enter student records: \n";
    for(int x=0; x<1; x++){
    	cout << "ID: ";
		cin >> stud[x].id;
    	newline();
    	cout << "Name: ";
    	cin.getline(stud[x].name,29);
    	
		for(int y=0; y<3; y++){
            cout << "Quiz "<< y+1 << ": ";
            cin >> quiz[y].quizy;
            newline();
        }
	}
	
	cout<<"\n\nStudent record: ";
	for(int x=0; x<1; x++){
    	cout << "\nID: " << stud[x].id;
    	cout << "\nName: ";
    	puts(stud[x].name);
    	
    	for(int y=0; y<3; y++){
			total+=quiz[y].quizy;
        }
        cout << "Grade: "<< (total/3) << endl;		
		if((total/3)<75){
			cout<<"Remarks: Failed!\n";
		}
		else{
			cout<<"Remarks: Passed!\n";
		}
		cout<<endl;
		total=0;
	}
}
}
void prob2(){
struct Student{
	
	int id[5];
	char fullName[30];
};

struct Quiz{
	
	float quizy[3];
};

int main;{
	
	Student stud[5];
	Quiz quiz[3];
	float total1=0,total2=0;
		
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	
	
	cout << "=============Students Record============="<<endl;
    cout << "Enter student records: "<<endl;
    	for(int i=0; i<5; i++){
    		
			cout<<"Student no "<<i+1;
    		cout << "\nID no: ";
			cin >> stud[i].id[i];
    		newline();
    		cout << "Name: ";
    		gets(stud[i].fullName);
    			
    	for(int j=0; j<3; j++){
            cout << "Quiz "<< j+1 << ": ";
            cin >> quiz[i].quizy[j];
        }
    		 cout<<endl;
		}
	
	//for the table
	cout << setw(10) << "No."
	  	 << setw(15) << "Student No."
		 << setw(15) << "Name"
		 << setw(15) << "Grade"
		 << setw(16) << "Remark"
		 << endl;
	
	for(int kl=0; kl<5; kl++){
		cout << setw(10) << kl+1;
		
    	cout << setw(15) << kl+1;
    	cout << setw(15)<< stud[kl].fullName;
    	for(int er=0; er<3; er++){
    		
    	total1+=quiz[kl].quizy[er];	
		}
		total2=total1/3;
		cout<<setw(17) << total2;
		if(total2<75){
			cout <<setw(17)<< "FAILED" << endl;
		}
		else{
			cout <<setw(17)<< "PASSED"<<endl;
		}
		
		total1=0;
		total2=0;
		
}	
}
}
void prob3(){

struct Name{
       char lastname[30];
       char firstname[30];
};

struct Item{
      int id[9];
      char name[20];
      double price[9];       
};
struct Date{
	int day;
	int month; 
	int year;
};
struct Order{
	Date date;
	Item item;
	int quantity;
};
struct Custom{
	Name name;
	int contact;
	Order order;
};


int main;{
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	int itm[3];
    Custom custom[3];
    int sub;
    double totalprice=0;
    cout <<"\n===============Customer Information=================="<<endl;
    for (int tr=0;tr<3;tr++){
		cout << "\nCustomer Information " << tr+1 << ":" << endl;
	cin.ignore();
	cout << "First name: ";
    gets(custom[tr].name.firstname);
     cout << "Last name:";
    gets(custom[tr].name.lastname);
    cout << "Contact no: ";
    cin>> custom[tr].contact;
    
	cout << "Order Date: "<<endl;
    cout << "Day: ";
	cin >> custom[tr].order.date.day;
	cout << " Month: ";
	cin>>custom[tr].order.date.month;
	cout<< "Year: ";
	cin>>custom[tr].order.date.year;
    cout << "Enter 3 items: " << endl;
    
	for(int i=0; i<3; i++){
            
            cout << "ID no: ";
			cin >> custom[tr].order.item.id[i];
			cin.ignore();
			cout<< "Name: ";
			gets(custom[tr].order.item.name);
			cout<<"Price: ";
			cin>> custom[tr].order.item.price[i];\
			cout<<"Quantity: ";
			cin>>custom[tr].order.quantity;		        
    }

	}
	    cout<<"**********************************Summary Report**********************************"<< endl;
	    
		cout<< "#" 
		<< setw(20)<<"Costumer Name"
		<<setw(20)<<"Order Date"
		<<setw(20)<<"Item"
		<<setw(20)<<"Price"
		<<setw(20)<<"Quantity"<<endl;
	
	for (int tr=0;tr<3;tr++){
		cout<< tr+1 <<setw(10)<< custom[tr].name.lastname<<custom[tr].name.firstname
		<<setw(25)<<custom[tr].order.date.day<<"/"<<custom[tr].order.date.month<<"/"<<custom[tr].order.date.year<<endl;
	
	for(int i=0; i<3; i++){
		cout<<setw(55) <<custom[tr].order.item.name
			<<setw(30)<<custom[tr].order.item.price[i]
			<<setw(30)<<custom[tr].order.quantity<<endl;
			
 		sub=custom[tr].order.item.price[i] * custom[tr].order.quantity;
	 	totalprice+=sub;

	}
	cout <<setw(80)<< "Total Price: "   << totalprice << endl <<endl;
	totalprice=0;
	sub=0;
	}
	
	
	system("pause");
}
}

int main(){
	prob1();
	prob2();
	prob3();
}
