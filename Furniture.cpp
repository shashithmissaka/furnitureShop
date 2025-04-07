//Header File 
#include<iostream>
#include<fstream>
#include <iomanip>
#include <stdlib.h>   
#include <windows.h>
#include<conio.h>
#define WINWIDTH 60
#define WINWIDTHg 120
#define WINHEIGHT 1
#include<ctime>

//initialization of Global variables
using namespace std;
int Quantity;
string Name;
int Item;
double Price;
int opt;

//usIng struct function
struct Fur
	{	int Fcode;
		string Fname;
		double Fprice;
	};
						
//function declarations
void welcomeS();
void welcome();
void liner();
void adminlist();
int admin ();
void customer();
void empsalary();
void cbill();
void welcomec();
void managerlist();
int manager();

//bill calculation interface
void cbill()
{
    for(int i = 0 ; i < WINHEIGHT ; i++)
        cout << endl;
}
void welcomec()
{	system("color 0A");
    cbill();
    cout <<"\n\n\n\n\n\t\tC A L C U L A T I N G   Y O U R   B I L L . . .   P  L E A S E   W A I T . . . . "<< endl<< endl<< endl<<endl;
    Sleep(200);
   for(int i = 0 ; i < WINWIDTH ; i++)
    {
        printf("||",77);
        Sleep(30);
    } 
	system("CLS");	
} 

//welcome loading screen
void liner()
{
    for(int i = 0 ; i < WINHEIGHT ; i++)
        cout << endl;       
}
void welcomeS()
	{	system("color 06");
    liner();
    cout << "\n\n\n\n\n\n\n\n\n\t\t\tS Y S T E M   I S   L O A D I N G . . .   P  L E A S E   W A I T . . . . " << endl<< endl<< endl<<endl;
    Sleep(200);
   for(int i = 0 ; i < WINWIDTH ; i++)
    {
        printf("[]",177);
        Sleep(50);
    } 
	system("CLS");	
	} 

//Welcome page
void welcome(){
	while(1){
	system("color 0A");
	string ch; 
   	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	cout <<"\t\t\tW E L C O M E   T O   T H E   S U P R I M E   F U R N I T U R E  (P V T)  L T D "<< endl<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t\t\t 1<<		THE ADMINISTRATOR LOGIN"<<endl<<endl;
    cout<<"\n\t\t\t\t 2<<		THE MANAGER LOGIN"<<endl<<endl;
    cout<<"\n\t\t\t\t 3<<		THE CUSTOMER LOGIN"<<endl<<endl;
    cout<<"\n\t\t\t\t 4<<		COMPANY DETAILS OF SUPRIME FURNITURE"<<endl<<endl;
    cout<<"\n\t\t\t\t 5<<		CONTACT DETAILS OF SUPRIME FURNITURE"<<endl<<endl;
    cout<<"\n\t\t\t\t 6<<		EXIT FROM THE SYSTEM "<<endl;
    cout<<"________________________________________________________________________________________________________________________ "<<endl;
    cout<<"\t\t\t- - - -   Input any number from 1 to 6 and press 'E N T E R'	- - - - \n"<<endl; // help option for user
	cout<<"\t\t\t\t\tEnter your choice:  ";
    cin>>ch;
    system("CLS");
    if(ch=="1"){
    	system("color 04");
        admin();
        exit(0);} 
	else if (ch=="2"){
        manager();
        exit(0);}      
    else if (ch=="3"){ 
        system("color 07");
        customer();
        exit(0);}
	else if(ch=="4"){
		system("color 02");
		cout<<"-----------------------------------------------------------------------------------------------------------------------\n\n";
    	cout<<"\t\t\t\t\t\t\tA B O U T   U S \n\n";
 		cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
		cout<<"		Extreme Furniture Group, is the worlds leader of five-star hotel furniture\n";
		cout<<"		and fully furnished luxury Home custom furniture.The company is located in\n"; 
		cout<<"		the modern 320,000-square-meter Senyuan Industrial Park in the Colombo With\n";
		cout<<"		a large-scale modern manufacturing base.It has more than 1600  skilled workers,\n";
		cout<<"		more than 300 national patented technologies,brand-new imported machinery,\n";
		cout<<"		a 15,000-square-meter large-scalefurniture showroom and a Craftsmanship R&D Center.\n";  	
		cout<<"";cout<<""<<endl;
		cout<<"________________________________________________________________________________________________________________________"<<endl<<endl<<endl;
		system("pause");
		system("cls");
		welcome();}		
	else if (ch=="5"){
        system("color 03" );	
		cout<<"-----------------------------------------------------------------------------------------------------------------------\n\n";
    	cout<<"\t\t\tC O N T A C T   D E T A I L S   O F   S U P R I M E   F U R N I T U R E\n";
 		cout<<"-----------------------------------------------------------------------------------------------------------------------\n"; 
		cout<<""<<endl;	
        cout<<"					 	SUPRIME FURNITURE SHOP"<<endl;
        cout<<"_______________________________________________________________________________________________________________________"<<endl<<endl<<endl;
		cout<<"\t\t\t 389 A, Nawala Road,"<<endl<<endl;
		cout<<"\t\t\t Rajagiriya,"<<endl<<endl;
		cout<<"\t\t\t Sri Lanka,  "<<endl<<endl;
		cout<<"\t\t\t Tel: +94 (0) 114 367676"<<endl<<endl;
		cout<<"\t\t\t E-mail: online@yourhomefurniture.lk"<< endl<<endl;
		cout<<"\t\t\t Store Hours: "<<endl;             
		cout<<"\t\t\t\t\tMon-Fri,   9:00am - 6:00pm\n\t\t\t\t\tSaturday,  9:00am - 6:00pm\n\t\t\t\t\tSunday,    Closed"<<endl<<endl;
		cout<<"_______________________________________________________________________________________________________________________"<<endl<<endl;
		system("pause");
		system("cls");
		welcome();}	
	else if (ch=="6"){
        system("cls");
		system("color 0D");
		cout<<" "<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------------------------\n\n";
		cout <<"\t\t\t\tT H A N K   Y O U   F O R   C H O O S I N G   U S\n";
		cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		exit(0);}
    else{
		cout<<"\t\t\t\t ************ PLEASE ENTER A VALID CHOICE ************"<<endl;}
        }
	}
	
