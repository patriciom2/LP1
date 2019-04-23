#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	vector<string>words;
	string temp;
	cout<<"Ingrese palabras"<<endl;
	while (temp!="/"){
		cin>>temp;
		words.push_back(temp);
	}
	cout<<"Numero de palabras: "<<words.size()-1<<endl;
	sort(words.begin(),words.end());
	
	for(int i=0;i<words.size();++i)
		if (i==0||words[i-1]!=words[i])
			cout<<words[i]<<endl;
		
    
}
