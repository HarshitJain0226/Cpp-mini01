#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qpaneer = 0;
    // food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Spaneer = 0;
    // Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_paneer = 0;

    cout << "\n\t Quantity of item we have";
    cout << "\n Rooms availabe: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of burger : ";
    cin >> Qburger;
    cout << "\n Quantity of noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake : ";
    cin >> Qshake;
    cout << "\n Quantity of paneer : ";
    cin >> Qpaneer;

m:
    cout << "\n\t\t\t Please Select from the menu option ";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Paneer";
    cout << "\n7) Information regarding sales and Collection ";
    cout << "\n8) Exit";

    cout << "\n\n Please enter your choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want:  ";

        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you!";
        }
        else
        {
            cout << "\n\tOnly" << Qrooms - Srooms << " Rooms remaining in hotel";
        }
        break;
    case 2:
        cout << "\n\n Enter Pasta Quantity :  ";

        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << " pasta is the order! ";
        }
        else
        {
            cout << "\n\tOnly" << Qpasta - Spasta << " Pasta remaining in hotel";
        }
        break;

    case 3:
        cout << "\n\n Enter Burger Quantity :  ";

        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 180;
            cout << "\n\n\t\t" << quant << " burger is the order! ";
        }
        else
        {
            cout << "\n\tOnly" << Qburger - Sburger << " burgers remaining in hotel";
        }
        break;
    case 4:
        cout << "\n\n Enter noodles Quantity :  ";

        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * 120;
            cout << "\n\n\t\t" << quant << " noodles is the order! ";
        }
        else
        {
            cout << "\n\tOnly" << Qnoodles - Snoodles << " noodles remaining in hotel";
        }
        break;
    case 5:
        cout << "\n\n Enter shake Quantity :  ";

        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * 200;
            cout << "\n\n\t\t" << quant << " shake is the order! ";
        }
        else
        {
            cout << "\n\tOnly" << Qshake - Sshake << " shake remaining in hotel";
        }
        break;
    case 6:
        cin >> quant;
        if (Qpaneer - Spaneer >= quant)
        {
            Spaneer = Spaneer + quant;
            Total_paneer = Total_paneer + quant * 220;
            cout << "\n\n\t\t" << quant << " paneer is the order! ";
        }
        else
        {
            cout << "\n\tOnly" << Qpaneer - Spaneer << " paneer remaining in hotel";
        }
        break;
    case 7:
        cout << "\n\t\t Details of sails and collection ";
        cout << "\n\n Number of rooms we had : " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent : " << Srooms;
        cout << "\n\n Remaining  rooms : " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day : " << Total_rooms;

        cout << "\n\n Number of Pasta we had : " << Qpasta;
        cout << "\n\n Number of Pasta we sold : " << Spasta;
        cout << "\n\n Remaining  Pasta : " << Qpasta - Spasta;
        cout << "\n\n Total Pasta collection for the day : " << Total_pasta;

        cout << "\n\n Number of Burger we had : " << Qburger;
        cout << "\n\n Number of Burgers we sold : " << Sburger;
        cout << "\n\n Remaining  Burgers : " << Qburger - Sburger;
        cout << "\n\n Total Burger collection for the day : " << Total_burger;

        cout << "\n\n Number of Noodles we had : " << Qnoodles;
        cout << "\n\n Number of Noodles we sold : " << Snoodles;
        cout << "\n\n Remaining  Noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total Noodles collection for the day : " << Total_noodles;

        cout << "\n\n Number of Shake we had : " << Qshake;
        cout << "\n\n Number of Shakes we sold : " << Sshake;
        cout << "\n\n Remaining  Shakes : " << Qshake - Sshake;
        cout << "\n\n Total Shakes collection for the day : " << Total_shake;

        cout << "\n\n Number of Paneer we had : " << Qpaneer;
        cout << "\n\n Number of Paneer we sold : " << Spaneer;
        cout << "\n\n Remaining  Paneer : " << Qpaneer - Spaneer;
        cout << "\n\n Total Paneer collection for the day : " << Total_paneer;

        cout << "\n\n\n Total Collection for the day: " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_paneer;
    case 8:
        exit(0);

    default:
        cout << "\n Please select the numbers mentioned above!";
    }
    goto m;
}