//Emplyoee salary details
void empsalary(){
  	cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\tT H E   D E T A I L S   O F   E M P L O Y E E   S A L A R Y" << endl;
 	cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<<endl;
 	cout <<setw(5)<< "E_Id" <<setw(10)<<"Name"<<setw(15)<<"Basic Salary"<<setw(10)<<"OT Rate"<<setw(17)<<"OT hours"<<setw(17)<<"Net salary"<<setw(15)<<"To The Bank"<<setw(20)<<"Gross Salary"<<"\n"<<endl;
 	ifstream file("employee.txt");
	string content;
	string line;
	while(getline(file,line))
		cout<<line<<"\n";
		file.close();
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
		system("pause");
		system("cls");
		}
			
//manager login
	int manager(){
	   system("color 08");
	   string username ="";	
	   string password ="";
	   char ch;
	   cout<<""<<endl;
	   cout<<"------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	   cout <<"\t\t\t\t\t  T H E   M A N A G E R   L O G I N \n"<<endl;
	   cout<<"\t\t\t\t\t\t-SUPRIME  FURNITURE-"<<endl;
	   cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<<endl;
	   cout<<"			         !!! N O T E : Type the user name and Press E N T E R"<<endl<<endl;
	   cout <<"			 Username : ";
	   cin>>username;
	   cout<<"\n\n\n\n			 !!! N O T E :  Type the Password and Press E N T E R"<<endl<<endl;
	   cout <<"			 Password : ";
	   ch = _getch();
	   while(ch != 13){
	      password.push_back(ch);
	      cout << '*';
	      ch = _getch();
	   }
	   if(username=="user"&&password == "manager"){
	      cout <<"\n\n\n\n\t\t\t\t\t    A C C E S S   G R A N T E D \n";
	      cout<<"________________________________________________________________________________________________________________________\n"<<endl<<endl;
	      system("PAUSE");
	      system ("CLS");
	      managerlist();  
	   }
	   else{
	   	system("CLS");
	   	  cout<<"________________________________________________________________________________________________________________________"<<endl<<endl;
	      cout<< "\n\n\t\t\t\t    A U T H O R I S E D   P E R S O N N E L   O N L Y "<<endl<<endl;
	      cout<<"\t\t\t\t\t         ...Please try again..."<<endl<<endl;
	      cout<<"________________________________________________________________________________________________________________________\n"<<endl;
		  cout<<"\t\t\t *P r e s s   Y            - Re-Enter the username and password."<<endl<<endl<<endl;
		  cout<<"\t\t\t *P r e s s   N            - Go back to Welcome Menu"<<endl<<endl<<endl<<endl;
		  cout<<"\t\t\t\t\t*P r e s s   Any othey key to Exit"<<endl<<endl<<endl<<endl;
		  cout<<"\t\t\t\tEnter your Choice:  " ;
		  char conti;
		  cin>>conti;
		  if(conti=='Y'||conti=='y'){
		  	system ("CLS");
		  	manager();
		  }else if(conti=='N'||conti=='n'){
		  	system ("CLS");
		  	welcome();
		  }else{
		  system ("CLS");
		  exit(0);
		  }	
		}
	}

