#include<iostream>
#include<cstring>
using namespace std;

const char* yo(const char* str){
  //return strlen(str);
  return str;
}

void problem1(){
	cout << "\n================String=Compare================" << endl;
	int result;
  char str1[100];
  char str2[100];
  strcpy(str1,"Hello");
  strcpy(str2,"hello");
switch(strcmp (str1,str2))
{
	case -1:
		cout << "Negative" <<endl;
		break;
	case 1:
		cout << " Positive" << endl;
		break;
	case 0:
		cout << "Equal" << endl;
		break;
}
}
void problem2(){
	cout << "=================String=Copy==================" << endl;
	char str1[100];
  char str2[100];
  cout << "Enter first character: ";
  gets(str1);
  cout << "Enter second character: ";
	gets(str2);
	
strcpy(str1,str2);
cout << "The new Value of Str1: " << str1;
}
void problem3(){
	cout << "\n=============String=Concatenate===============" <<endl;
	  char str1[100];
  char str2[100];
  cout << "Enter first character: ";
gets(str1);
  cout << "Enter second character: ";
gets(str2);
	
strcat(str1,str2);
cout << "New string value for str1: " << str1;
}
void problem4(){
	cout << "\n==================Palidrome===================" << endl;
		char stringss[100];
	int x,length;
	int flag=0;
	
	cout << " Enter a word: ";
	gets(stringss);
	length = strlen(stringss);
	for (x=0;x<length;x++){
		if (stringss[x]!= stringss[length-x-1])
		{
			flag=1;
			break;
		}
	}
	
	if (flag)
	{
		cout << " " <<stringss << " is not a palidrome" << endl;
		}	
	else
	{
		cout << " " << stringss << " is a palidrome" << endl;
	}
	
}
void problem5(){

		cout <<"\n===============Tolower/Toupper================" <<endl;
char str1[100];

cout<<"enter string : ";
gets(str1);

for (int x=0;x<strlen(str1);x++)
{
	str1[x]=tolower(str1[x]);
	str1[0]=toupper(str1[0]);
}

for (int y=0;y<strlen(str1);y++){
	if (str1[y]==' ')
	{
		str1[y+1]=toupper(str1[y+1]);
	}
}
puts(str1);
	}
int main(){
problem1();	
problem2();
problem3();
problem4();
problem5();
}


