#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<double>temps;
	double sum=0;
	double temp;
	while (cin>>temp){
		temps.push_back(temp);
    }
	for(int i=0;i<temps.size();++i)
		sum+=temps[i];
		
	cout<<"Temperatura promedio: "<<sum/temps.size()<<endl;
	sort(temps.begin(),temps.end());
	cout<<"Temperatura mediana: "<<temps[temps.size()/2]<<endl;
	
}
