//nayti naimen'shee znachenie v massive

//arr

int Foo4(int *arr)
{
	int minValue = arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i];
		}
	}	
	
	cout << "Naimenshee chislo: " << minValue << endl;
}


