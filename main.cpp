/*
Author: Matthew Jones.
task study the string'
created 10/16/18
*/


#include<iostream>
 
#include<string> 
 
using namespace std;



int letter_a(string M)    
{  
	int count = 0;	
	
	for (int i =0; i < M.length(); i ++)
		{
		if (M.at(i) == 'a' || M.at(i) == 'A') 
			{
 			count ++;   
			} 
		} 
	return count;

}

	 	
	int main() 
{ 

	string s = "abcABC"; 
	cout << " enter your string " ;
	getline(cin,s); 
	cout << letter_a(s) << endl; 	
return 0;  
}		

		
			
