#include<iostream> 
#include<math.h> 
using namespace std; 

class Calculator{
	public:
		float a,b,PI; 
		int fun; 
		
		void Calc(){
			cout<<endl; 
			
			while(fun!=11){
				cout<<"\n\n******************** GUI Calculator ******************\n"; 
				cout<<"---------------------------------------------------\n"; 
				cout<<"          Available Operations & Functions\n"; 
				cout<<"---------------------------------------------------\n"; 
				cout<<"1: Addition\t\t"<<"7: Cube\t\t"<<endl; 
				cout<<"2: Subtraction\t"<<"\t8: Sin\t\t"<<endl; 
				cout<<"3: Division\t\t"<<"9: Cos\t\t"<<endl; 
				cout<<"4: Multiplication\t"<<"10: Tan"<<endl; 
				cout<<"5: Square root\t\t"<<"11: Quit"<<endl; 
				cout<<"6: Square\t\t"<<endl; 
				cout<<"Enter the function that you want to perform : "; 
				cin>>fun; 
				switch(fun) 
				{ 
				case 1: 
				cout<<"Enter 1st number : "; 
				cin>>a; 
				cout<<"Enter 2nd number : "; 
				cin>>b; 
				cout<<"Addition = "<<a+b<<endl; 
				break; 
			
				case 2: 
				cout<<"Enter 1st number : "; 
				cin>>a; 
				cout<<"Enter 2nd number : "; 
				cin>>b; 
				cout<<"Subtraction = "<<a-b<<endl; 
				break; 
			
				case 3: 
				cout<<"Enter 1st number : "; 
				cin>>a; 
				cout<<"Enter 2nd number : "; 
				cin>>b; 
				cout<<"Division = "<<a/b<<endl; 
				break; 
			
				case 4: 
				cout<<"Enter 1st number : "; 
				cin>>a; 
				cout<<"Enter 2nd number : "; 
				cin>>b; 
				cout<<"Multiplication = "<<a*b<<endl; 
				break; 
			
				case 5: 
				cout<<"Enter the number : "; 
				cin>>a; 
				cout<<"Square Root = "<<sqrt(a)<<endl; 
				break; 
			
				case 6: 
				cout<<"Enter the number : "; 
				cin>>a; 
				cout<<"Square = "<<pow(a,2)<<endl; 
				break; 
			
				case 7: 
				cout<<"Enter the number : "; 
				cin>>a; 
				cout<<"Cube = "<<pow(a,3)<<endl; 
				break; 
			
				case 8: 
				cout<<"Enter the number : "; 
				cin>>a; 
				cout<<"Sin = "<<sin(a)<<endl; 
				break; 
			
				case 9: 
				cout<<"Enter the number : "; 
				cin>>a; 
				cout<<"Cos = "<<cos(a)<<endl; 
				break; 
			
				case 10: 
				cout<<"Enter the number : "; 
				cin>>a; 
				cout<<"Tan = "<<tan(a)<<endl; 
				break; 
			
				default: 
				cout<<"Wrong Input"<<endl; 
				} 
			}

		}

};

int main () 
{ 
system("color 17");
Calculator obj;
obj.Calc();
}

