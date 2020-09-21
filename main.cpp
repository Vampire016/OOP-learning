#include <iostream>
#include <string>

#include<stdlib.h>
using namespace std;




int Foo1();			//increase by 1
int Foo2();			//swap the elements of arr
int Foo3();			//print revert
int Foo4();			//min value



int main()
 {
 	int arr[5] = {3,5,7,6,9};
 	
 	int command;
 	
 	int value;
 	int indx;
 	
 	while (true)			
{
	cout << "0 - Exit 1 - Read 2 - Write(not more than 5 elements) 3 - increase by 1 4 - swap elem arr 5 - print arr rev 6 - min val" << endl <<  "please, choose a command: ";
	cin>>command;
	system("cls");
	
	switch (command)
	{
		case 1:
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<endl<<endl;
		break;
			
		case 2:
			cout<<"Select the index of the element to fill and its value:";
			cin>>indx>>value;
			
			arr[indx] = value;
			system("cls");
		break;
		
		case 3:
			foo1();
		break;	
		
		case 3:
			foo2();
		break;
		
		case 3:
			foo3();
		break;
		
		case 3:
			foo4();
		break;
		
		case 0:
			return 0;
		break;
		
	}
}
 	
	return 0;
 }