//manager department
	void managerlist(){
	system("color 08");
	cout<<""<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"\t\t\t\t\t   M A N A G E R   D E P A R T M E N T\n"<< endl;
    cout<<"\t\t\t\t\t\t  -SUPRIME FURNITURE-"<<endl<<endl;
 	cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t  Choose one from the following Options:\n";
	cout<<"________________________________________________________________________________________________________________________\n"<<endl<<endl;     
	cout<<"             1  << Add New Furiture items     	                	>>"<<endl<<endl;            
	cout<<"             2  << Update Employee Salary details             		>>"<<endl<<endl;   
	cout<<"             3  << Log into Admin             				>>"<<endl<<endl;   
	cout<<"             4  << Welcome menu           				>>"<<endl<<endl;   
	cout<<"             5  << Exit the Program             			>>"<<endl;           
	cout<<"________________________________________________________________________________________________________________________"<<endl<<endl;
    cout<<"\t\t\t- - - -   Input any number from 1 to 5 and press 'E N T E R'	- - - - \n"<<endl; // help option for user
	cout<<"\t\t\t\t\tEnter your choice:  ";
	string cho;
	cin>>cho;
	
	if(cho=="1"){
		system("cls");
		struct Fur //using struct function for update details of furniture
		{int Fcode;
		string Fname;
		double Fprice;
		};
		cout<<""<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
		cout<<"\t\t\t\tA D D I T I O N   O F   A   N E W   F U R N I T U R E "<< endl<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
		int j, m;
		cout<<"\t\t\tHow many furniture items do you want to add   : "; 
		cin >> m;
		if(m!=0|| m<0){
		cout<<""<<endl<<endl<<endl;	
		Fur f[m];
		for(j=0; j<m ;j++){
			cout<<"\t\t\tF U R N I T U R E   I T E M S   T H A T   Y O U   W A N T   T O   A D D :  "<<j+1<<endl<<endl<<endl;
			cout<<setw(30)<<"\t\t\tEnter the item code of the furniture          : "; 
			cin >> f[j].Fcode ;
			cout<<""<<endl;
			cout <<setw(30)<<"\t\t\tEnter the name of the furniture item          : "; 
			cin >> f[j].Fname ;
			cout<<""<<endl;
			cout <<setw(30) <<"\t\t\tEnter the Price of the furniture item        : Rs "; 
			cin >> f[j].Fprice; 
			cout<<""<<endl;                               
			ifstream file("NewFurniture.txt");
			string content;
			string line;
			while(getline(file,line)){
				content+=line +"\n";		
				}
			file.close();
			ofstream mf;
			mf.open("NewFurniture.txt");
			mf << content;
			mf<<setw(6)<< f[j].Fcode<<setw(15)<< f[j].Fname <<setw(13)<<"Rs"<<f[j].Fprice <<".00"<<endl;
			mf.close();		
			}
	system("cls");
	cout<<"\n----------------------------------------------------------------------------------------------------------------------"<< endl;
	cout<< "\t\t D A T A   H A S   B E E N   S E N T   T O   T H E   F U R N I T U R E   D A T A B A S E" << endl;
	cout<<"\n----------------------------------------------------------------------------------------------------------------------"<< endl;
	system("pause");
	system("cls");
	managerlist();
	}
	system("cls");
	cout<<""<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t D O   N O T   H A V E   A N Y   D A T A  T O   S E N D   T O   T H E   F U R N I T U R E   D A T A B A S E" <<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<< endl;
	system("pause");
	system("cls");
	managerlist();}
	
	if(cho=="2"){
		system("color 08");
		system("cls");
		{
			struct employee //struct function for update details of employee
		{
			string name;
			string emp_no;
			double basic_salary;
			int ot_hour;
			int leave_day;
			double increment;
			double  net_salary1 ;
			double net_salary2;
			double epfemp;
			double epfcom ;
			double epf;
			double gross_salary2;
			double bank;
			double ot_rate;
		};	
	cout<<"\n--------------------------------------------------------------------------------------------------------------------"<< endl;
   	cout<<"\t\t\tU P D A T E   T H E   D E T A I L S   O F   T H E   E M P L O Y E E"<< endl;
 	cout<<"---------------------------------------------------------------------------------------------------------------------"<< endl;
 	int p,o;
	cout <<"How many employee(s) needed to be updated?             : ";
	cin >> o;
	if(o!=0|| o<0){
	cout<<""<<endl;
	employee emp[o];
	for  (p=0; p<o ;p++){
	cout<<"\t\t\tT H E   N U M B E R   O F   E M P L O Y E E S   Y O U   W I S H   T O   A D D: "<< p+1<<endl<<endl;
	cout<<""<<endl;
	cout <<setw(30)<<"		Enter the Employee's ID number         :	";
	cin >> emp[p].emp_no;
	cout<<""<<endl;
	cout <<setw(30) <<"		Enter the Name of the Employee         :	";
	cin >> emp[p].name;                                
	cout<<""<<endl;
	cout <<setw(30) <<"		Enter the Basic Salary of the Employee :	";
	cin >> emp[p].basic_salary ;
	cout<<""<<endl;
	cout <<setw(30) <<"		How many OT hours did he/she work ?    :	";
	cin >> emp[p].ot_hour ;	
	cout<<""<<endl;
	cout <<setw(30)<<"		How many Leave days did he/she take    :	";
	cin >> emp[p].leave_day ;	
	cout<<""<<endl;
	cout <<setw(30)<<"		Enter the Increment of the Employee    :	";
	cin >> emp[p].increment;
	cout<<""<<endl;
	system("cls");
	cout<<"\n----------------------------------------------------------------------------------------------------------------------"<< endl;
	cout<< "\t\t D A T A   H A S   B E E N   S E N T   T O   T H E   E M P L O Y E E   D A T A B A S E" << endl;
	cout<<"\n----------------------------------------------------------------------------------------------------------------------"<< endl;

//salary calculator	
	emp[p].ot_rate = emp[p].basic_salary*0.01;
	emp[p].epf = emp[p].basic_salary * 3/100;
	emp[p].epfcom = emp[p].basic_salary * 12/100;
	emp[p].epfemp = emp[p].basic_salary * 8/100;
	emp[p].net_salary1= emp[p].basic_salary+ (emp[p].ot_rate *emp[p].ot_hour);
	emp[p].net_salary2 = emp[p].net_salary1 -( emp[p].basic_salary / 30 ) *emp[p].leave_day;
	emp[p].gross_salary2 = emp[p].net_salary2 + emp[p].increment - emp[p].epfemp;
	emp[p].bank = emp[p].epf + emp[p].epfcom + emp[p].epfemp;
//store in employee database	
	ifstream file("employee.txt");
	string content;
	string line;
	while(getline(file,line)){
	content+=line +"\n";
	}
	file.close();
	ofstream mf;
	mf.open("employee.txt");
	mf << content;
	mf<<setw(5)<< emp[p].emp_no <<setw(10)<<emp[p].name  <<setw(10)<<emp[p].basic_salary <<setw(11)<< emp[p].ot_rate<<setw(15)<<emp[p].ot_hour<<setw(20)<<emp[p].net_salary2 <<setw(15)<<emp[p].bank<<setw(20)<<emp[p].gross_salary2<<endl;
	mf.close();
 	}
  system("pause");
	system("cls");
	managerlist();
	}system("cls");
	cout<<""<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<< endl;
	cout<<"\t D O   N O T   H A V E   A N Y   D A T A  T O   S E N D   T O   T H E   E M P L O Y E E   D A T A B A S E" << endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<< endl;
	system("pause");
	system("cls");
	managerlist();
managerlist();}
}
//access to admininstrator department
if(cho=="3"){
		system("cls");
		system("color 08");
		adminlist();
		system("color 08");
	}
	
//go to welcome menu
	if(cho=="4"){
	system("cls");
	welcome();
	}
	
//exit from the system
	if(cho=="5")
	{
	system("cls");
    system("color 0D");
	cout<<" "<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\tH A V E   A   G O O D   D A Y " << endl;
 	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
 	exit(0);
	}

	//if the user input a incorrect number
	else{
	system("cls");
	managerlist(); 
	}  
}

