#include <iostream>
#include <vector>
#include <stdlib.h>

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


long long MaxPairwiseProduct(const std::vector<long long>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}


int main ()
{
	while (1)
	{
		int ElementsNumbers = rand()%1000 +2;
		cout << ElementsNumbers<<endl;
		vector <long long> elements;
		for(int i=0;i<ElementsNumbers;i++)
		{
			elements.push_back(rand()%100000);
			cout<<elements[i]<<' ';
		}
		cout<<endl;
		long long Max1,Max2;
		int indexM = -1;
		Max1 = MaxProducts(elements,indexM);
		Max2 = MaxProducts(elements,indexM);
		long long result1 = Max1*Max2;
		long long result2 = MaxPairwiseProduct(elements);
		if(result1 != result2)
		{
			cout<<"Wrong Answer "<<endl<<"Mine = "<< result1<<"  PC = "<<result2<<endl;
			break;
		}
		else
			cout<<"OK"<<endl;
	}
	return 0;
}