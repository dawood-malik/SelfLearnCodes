#include<iostream>

using namespace std;

int main(){
	int options,choice,amount,pass,withdraw,i;
	string password;
	int pin[5]={1234,5678,9012,3456,7890};//These are the PINS maintained by the bank

	
m:	cout<<"\n\tChoose the options:\n\t1.Management\n\t2.Services\n\t3.Amount available in ATM.";
	cin>>options;
	switch(options)
	{
		case 1://password is essential for management  
		        cout<<"\n\t***   MANAGEMENT  ***";
		        cout<<"\n\tEnter the password: ";
		        cin>>password;
		        if(password=="dawood1999")
		        {
		        cout<<"\n\tManagement\n\t1.Enter the amount\n\t2.Exit\n";
		        cin>>choice;
		        //1.Enter the amount
		        //2.Exit(0)
		        switch(choice)
		        {
		        	case 1: cout<<"\n\tEnter the amount: ";
		        	        cin>>amount;
		        	        cout<<"\tAmount added to ATM is Rs. "<<amount;
		        	        break;
		            case 2: exit(0);break;
		        }
		        
		    }
		    else
		    {
		    	cout<<"\nYou have entered the wrong password..!!";
			} goto m;
		      break;   
		      
		case 2:  cout<<"\n\t***  SERVICES  ***";
		         /* Services available
		            1. Cash withdrawal
		            2. Balance
		            */
		         cout<<"\n\t###  Swipe the card ";
		         cout<<"\n\t Enter the PIN: ";
		         cin>>pass;
		         for(i=0;i<5;i++)
		         {
		         	if(pass==pin[i])
		         	{
		         		cout<<"\n\t Enter the amount: ";
		         		cin>>withdraw;
		         		if(amount>withdraw)
		         		{
						 
		         		amount=amount-withdraw;
		         		cout<<"You have succesfully withdrawn Rs. "<<withdraw;goto m;
		         	   }
		         	   else
		         	   {
		         	   	cout<<"\n\tInsufficient amount in the ATM...!\n\tPlease enter the amount within Rs. "<<amount;goto m;
						}
					 }
					 else
					 {
					 	cout<<"\n\t***  Enter the valid PIN...!";goto m;
					 	
					 }
				 }
				 break;
		case 3: cout<<"\n\t*** AMOUNT AVAILABLE IN ATM ***";
		        cout<<"Amount: "<<amount;goto m;
		        break;
		
		default: cout<<"Enter the valid options...!!";
		          
		         
		
		         
		         
		         
		        
	}

}

   