//Administrator login    
int admin (){
	   string username ="";
	   string password ="";
	   char ch;
	   cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<<endl;
	   cout <<"\t\t\t\t\tT H E   A D M I N I S T R A T O R   L O G I N \n"<<endl;
	   cout<<"\t\t\t\t\t\t    -SUPRIME  FURNITURE-"<<endl;
	   cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<<endl;
	   cout<<"\t\t\t\tN O T E :Type the user name and Press ENTER"<<endl<<endl;
	   cout <<"\t\t\t\tUsername : ";
	   cin>>username;
	   cout<<""<<endl<<endl;
	   cout<<"\t\t\t\tN O T E :Type the Password and Press ENTER"<<endl<<endl;
	   cout <<"\t\t\t\tPassword : ";
	   ch = _getch();
	   while(ch != 13){
	      password.push_back(ch);
	      cout << '*';
	      ch = _getch();
	   }
	   if(username=="user"&&password == "admin"){
	      cout <<"\n\n\n\n\t\t\t\t\t     A C C E S S   G R A N T E D \n";
	      cout<<"________________________________________________________________________________________________________________________\n"<<endl<<endl;
	      system("PAUSE");
	      system ("CLS");
	      adminlist();   
	   }
	   else{
	   	system("CLS");
	     cout<<"________________________________________________________________________________________________________________________"<<endl<<endl;
	      cout<< "\n\n\t\t\t\t    A U T H O R I S E D   P E R S O N N E L   O N L Y "<<endl<<endl;
	      cout<<"\t\t\t\t\t         ...Please try again..."<<endl<<endl;
	      cout<<"________________________________________________________________________________________________________________________\n"<<endl;
		  cout<<"\t\t\t *P r e s s   Y            - Re-Enter the username and password."<<endl<<endl<<endl;
		  cout<<"\t\t\t *P r e s s   N            - Go back to Welcome Menu"<<endl<<endl<<endl<<endl;
		  cout<<"\t\t\t\t\t*P r e s s   Any othey key to Exit"<<endl<<endl<<endl<<endl;
		  cout<<"\t\t\t\tEnter your Choice:  " ;
		  char conti2;
		  cin>>conti2;
		  if(conti2=='Y'||conti2=='y'){
		  	system ("CLS");
		  	admin();
		  }else if(conti2=='N'||conti2=='n'){
		  	system ("CLS");
		  	welcome();
		  }else{
		  system ("CLS");
		  exit(0);
		  }	
		}
	}
	

