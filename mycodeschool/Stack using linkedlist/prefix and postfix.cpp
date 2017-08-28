//prefix(Polish Operation) and postfix operation(Reverse - Polish Operation)
#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int postfix(string str,int l){
	stack<char> s;
	int result;
	for(int i=0;i<l;i++){
		char c = str[i];
		if(c==' ' || c==',')
			continue;
		if(c=='*' || c=='/' || c=='+' ||c=='-'){
			int op2 = s.top();
			s.pop();
			int op1 = s.top();
			s.pop();
			int res = 0;
			if(c=='*')
				result = op2*op1;  		
			else if(c=='+')
				result = op2+op1;
			else if(c=='-')
				result = op1 - op2;
			else 
				result = op1 / op2;
			
			//cout<<"\nThe Result has been performed as = "<<result;
			s.push(result);
		}
		else{
			int operation1 =(int)(c - '0');
			s.push(operation1);
		}
	}
	return s.top();
}

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	string str;
	cin>>str;
	int l = str.length();
	cout<<"Result is = "<<postfix(str,l);
	return 0;
}
