#include<iostream>
using namespace std;
void greet(string name ="Guest") {
	cout<<"Hello, "<<name<<"!"<<endl;
}
int main() 
{
	greet();
	greet("Nandini");
	return 0;
}
