#include <iostream>
#include <vector>

#define LowerLimit 2
#define UpperLimit 200000

using namespace std;

long long MaxProducts(const vector<long long>& numbers,int &index)
{
	long long TempMax= 0;
	int TempIndex;
	int ArrSize = numbers.size();
	for (int i=0; i<ArrSize; i++)
	{
		if((TempMax < numbers[i])&& (i != index))
		{
			TempMax = numbers[i];
			TempIndex =i;
		}
	}
	index = TempIndex;
	return TempMax;
}


int main ()
{
	int NumberOfElements ;
	cin>>NumberOfElements;
	if ((NumberOfElements < LowerLimit) || (NumberOfElements > UpperLimit) || (cin.fail()==1))
		return 0;
	
	else
	{	
		long long Max1;
		long long Max2;
		vector<long long> numbers(NumberOfElements);
		
		for (int i=0; i<NumberOfElements; i++)
		{
			cin>>numbers[i];
			if((cin.fail()) || (numbers[i]<0))
			{
				return 0;
			}
		}
		int indexM=-1;
		Max1 = MaxProducts(numbers,indexM);
		Max2 = MaxProducts(numbers,indexM);
		cout<<Max1*Max2;

	}
}