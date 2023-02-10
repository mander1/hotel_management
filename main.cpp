#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //quantities
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    //food sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    //total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n Enter number of stock items available:";
    cout<<"\n --------------------------------------"; 
    cout<<"\n Rooms: ";
    cin>>Qrooms;
    cout<<" Pasta: ";
    cin>>Qpasta;
    cout<<" Burgers: ";
    cin>>Qburger;
    cout<<" Noodles: ";
    cin>>Qnoodles;
    cout<<" Shakes: ";
    cin>>Qshake;
    cout<<" Chicken: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t **Please select from the menu**";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken";
    cout<<"\n7) Info. regarding sales & collection";
    cout<<"\n8) Exit";

    cout<<"\n\t\t    Please choose an option from the above: ";    
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you require: ";
            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant;
                cout<<"\n\n\t\t"<<quant<<" rooms have been allotted to you";
                cout<<"\n\n\t\t ";
            }
            else
                cout<<"\n\tOnly"<<Qrooms-Srooms<<" Rooms remaining ";
                break;

            case 2:
            cout<<"\n\n Pasta quantity? ";
            cin>>quant;
            if(Qpasta-Spasta >=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant;
                cout<<"\n\n\t\t"<<quant<<" pasta is the order";
                cout<<"\n\n\t\t ";
            }
            else
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining ";
                break;

            case 3:
            cout<<"\n\n Burger quantity? ";
            cin>>quant;
            if(Qburger-Sburger >=quant)
            {
                Sburger=Sburger+quant;
               Total_burger=Total_burger+quant*250;
                cout<<"\n\n\t\t"<<quant<<" burger is the order";
                cout<<"\n\n\t\t ";
            }
            else
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Burgers remaining ";
                break;

            case 4:
            cout<<"\n\n Noodles quantity? ";
            cin>>quant;
            if(Qnoodles-Snoodles >=quant)
            {
                Snoodles=Snoodles+quant;
               Total_noodles=Total_noodles+quant*250;
                cout<<"\n\n\t\t"<<quant<<" noodles is the order";
                cout<<"\n\n\t\t ";
            }
            else
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Noodles remaining ";
                break;

            case 5:
            cout<<"\n\n Shake quantity? ";
            cin>>quant;
            if(Qshake-Sshake >=quant)
            {
                Sshake=Sshake+quant;
               Total_shake=Total_shake+quant*250;
                cout<<"\n\n\t\t"<<quant<<" shakes is the order";
                cout<<"\n\n\t\t ";
            }
            else
                cout<<"\n\tOnly"<<Qshake-Sshake<<"Shakes remaining ";
                break;

            case 6:
            cout<<"\n\n Chicken quantity? ";
            cin>>quant;
            if(Qchicken-Schicken >=quant)
            {
                Schicken=Schicken+quant;
               Total_chicken=Total_chicken+quant*250;
                cout<<"\n\n\t\t"<<quant<<" chicken is the order";
                cout<<"\n\n\t\t ";
            }
            else
                cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chickens remaining ";
                break;
            
            case 7:
            cout<<"\n\t\t ---*/Summary of today's sales/*---";
            cout<<"\n\n Number of rooms we had :"<<Qrooms;
            cout<<"\n\n Number of rooms we rented :"<<Srooms;
            cout<<"\n\n Remaining rooms :"<<Qrooms-Srooms;
            cout<<"\n\n Total rooms sold :"<<Total_rooms;
            cout<<"\n\n -------------------------";

            cout<<"\n\n Number of pastas we had :"<<Qpasta;
            cout<<"\n\n Number of pastas we sold :"<<Spasta;
            cout<<"\n\n Remaining pastas :"<<Qpasta-Spasta;
            cout<<"\n\n Total pasta sold :"<<Total_pasta;
            cout<<"\n\n -------------------------";

            cout<<"\n\n Number of burgers we had :"<<Qburger;
            cout<<"\n\n Number of burgers we sold :"<<Sburger;
            cout<<"\n\n Remaining burgers :"<<Qburger-Sburger;
            cout<<"\n\n Total burgers sold :"<<Total_burger;
            cout<<"\n\n -------------------------";

            cout<<"\n\n Number of noodles we had :"<<Qnoodles;
            cout<<"\n\n Number of noodles we sold :"<<Snoodles;
            cout<<"\n\n Remaining noodles :"<<Qnoodles-Snoodles;
            cout<<"\n\n Total noodles sold :"<<Total_noodles;
            cout<<"\n\n -------------------------";

            cout<<"\n\n Number of shakes we had :"<<Qshake;
            cout<<"\n\n Number of shakes we sold :"<<Sshake;
            cout<<"\n\n Remaining shakes :"<<Qshake-Sshake;
            cout<<"\n\n Total shakes sold :"<<Total_shake;
            cout<<"\n\n -------------------------";

            cout<<"\n\n Number of chickens we had :"<<Qchicken;
            cout<<"\n\n Number of chickens we sold :"<<Schicken;
            cout<<"\n\n Remaining chickens :"<<Qchicken-Schicken;
            cout<<"\n\n Total chickens sold :"<<Total_chicken;
            cout<<"\n\n -------------------------";

            case 8:
                exit(0);

                default:
                    cout<<"\n **Please select from the menu options**";
    }
    goto m;
}