//administrator department
void adminlist(){
	//system("color 04");
	cout<<"----------------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"\t\t\t\t\t A D M I N I S T R A T O R   D E P A R T M E N T\n"<< endl;
    cout<<"\t\t\t\t\t\t    -SUPRIME FURNITURE-"<<endl<<endl;
 	cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t  Select one from the following Options:\n";
	cout<<"________________________________________________________________________________________________________________________\n"<<endl<<endl;
	cout<<"             1  << View Available Furniture items      			>>"<<endl<<endl;                   
	cout<<"             2  << View Newly added Furniture items      		>>"<<endl<<endl;       
	cout<<"             3  << View Sales details          				>>"<<endl<<endl;      
	cout<<"             4  << View Employee Salary details             		>>"<<endl<<endl;   
	cout<<"             5  << Welcome menu           				>>"<<endl<<endl;   
	cout<<"             6  << Exit the Program            				>>"<<endl;              
	cout<<"________________________________________________________________________________________________________________________"<<endl<<endl;
    cout<<"\t\t\t- - - - Input any number from 1 to 6 and press 'E N T E R'	- - - - "<<endl<<endl; // help option for user
	cout<<"\tEnter your choice:  ";
	string cho;
	cin>>cho;

//view Available furniture items in the text file	
if(cho=="1"){
		system("cls");
		ifstream file2;
		file2.open("furniture items.txt");
		if(!file2){
			cout<<"\nError while opening the file\n"; }
		else{
			cout<<"\n----------------------------------------------------------------------------------------------------------------------"<< endl;
			cout <<"\t\t\t\tA V A I L A B L E   F U R N I T U R E   I T E M S"<< endl;
			cout<<"----------------------------------------------------------------------------------------------------------------------"<< endl;
			string line;
			while(file2.good())
				{
				getline(file2,line);
				cout<<line<<"\n\t";
				}
				cout<<"\n\n\t";
				system("pause");cout<<"\n\n";
				system("cls");
				}
			adminlist();}

//to show newly added furniture items
if(cho=="2"){
	system("cls");
	ifstream file2;
	file2.open("NewFurniture.txt");
	if(!file2)
		{
		cout<<"\nError while opening the file\n";
		}
	else
		{
		cout<<"\n----------------------------------------------------------------------------------------------------------------------"<< endl;
		cout <<"\t\t\tT H E   L I S T   O F   N E W L Y   A D D E D   F U R N I T U R E   I T E M S"<< endl;
		cout<<"----------------------------------------------------------------------------------------------------------------------"<< endl;
		cout <<setw(15)<<"Item no"<<setw(15)<<"      Name of the item "<<setw(10)<<"Price"<<endl;
		string line;
		while(file2.good())
		{
		getline(file2,line);
		cout<<line<<"\n\t";
		}
		cout<<"\n\n\t";
		system("pause");cout<<"\n\n";
		system("cls");
		}	
		adminlist();
		 }

//sales history as a text file
if(cho=="3"){
	system("cls");
	ifstream file2;
	file2.open("sales.txt");
	if(!file2)
	{
		cout<<"\nError while opening the file\n";
	}
	else
	{
	cout<<"\n----------------------------------------------------------------------------------------------------------------------"<< endl;
	cout <<"\t\tS A L E S   D E T A I L S   O F   T H E   S U P R I M E   F U R N I T U R E   (P V T)  L T D "<< endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<< endl;
	string line;
	while(file2.good())
		{
		getline(file2,line);
		cout<<line<<"\n\t";
		}
	cout<<"\n\n\t";
	system("pause");cout<<"\n\n";
	system("cls");
	}adminlist();
}
  
//go to main menu
	if(cho=="5"){
	system("cls");
	welcome();
	}
	
//Exit from the system  
	if(cho=="6")
	{system("color 0D");
	system("cls");
	cout<<" "<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\tH A V E   A   G O O D   D A Y " << endl;
 	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
 	exit(0);
	}
	
//employee salary	
	if(cho=="4"){
	system("cls");
	empsalary();
adminlist();
	}
//if the user enters a incorrect option 
	else
	{system("cls");
	adminlist(); 
	}
}

