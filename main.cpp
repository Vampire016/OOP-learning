#include <iostream>
#include <string>

#include<stdlib.h>				//ïîäêëþ÷àåò ôóíêöèþ system("cls");
using namespace std;


int main()
 {
 	int arr[5] = {3,5,7,6,9};
 	
 	int command;
 	
 	int value;
 	int indx;
 	
 	/*setlocale(0, "");*/
 	
 	
 	while (true)			
{
	cout << "0 - Exit 1 - Read 2 - Write(not more than 5 elements) 3 - sort" << endl <<  "please, choose a command: ";
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
		
		break;	
		
		case 0:
			return 0;
		break;
		
	}
}
 	
	return 0;
 }
