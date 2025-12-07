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
















#include <iostream>
using namespace std;

int main()
{
char addons;
int totaladdonsprice, quantity, price;
int totalstuffedtoy, toyprice;
char stuffedtoy;
char powders, Downypowder_variant, Surfpowder_variant, Tidepowder_variant, Championpowder_variant, Bleach_variant;
int Quantity, totalPrice, downypowderprice, Surfpowderprice, Tidepowderprice, Championpowderprice, Bleachprice;
char fabcon, downyfabcon_variant, surffabcon_variant, championfabcon_variant;
int downyfabconprice, surffabconprice, championfabconprice;



    cout << "Stuffed Toy (per piece)" << endl;
    cout << "1. Small - 50       2. Medium - 100" << endl;
    cout << "3. Large - 150      4. Extra Large - 250" << endl;
    cout << "Choose: ";
    cin >> stuffedtoy;

    if (stuffedtoy == '1') {
    toyprice = 50;
    }
    else if (stuffedtoy == '2') {
    toyprice = 100;
    }
    else if (stuffedtoy == '3') {
    toyprice = 150;
    }
    else if (stuffedtoy == '4') {
    toyprice = 250;
    }
    else {
    cout << "Invalid input" << endl;
    return 0;
    }



    cout << "Quantity: ";
    cin >> quantity;

    totalstuffedtoy = toyprice * quantity;

    cout << "Your total amount is: " << totalstuffedtoy << endl << endl << endl;


    cout << " ADD ONS" << endl;
    cout << "A. Banlaw - 50    B. Extra Wash - 80" << endl;
    cout << "C. Detergent (per sachet)   D. Fabcon (per sachet)" << endl;
    cout << "                 E. Zonrox/Color Safe" << endl;
    cout << "Select add-ons: ";
    cin >> addons;

    if (addons == 'A' || addons == 'a'){
    price = 50;
    }

    else if (addons == 'B' || addons == 'b') {
    price = 80;
    }
    else if (addons == 'C' || addons == 'c') {
    cout << "A. Downy      " << endl;
    cout << "B. Surf       " << endl;
    cout << "C. Tide       " << endl;
    cout << "D. champion   " << endl;
    cout << "choose powder: ";
    cin >> powders;

    if (powders == 'A' || powders == 'a')
    {
    cout << "========================================" << endl;
    cout << "        Downey Variants (powder)             " << endl;
    cout << "========================================" << endl;
    cout << "1. Lavender       = "; cout << "15  - pesos" << endl;
    cout << "2. Fresh Protect = "; cout << "15  - pesos" << endl;
    cout << "3. Downy Rose = "; cout << "15 - pesos" << endl;
    cout << "4. Matic   "; cout << "15 - pesos" << endl;
    cout << "========================================" << endl;
    cout << "Select powder variant:" << endl;
    cin >> Downypowder_variant;
    if (Downypowder_variant == '1')
        downypowderprice = 15;

    else if (Downypowder_variant == '2')
        downypowderprice = 15;

    else if (Downypowder_variant == '3')
        downypowderprice = 15;

    else if (Downypowder_variant == '4')
        downypowderprice = 15;

    else {
    cout << " Invalid Input!";
    return 0;
        }
    totalPrice += Downypowder_variant;

    double pay;
    cout << " total price: " << downypowderprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= downypowderprice){
    double change = pay - downypowderprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = downypowderprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }
    }

    if (powders == 'B' || powders == 'b')
    {
    cout << "========================================" << endl;
    cout << "        Surf Variants (powder)             " << endl;
    cout << "========================================" << endl;
    cout << "1. Antibacterial      = "; cout << "15  - pesos" << endl;
    cout << "2. Sun Fresh      = "; cout << "15  - pesos" << endl;
    cout << "3. Cherry Blossom = "; cout << "15 - pesos" << endl;
    cout << "4. Lavender Fresh  = "; cout << "15  - pesos" << endl;
    cout << "========================================" << endl;
    cout << "Select variant: " << endl;
    cin >> Surfpowder_variant;

    if (Surfpowder_variant == '1')
        Surfpowderprice = 15;

    else if (Surfpowder_variant == '2')
        Surfpowderprice = 15;

    else if (Surfpowder_variant == '3')
        Surfpowderprice = 15;

    else if (Surfpowder_variant == '4')
        Surfpowderprice = 15;

    else {
    cout << " Invalid Input!";
    return 0;
        }
    totalPrice += Surfpowder_variant;

    double pay;
    cout << " total price: " << Surfpowderprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= Surfpowderprice){
    double change = pay - Surfpowderprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Surfpowderprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }


    if (powders == 'C' || powders == 'c')
    {
        cout << "========================================" << endl;
        cout << "         Tide Variants (powder)                 " << endl;
        cout << "========================================" << endl;
        cout << "1. Original Scent    = "; cout << "15  - pesos" << endl;
        cout << "2. Lemon           = "; cout << "15 - pesos" << endl;
        cout << "3. Ultra Plus = "; cout << "15  - pesos" << endl;
        cout << "4. Antibac    = "; cout << "15 - pesos" << endl;
        cout << "========================================" << endl;
           cout << "Select variant:" << endl;
           cin >> Tidepowder_variant;
    if (Tidepowder_variant == '1')
        Tidepowderprice = 15;

        else if (Tidepowder_variant == '2')
        Tidepowderprice = 15;

        else if (Tidepowder_variant == '3')
        Tidepowderprice = 15;

        else if (Tidepowder_variant == '4')
        Tidepowderprice = 15;

        else {
        cout << " Invalid Input!";
        return 0;
        }
    totalPrice += Tidepowder_variant;

    double pay;
    cout << " total price: " << Tidepowderprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= Tidepowderprice){
    double change = pay - Tidepowderprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Tidepowderprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }


    if (powders == 'D' || powders == 'd')
    {
        cout << "========================================" << endl;
        cout << "      Champion Variants (powder)                " << endl;
        cout << "========================================" << endl;
        cout << "1. Blue     = "; cout << "15  - pesos" << endl;
        cout << "2. Citrus Fresh         = "; cout << "15 - pesos" << endl;
        cout << "3. Anti-bacterial      = "; cout << "15  - pesos" << endl;
        cout << "4. Premium Color Care            = "; cout << "15 - pesos" << endl;
        cout << "========================================" << endl;
           cout << "Select variant:" << endl;
           cin >> Championpowder_variant;


        if (Championpowder_variant == '1')
        Championpowderprice = 15;

        else if (Championpowder_variant == '2')
        Championpowderprice = 15;

        else if (Championpowder_variant == '3')
        Championpowderprice = 15;

        else if (Championpowder_variant == '4')
        Championpowderprice = 15;

        else {
        cout << " Invalid Input!";
        return 0;
        }
    totalPrice += Championpowder_variant;

    double pay;
    cout << " total price: " << Championpowderprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= Championpowderprice){
    double change = pay - Championpowderprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Championpowderprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }



    if (addons == 'D' || addons == 'd'){
    cout << "Fabcon" << endl;
    cout << "A. Downy" << endl;
    cout << "B. Surf" << endl;
    cout << "C. Tide" << endl;
    cout << "D. Champion" << endl;
    cout << "Select Fabcon: ";
    cin >> fabcon;

    }else {
    cout << "Invalid input" << endl;
    }




    if (fabcon == 'A' || fabcon == 'a'){
    cout << "Downy Variants (fabcon)" << endl;
    cout << "1. Sunrise Fresh - 10" << endl;
    cout << "2. Garden Bloom - 10" << endl;
    cout << "3. Antibac - 10" << endl;
    cout << "4. Passion - 10" << endl;
    cout << "Select Variants: ";
    cin >> downyfabcon_variant;

    if (downyfabcon_variant == '1' || '2' || '3' || '4')
    downyfabconprice = 10;

    else {
    cout << "Invalid input" << endl;
    return 0;
    }
    }




    totalPrice += downyfabcon_variant;

    double pay;
    cout << " total price: " << downyfabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= downyfabconprice){
    double change = pay - downyfabconprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = downyfabconprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }



    if (fabcon == 'B' || fabcon == 'b'){
    cout << "Surf Variants (fabcon)" << endl;
    cout << "1. Sun Fresh - 10" << endl;
    cout << "2. Cherry Blosom - 10" << endl;
    cout << "3. Antibac - 10" << endl;
    cout << "4. Daisy Fresh - 10" << endl;
    cout << "Select Variant: ";
    cin >> surffabcon_variant;

    if (surffabcon_variant == '1' || '2' || '3' || '4')
    surffabconprice = 10;

    else {
    cout << "Invalid Input" << endl;
    return 0;
    }


    totalPrice += surffabcon_variant;

    double pay;
    cout << " total price: " << surffabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= surffabconprice){
    double change = pay - surffabconprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = surffabconprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }





    /*else if (fabcon == 'C' || fabcon == 'c'){
    cout << "Downy Variants (fabcon)" << endl;
    cout << "1. Sunrise Fresh - 10" << endl;
    cout << "2. Garden Bloom - 10" << endl;
    cout << "3. Antibac" << endl;
    cout << "4. Passion" << endl;
    cout << "Select Variants: ";
    cin >> downyfabcon;
    }*/
    if (fabcon == 'D' || fabcon == 'd'){
    cout << "Champion Variants (fabcon)" << endl;
    cout << "1. Simply Fresh - 10" << endl;
    cout << "2. Sweet Floral - 10" << endl;
    cout << "3. Aqua Fresh - 10" << endl;
    cout << "4. Antibac - 10" << endl;
    cout << "Select Variants: ";
    cin >> championfabcon_variant;

    if (championfabcon_variant == '1' || '2' || '3' || '4')
    championfabconprice = 10;

    else {
    cout << "Invalid input" << endl;
    return 0;
    }


    totalPrice += championfabcon_variant;

    double pay;
    cout << " total price: " << championfabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= championfabconprice){
    double change = pay - championfabconprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = championfabconprice - pay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }



    if (addons == 'E' || addons == 'e') {
    cout << "========================================" << endl;
    cout << "                  Bleach                 " << endl;
    cout << "========================================" << endl;
    cout << "1. Zonrox              = "; cout << "10  - pesos" << endl;
    cout << "2. Zonrox ColorSafe    = "; cout << "10  - pesos" << endl;
    cout << "3. Zonrox FloralBlast  = "; cout << "10  - pesos" << endl;
    cout << "========================================" << endl;
    cout << "Select variant:" << endl;
    cin >> Bleach_variant;




    if (Bleach_variant == '1')
        Bleachprice = 10;

    else if (Bleach_variant == '2')
        Bleachprice = 10;

    else if (Bleach_variant == '3')
        Bleachprice = 10;

    else {
    cout << " Invalid Input";
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




    /*cout << "Quantity: ";
    cin >> quantity;

    totaladdonsprice = price * quantity;
    cout << "Your total amount is: " << totaladdonsprice << endl;*/






return 0;

}






