#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();

class management
{
public :

    management()
    {
        mainMenu();
    }
};

class Details
{
public :
    static string name , gender;
    int phonenum;
    int age;
    string add;
    static int cID;
    char arr[1000];

    void information()
    {
        cout << "\nEnter the customer ID : ";
        cin >> cID;

        cout << "Enter the name :";
        cin >> name;

        cout << "\nEnter the age :";
        cin >> age;

        cout << "\nAddress :";
        cin >> add;

        cout << "\nGender :";
        cin >> gender;

        cout << "Your details are saved with us\n" << endl;
    }
};

int Details::cID;
string Details::name;
string Details::gender;

class registration
{
public :
    static int choice;
    int choice1;
    int goback;
    static float charges;

    void flights()
    {
        string flightsN[] = {"1.Dubai","2.Canada","3.UK","4.USA","5.Australia","6.Russia"};

        for(int i = 0; i<6 ; i++)
        {
            cout << (i + 1) << ".flight to " << flightsN[i] << endl;
        }

        cout << "\nWelcome to the Airlines" << endl;
        cout << "Press the number of the country of which you want to book the flight : ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            {
                cout << "-----------------------------Welcome to Dubai Emirates-------------------------------\n" << endl;
                cout << "Your comfort is our priority,Enjoy the journey!" << endl;
                cout << "Following are the flights \n" <<  endl;

                cout << "1.Dub-498" << endl;
                cout << "\t08-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "2.Dub-678" << endl;
                cout << "\t09-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "3.Dub-890" << endl;
                cout << "\t10-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "\nSelect the flight you want to book : ";
                cin >> choice1;

                if(choice1==1)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Dub-498\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==2)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Dub-678\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==3)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Dub-890\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else
                {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu\n" << endl;
                cin >> goback;

                if(goback==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        case 2 :
            {
                cout << "-----------------------------Welcome to Air Canada-------------------------------\n" << endl;
                cout << "Your comfort is our priority,Enjoy the journey!" << endl;
                cout << "Following are the flights \n" <<  endl;

                cout << "1.canada-498" << endl;
                cout << "\t08-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "2.canada-678" << endl;
                cout << "\t09-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "3.canada-890" << endl;
                cout << "\t10-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "\nSelect the flight you want to book : ";
                cin >> choice1;

                if(choice1==1)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight canada-498\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==2)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight canada-678\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==3)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight canada-890\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else
                {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu\n" << endl;
                cin >> goback;

                if(goback==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
         case 3 :
            {
                cout << "-----------------------------Welcome to Air UK-------------------------------\n" << endl;
                cout << "Your comfort is our priority,Enjoy the journey!" << endl;
                cout << "Following are the flights \n" <<  endl;

                cout << "1.UK-498" << endl;
                cout << "\t08-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "2.UK-678" << endl;
                cout << "\t09-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "3.UK-890" << endl;
                cout << "\t10-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "\nSelect the flight you want to book : ";
                cin >> choice1;

                if(choice1==1)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight UK-498\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==2)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight UK-678\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==3)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight UK-890\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else
                {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu\n" << endl;
                cin >> goback;

                if(goback==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
         case 4 :
            {
                cout << "-----------------------------Welcome to Air USA-------------------------------\n" << endl;
                cout << "Your comfort is our priority,Enjoy the journey!" << endl;
                cout << "Following are the flights \n" <<  endl;

                cout << "1.USA-498" << endl;
                cout << "\t08-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "2.USA-678" << endl;
                cout << "\t09-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "3.USA-890" << endl;
                cout << "\t10-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "\nSelect the flight you want to book : ";
                cin >> choice1;

                if(choice1==1)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight USA-498\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==2)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight USA-678\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==3)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight USA-890\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else
                {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu\n" << endl;
                cin >> goback;

                if(goback==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
         case 5 :
            {
                cout << "-----------------------------Welcome to Australia Canada-------------------------------\n" << endl;
                cout << "Your comfort is our priority,Enjoy the journey!" << endl;
                cout << "Following are the flights \n" <<  endl;

                cout << "1.Australia-498" << endl;
                cout << "\t08-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "2.Australia-678" << endl;
                cout << "\t09-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "3.Australia-890" << endl;
                cout << "\t10-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "\nSelect the flight you want to book : ";
                cin >> choice1;

                if(choice1==1)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Australia-498\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==2)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Australia-678\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==3)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Australia-890\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else
                {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu\n" << endl;
                cin >> goback;

                if(goback==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
         case 6 :
            {
                cout << "-----------------------------Welcome to Air Russia-------------------------------\n" << endl;
                cout << "Your comfort is our priority,Enjoy the journey!" << endl;
                cout << "Following are the flights \n" <<  endl;

                cout << "1.Russia-498" << endl;
                cout << "\t08-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "2.Russia-678" << endl;
                cout << "\t09-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "3.Russia-890" << endl;
                cout << "\t10-08-2022 9:00PM 10hrs Rs.10000" <<  endl;

                cout << "\nSelect the flight you want to book : ";
                cin >> choice1;

                if(choice1==1)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Russia-498\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==2)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Russia-678\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else if(choice1==3)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight Russia-890\n" << endl;
                    cout << "You can go back at main menu and take ticket " <<  endl;
                }
                else
                {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu\n" << endl;
                cin >> goback;

                if(goback==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        default :
            {
                cout << "Invalid choice,shifting you to at main menu !" << endl;
                mainMenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration,Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "-----------------------------------------AirLines----------------------------------------------"<<endl;
            outf << "------------------------Ticket----------------------" <<  endl;

            outf << "Customer ID : " << Details::cID<<endl;
            outf << "Name : " << Details::name<<endl;
            outf << "Gender : " << Details::gender<<endl;
            outf << "Description : " << endl << endl;

            if(registration::choice==1)
            {
                destination = "Dubai";
            }
            else if(registration::choice==2)
            {
                destination = "Canada";
            }
            else if(registration::choice==3)
            {
                destination = "UK";
            }
            else if(registration::choice==4)
            {
                destination = "USA";
            }
            else if(registration::choice==5)
            {
                destination = "Australia";
            }
            else if(registration::choice==6)
            {
                destination = "Russia";
            }

            outf << "Destination : " <<destination<<endl;
            outf << "Flight cost : " <<registration::charges<<endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout << "oops! File Error....." << endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr , 1000);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;//schoice;
    int goback;

    cout << "\n\t                                       Airlines Registration System \n" << endl;
    cout << "\t________________________________________________Main Menu____________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t| press 1 to add new customer Details\t|" << endl;
    cout << "\t| press 2 for flight registration    \t|" << endl;
    cout << "\t| press 3 for tickets and charges    \t|" << endl;
    cout << "\t| press 4 to exit                    \t|" << endl;

    cout << endl << endl << "Enter the choice : " ;
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
    case 1:
        {
            cout << "\n\t                                       Customers \n" <<  endl;
            d.information();
            cout << "press any to go at Main Menu";
            cin >> goback;

            if(goback==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
    case 2:
        {
            cout << "\n\t                                       Book a flight using this system \n" <<  endl;
            r.flights();
            break;
        }
    case 3:
        {
        cout << "\n\t                                       GET YOUR TICKET \n" << endl;
        t.Bill();
        cout << "Your ticket is printed , you can collect it \n" << endl;
        cout << "Press 1 to display your ticket ";
        cin >> goback;

        if(goback==1)
        {
            t.dispBill();
            cout << "Press any key to go back at main menu : ";
            cin >> goback;

            if(goback==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 4:
        {
            cout << "\n\t                                       Thank-you \n" << endl;
            break;
        }
    default :
        {
            cout << "Invalid choice , please enter the choice again!\n" << endl;
            mainMenu();
            break;
        }
    }
}

int main()
{
    management mobj;
    return 0;
}
