#include<iostream>
using namespace std;

int main()
{ 
	int quant;//quantity
	int choice;//it defines choice
	string password;
	
	int qrooms=0,qpasta=0;//these all define the availabilty of food items at hotel
	
	int srooms=0,spasta=0;//this define the sold number of items
	
	int t_amount_rooms=0,t_amount_pasta=0;//this define the total price of each component ie;rooms,pasta etc..
	 
	 //we will take user input for availablity of number rooms, food items etc; // For owner
	 cout<<"\t*** Welcome to Hotel Peace ***\n ";
k:	 cout<<"\n\tEnter owners password: ";
	 cin>>password;
	 if(password=="dawood1999") //I have added the password so that nobody should enter the data of hotel except owner
	 {
	 
	cout<<"\n\t Quantity of items available\n ";
	cout<<"\n\t Quantity of rooms: ";
	cin>>qrooms;
	cout<<"\n\t Quantity of pasta: ";
	cin>>qpasta;
   m:
	//we will create a menu
	cout<<"\n\n\tPlease select the items\n";
	cout<<"\t1.Rooms\n";
	cout<<"\t2.pasta\n";
	cout<<"\t3.Information regarding sales and collection\n";
	cout<<"\t4.Exit\n";

  //display a message 
	cout<<"\nplease enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: cout<<"\nEnter the rooms:";
		        cin>>srooms;
		       if(qrooms>=srooms)
		       {
		       	qrooms=qrooms-srooms;
		       	cout<<"\n\t Congratulations...!\n\t"<<srooms<<" rooms are succesfully purchased...!\n";
		       	t_amount_rooms=t_amount_rooms+(srooms*1000);
			   }
		       else
		       {
		       	cout<<"\tThere are only "<<qrooms<<"available !";
		       	
			   }
			   break;
	    case 2: cout<<"Enter the pasta quantity:";
		        cin>>spasta;
		       if(qpasta>spasta)
		       {
		       	qpasta=qpasta-spasta;
		       	cout<<spasta<<" succesfully purchased\n";
		       	t_amount_pasta=t_amount_pasta+(spasta*200);
			   }
		       else
		       {
		       	cout<<"There are only "<<qpasta<<"available !";
		       }
		      break;
		 case 3: cout<<"\n\t***TOTAL AMOUNT GENERATED FOR A DAY****\n";
		         cout<<"\n\t1)Total amount generated by rooms: Rs. "<<t_amount_rooms<<"\n\t  Rooms available: "<<qrooms;
		         cout<<"\n\t2)Total amount generated by pasta: Rs. "<<t_amount_pasta<<"\n\t  Pasta available: "<<qpasta;
		         break;
		
	    default: cout<<"\n\tchoose the valid option to proceed... Thank you !\n";
	
    }	goto m;
}
else
{
	cout<<"You have entered the wrong password..!";
	
}
goto k;
}