//customer function
void customer()
{while(1)
  {  
  	system("color 0E");	
  	cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<< endl;
	cout <<"\t\t\t\tW E L C O M E   T O   S U P R I M E   F U R N I T U R E   C O M P A N Y"<< endl<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<<endl;
	cout<<"\n\t\t\t1.		View available furniture\n\n\t\t\t2.		Buy furniture\n\n\t\t\t3.		Contact Details\n\n\t\t\t4.		About SUPRIME FURNITURE\n\n\t\t\t5.		Welcome menu\n\n\t\t\t6.		Exit\n"<<endl;
  	cout<<"________________________________________________________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t- - - - Input any number from 1 to 6 and press 'E N T E R'	- - - - "<<endl<<endl;// help option for user
	cout<<"\tEnter your choice:  "; 
  	string u;
  	cin>>u;
//to show available furnitures 
	if(u=="1")
  	{system ("CLS");
  	ifstream file2;
	file2.open("furniture items.txt");
	if(!file2)
	{
		cout<<"\nError while opening the file\n";
			}
	else
	{
		cout<<"\n---------------------------------------------------------------------------------------------------------------------"<< endl;
		cout <<"A V A I L A B L E   F U R N I T U R E   I T E M S   O F   T H E   S U P R I M E   F U R N I T U R E   (P V T)  L T D "<< endl;
		cout<<"----------------------------------------------------------------------------------------------------------------------"<< endl; string line;
		while(file2.good())
		{
		getline(file2,line);
		cout<<line<<"\n\t";
		}
		cout<<"\n\n\t";
		system("pause");
	    system("cls");}
		customer();	}
				
else if(u=="2"){
   		system("cls");
   		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<< endl;
		cout <<"\t\t\tF U R N I T U R E   I T E M S   T H A T   Y O U   C A N   P U R C H A S E"<< endl<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<<endl;
		cout <<"   ITEM NO:"<<"		PRODUCT"<<" 		PRICE"<<endl;
  		cout<<"                                              "<<endl;
 		cout <<"  	1   "<<"		SOFA SET      		Rs. 50000.00"<<endl;
 		cout <<"   	2   "<<"		CHAIR      		Rs. 6000.00"<<endl;
 		cout <<"   	3   "<<"		TABLE      		Rs. 7000.00"<<endl;
 		cout <<"   	4   "<<"		BED      		Rs. 10000.00"<<endl;
 		cout <<"   	5   "<<"		CUPBOARD     		Rs. 40000.00"<<endl<<endl;
 		cout<<"________________________________________________________________________________________________________________________"<<endl<<endl;
 		double total=0;
//struct function
struct buy_fur
	{	string name;
		string product;
		int amount;
		double prfu;
		double ntotal;
	};
int i,n=100;
buy_fur fu[n];
string name1;
cout<<"\t!!! N O T E :To cancel your purchase, you must click the Q button in the 'Item No. of the Product' row..."<<endl<<endl;
cout<<"\t\t\tEnter Your First Name          :"; 
cin>>name1 ;
cout<<" "<<endl;
	for  (i=0; i<n ;i++){
		cout<<"\t\t\tItem No of  the product        :"; 
		cin >> fu[i].product; 
		if(fu[i].product=="Q"||fu[i].product=="q") {
			system("cls");
			welcomec();
//goto function	
	goto total_salary;	} 
	cout<<" "<<endl;                              
	cout<<"\t\t\tHow many of them do you need?  :"; 
	cin >> fu[i].amount ;
	cout<<""<<endl;
	{
		if(fu[i].product=="1"){
			fu[i].prfu =50000;
		}else if(fu[i].product=="2"){
			fu[i].prfu=6000;
		}else if(fu[i].product=="3"){
			fu[i].prfu=7000;
		}else if(fu[i].product=="4"){
			fu[i].prfu=10000;
		}else if(fu[i].product=="5"){
			fu[i].prfu=40000;
		}}
	{
		if(fu[i].product=="1"){
			fu[i].product="SOFA SET ";
		}else if(fu[i].product=="2"){
			fu[i].product="CHAIR ";
		}else if(fu[i].product=="3"){
			fu[i].product="TABLE ";
		}else if(fu[i].product=="4"){
			fu[i].product="BED ";
		}else if(fu[i].product=="5"){
			fu[i].product="CUPBOARD ";
		}
	}
	fu[i].ntotal=fu[i].prfu*fu[i].amount;
	total=total+fu[i].ntotal;
//start file and save sale details
	ifstream file("customerdata.txt"); 
	string content;
	string line;
	while(getline(file,line)){
		content+=line +"\n";	
	}
	file.close();
		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;
		mf<<setw(15)<<name1;
		mf<<setw(25)<<fu[i].product<<setw(9)<<"Rs"<<setw(3)<<fu[i].prfu<<".00"<<setw(8)<<"x"<<fu[i].amount<<setw(10)<<"Rs"<<setw(4)<<fu[i].ntotal<<".00"<<endl;
		mf.close();
//started to create the bill
	ifstream file2("bill.txt");
	string content2;
	string line2;
	while(getline(file2,line2)){
		content2+=line2 +"\n";	
	}
	file.close();
		ofstream mf1;
		mf1.open("bill.txt");
		mf1 << content2;	
		mf1<<setw(19)<<fu[i].product<<setw(5)<<fu[i].prfu<<".00"<<setw(5)<<"x"<<fu[i].amount<<setw(10)<<"Rs"<<setw(4)<<fu[i].ntotal<<".00"<<endl;
		mf1.close();			
}
//print total salary 
total_salary:
{	
ifstream file("customerdata.txt");
	string content;
	string line;
	while(getline(file,line)){
		content+=line +"\n";	
	}
	file.close();
	ofstream mf;
	mf.open("customerdata.txt");
	mf << content;
	mf<<setw(85)<<"___________Rs"<<setw(4)<<total<<".00\n"<<endl;
	mf.close();	}
//print the final bill
system("color 09");
{system("cls");
   	cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<< endl;
	cout <<"\t\t\t\tS U P R I M E   F U R N I T U R E   ( P V T )   L T D"<< endl<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl<<endl;
	cout<<"\t\t\t  S U P R I M E   F U R N I T U R E   C O L O M B O   O U T L E T "<<endl<<endl;
	cout<<"\t\t\t\t\tCustomer Name:"<<"      "<<name1<<endl;
	cout<<"\t\t\t\t\tCashier 	  :-Shashith Missaka"<<endl<<endl; 
	time_t ttime = time(0);
    char* dt = ctime(&ttime);
	cout<<"\t\t\t\t\t"<< dt;
	cout<<"\t\t\t\t\t389A, Nawala Road,"<<endl;
	cout<<"\t\t\t\t\tRajagiriya,"<<endl;
	cout<<"\t\t\t\t\tSri Lanka, "<<endl;
	cout<<"\t\t\t\t\tTel: +94 (0)114 367676"<<endl;
	cout<<"\t\t\t\t\temail:online@yourhomefurniture.lk"<<endl<<endl;
	ifstream file3("bill.txt");
	string content3;
	string line3;
	while(getline(file3,line3))
	cout<<"\t\t"<<line3<<endl;
	file3.close();
	cout<<""<<endl<<endl;
	cout<<"______________________________________________________________________________________________________________________\n"<<endl;
	cout<<"\t\t\t\tSUB TOTAL "<<setw(17)<<"Rs"<<total<<".00"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------\n";
	cout <<"\t\tT H A N K   Y O U   F O R   P U R C H A S I N G   @   S U P R I M E   F U R N I T U R E S"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------\n";
	std::ofstream ofs;
	ofs.open("bill.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	system("pause");
	system("cls");
	}
	system("cls");
	system("color 0A");
	welcome();
	exit(0);
} 

//contact details
else if(u=="3")
  	{  		system("cls");
			system("color 0E" );	
			cout<<"------------------------------------------------------------------------------------------------------------------------\n\n";
    		cout<<"\t\t\t C O N T A C T   D E T A I L S   O F   S U P R I M E   F U R N I T U R E\n";
 			cout<<"------------------------------------------------------------------------------------------------------------------------\n"; 
			cout<<""<<endl;	
            cout<<"					 	SUPRIME FURNITURE SHOP"<<endl;
            cout<<"________________________________________________________________________________________________________________________"<<endl<<endl<<endl;
			cout<<"\t\t\t 389A, Nawala Road,"<<endl<<endl;
			cout<<"\t\t\t Rajagiriya,"<<endl<<endl;
			cout<<"\t\t\t Sri Lanka,  "<<endl<<endl;
			cout<<"\t\t\t Tel: +94 (0) 114 367676"<<endl<<endl;
			cout<<"\t\t\t Email: online@yourhomefurniture.lk"<< endl<<endl;
			cout<<"\t\t\t Store Hours: "<<endl;             
			cout<<"\t\t\t\t\tMon-Fri,   9:00am - 6:00pm\n\t\t\t\t\tSaturday,  9:00am - 6:00pm\n\t\t\t\t\tSunday,    Closed"<<endl<<endl;
			cout<<"________________________________________________________________________________________________________________________"<<endl<<endl;
			system("pause");
			system("cls");
				customer();
	}
	
//company details	
else if(u=="4")
   	{		system("cls");
  			("color 0D" );
			cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
    		cout<<"\t\t\t\tA B O U T   U S\n\n";
 			cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
			cout<<"		Extreme Furniture Group, is the worlds leader of five-star hotel furniture\n";
			cout<<"		and fully furnished luxury Home custom furniture.The company is located in\n"; 
			cout<<"		the modern 320,000-square-meter Senyuan Industrial Park in the Colombo With\n";
			cout<<"		a large-scale modern manufacturing base.It has more than 1600  skilled workers\n";
			cout<<"		,more than 300 national patented technologies,brand-new imported machinery,\n";
			cout<<"		a 15,000-square-meter large-scalefurniture showroom and a Craftsmanship R&D Center.\n";  	
			cout<<"";cout<<""<<endl;
			cout<<"________________________________________________________________________________________________________________________"<<endl<<endl<<endl;
			system("pause");
			system("cls");
	}

//welcome screen	
else if(u=="5"){
	system("cls");
	welcome();
	}
//exit 
   else if(u=="6")
  	{
	system("cls");
	system("color 0D");
  	cout<<"----------------------------------------------------------------------------------------------------------------------\n";
	cout <<"\t\t\t\tT H A N K   Y O U   F O R   C H O O S I N G   U S\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------\n";
	exit(0);
	}else{	 
  system("CLS");
  customer();
		}
	}
}

	
//main function declaration	
int main(){
	welcomeS();
	welcome();
	return 0;
}
	 

  
