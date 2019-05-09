#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int main()
{
	string n;
	vector<string>nums;
	nums.push_back("cero");
	nums.push_back("uno");
	nums.push_back("dos");
	nums.push_back("tres");
	nums.push_back("cuatro");
	nums.push_back("cinco");
	nums.push_back("seis");
	nums.push_back("siete");
	nums.push_back("ocho");
	nums.push_back("nueve");
	
	cout<<"ingrese su numero en palabras (0-9): \t";
	cin>>n;
	
	for(int i=0;i<nums.size();i++){
		if (n==nums[i]){
			cout<<i<<endl;
		}
    }
}

