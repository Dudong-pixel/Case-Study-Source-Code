#include<iostream>
using namespace std;

int main()
{
    char powders, Downy_variant, Surf_variant, Tide_variant, Champion_variant, Bleach_variant;
      int Quantity, price, totalPrice, downyprice, Surfprice, Tideprice, Championprice, Bleachprice;




    cout << "========================================" << endl;
    cout << "    Select the powder you want to use    " << endl;
    cout << "========================================" << endl;

    cout << "A. Downy      " << endl;
    cout << "B. Surf       " << endl;
    cout << "C. Tide       " << endl;
    cout << "D. champion   " << endl;
    cout << "E. Bleach     " << endl;
    cout << "========================================" << endl;
    cout << "choose powder:";
       cin >> powders;


    if (powders == 'A' || powders == 'a')
    {
        cout << "========================================" << endl;
        cout << "             Downey Variants             " << endl;
        cout << "========================================" << endl;
        cout << "1. Sunrise Fresh       = "; cout << "5  - pesos" << endl;
        cout << "2. Downey Perfume      = "; cout << "7  - pesos" << endl;
        cout << "3. Expert Kontra Kulob = "; cout << "10 - pesos" << endl;
        cout << "4. Downey Antibac      = "; cout << "10 - pesos" << endl;
        cout << "========================================" << endl;
           cout << "Select powder variant:" << endl;
           cin >> Downy_variant;



    if (Downy_variant == '1')
        downyprice = 5;

        else if (Downy_variant == '2')
        downyprice = 7;

        else if (Downy_variant == '3')
        downyprice = 10;

        else if (Downy_variant == '4')
        downyprice = 10;

        else {
        cout << " Invalid Input!";
        return 0;
        }
    totalPrice += Downy_variant;

    double pay;
    cout << " total price: " << downyprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= downyprice){
    double change = pay - downyprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = downyprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }

    if (powders == 'B' || powders == 'b')
    {
        cout << "========================================" << endl;
        cout << "               Surf Variants             " << endl;
        cout << "========================================" << endl;
        cout << "1. Kalamansi      = "; cout << "5  - pesos" << endl;
        cout << "2. Sun Fresh      = "; cout << "8  - pesos" << endl;
        cout << "3. Cherry Blossom = "; cout << "10 - pesos" << endl;
        cout << "4. Blossom Fresh  = "; cout << "8  - pesos" << endl;
        cout << "========================================" << endl;
           cout << "Select variant: " << endl;
           cin >> Surf_variant;

    if (Surf_variant == '1')
        Surfprice = 5;

        else if (Surf_variant == '2')
        Surfprice = 8;

        else if (Surf_variant == '3')
        Surfprice = 10;

        else if (Surf_variant == '4')
        Surfprice = 8;

        else {
        cout << " Invalid Input!";
        return 0;
        }
    totalPrice += Surf_variant;

    double pay;
    cout << " total price: " << Surfprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= Surfprice){
    double change = pay - Surfprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Surfprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }


    if (powders == 'C' || powders == 'c')
    {
        cout << "========================================" << endl;
        cout << "                    Tide                 " << endl;
        cout << "========================================" << endl;
        cout << "1. White & Bright    = "; cout << "5  - pesos" << endl;
        cout << "2. Antibac           = "; cout << "10 - pesos" << endl;
        cout << "3. lemon & Calamansi = "; cout << "7  - pesos" << endl;
        cout << "4. Garden Blossom    = "; cout << "10 - pesos" << endl;
        cout << "========================================" << endl;
           cout << "Select variant:" << endl;
           cin >> Tide_variant;
    if (Tide_variant == '1')
        Tideprice = 5;

        else if (Tide_variant == '2')
        Tideprice = 10;

        else if (Tide_variant == '3')
        Tideprice = 7;

        else if (Tide_variant == '4')
        Tideprice = 10;

        else {
        cout << " Invalid Input!";
        return 0;
        }
    totalPrice += Tide_variant;

    double pay;
    cout << " total price: " << Tideprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= Tideprice){
    double change = pay - Tideprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Tideprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }


    if (powders == 'D' || powders == 'd')
    {
        cout << "========================================" << endl;
        cout << "                 Champion                " << endl;
        cout << "========================================" << endl;
        cout << "1. Calamansi Power     = "; cout << "5  - pesos" << endl;
        cout << "2. Sunny Fresh         = "; cout << "8 - pesos" << endl;
        cout << "3. Anti-bacterial      = "; cout << "7  - pesos" << endl;
        cout << "4. Original            = "; cout << "10 - pesos" << endl;
        cout << "========================================" << endl;
           cout << "Select variant:" << endl;
           cin >> Champion_variant;


        if (Champion_variant == '1')
        Championprice = 5;

        else if (Champion_variant == '2')
        Championprice = 8;

        else if (Champion_variant == '3')
        Championprice = 7;

        else if (Champion_variant == '4')
        Championprice = 10;

        else {
        cout << " Invalid Input!";
        return 0;
        }
    totalPrice += Champion_variant;

    double pay;
    cout << " total price: " << Championprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= Championprice){
    double change = pay - Championprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Championprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }

    if (powders == 'E' || powders == 'e')
    {
        cout << "========================================" << endl;
        cout << "                  Bleach                 " << endl;
        cout << "========================================" << endl;
        cout << "1. Zonrox              = "; cout << "5  - pesos" << endl;
        cout << "2. Zonrox ColorSafe    = "; cout << "8  - pesos" << endl;
        cout << "3. Zonrox FloralBlast  = "; cout << "9  - pesos" << endl;
        cout << "========================================" << endl;
           cout << "Select variant:" << endl;
           cin >> Bleach_variant;




            if (Bleach_variant == '1')
        Bleachprice = 5;

        else if (Bleach_variant == '2')
        Bleachprice = 8;

        else if (Bleach_variant == '3')
        Bleachprice = 9;

    else {
        cout << " Invalid Input!";
        return 0;
        }
    totalPrice += Bleachprice;

    double pay;
    cout << " total price: " << Bleachprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= Bleachprice){
    double change = pay - Bleachprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Bleachprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }










    return 0;
}
