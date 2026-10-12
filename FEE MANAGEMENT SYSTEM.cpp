# include <iostream>
using namespace std;
class Student{
	public:
		string student_name;
		int admission_number;
		double fee_balance;
		double payment;
		double Remaining_balance;
		
		 
		 void inputDetails(){
			 cout<<"enter the students name:"<<endl;
			 cin>>student_name;
			 cout<<"enter the admission number:"<<endl;
			 cin>>admission_number;
			 cout<<"enter the fee balance:"<<endl;
			 cin>>fee_balance;
		 }
		 
		 void makePayment(){
			 cout<<"enter the amount to pay:"<<endl;
			 cin>>payment;
			  Remaining_balance=fee_balance-payment;
			  
			  cout<<"Remaining balance:"<<Remaining_balance<<endl;
			  
			  cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
		 }
		 void displayStatus(){
			 cout << "\n===== STUDENT FEE STATUS =====" << endl;
			 cout<<"enter the students name:"<<student_name<<endl;
			 cout<<"enter the admission number:"<<admission_number<<endl;
			 cout<<"enter the fee balance:"<<fee_balance<<endl;
			 cout<<"enter the payment:"<<payment<<endl;
			 cout<<"======================:"<<endl;
			 cout<<"enter the remaining balance:"<<endl;
			 cout<<"=======================:"<<endl;
		 }
};

  int main(){
	  Student student1; 
	  student1.inputDetails(); 
	  student1.makePayment(); 
	  student1.displayStatus();
      
      return 0;
      
}