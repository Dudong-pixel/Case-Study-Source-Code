#include <iostream>
using namespace std;

double format2(double value) {
    return (int)(value * 100 + 0.5) / 100.0;
}

int main()
{


    int Choice, stuffSize, pc, stuffPrice, choice, totalstuffsize;
    char mainOpt, laundryType, powderOpt, fabconOpt, option, addons;
    double laundryPrice = 0, powderPrice = 0, fabconPrice = 0, totalPrice = 0;
    double kg, pay, change, multiplier;
    int hours = 0;
    char powders, Downypowder_variant, Surfpowder_variant, Tidepowder_variant, Championpowder_variant;
    char fabcon, downyfabcon_variant, surffabcon_variant, championfabcon_variant, Bleach_variant;
    int downyfabconprice, surffabconprice, championfabconprice;
    double downypowderprice, Surfpowderprice, Tidepowderprice, Championpowderprice, Bleachprice;


    cout << "=========================================" << endl;
    cout << "      JAKOB'S WELL LAUNDRY SERVICES"       << endl;
    cout << "=========================================" << endl;
    cout << "       A. Add Laundry Request"             << endl;
    cout << "       B. Exit"                            << endl;
    cout << "=========================================" << endl;
    cout << "Choose Option: ";
    cin >> option;


    if (option == 'A' || option == 'a')
    {
    cout << "================ LAUNDRY TYPE ================" << endl;
    cout << "                   A. Regular" << endl;
    cout << "                   B. Premium" << endl;
    cout << "==============================================\n";
    cout << "Choose: ";
    cin >> laundryType;
    }

    else if (option == 'B' || option == 'b')
    {
        cout << "Thank you for using JAKOB'S WELL Laundry Services!" << endl;
        return 0;
    }

    else
    {
        cout << "Invalid choice.";
        return 0;
    }

     if (laundryType == 'A' || laundryType == 'a')
    {
        cout << "---------------------------------------------------" << endl;
        cout << "                       REGULAR"                      << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "1. Regular Clothes         - 17.5/kg        MAX.8kg" << endl;
        cout << "2. Heavy Clothes           - 23.3/kg        MAX.6kg" << endl;
        cout << "3. Whites                  - 25/kg          MAX.6kg" << endl;
        cout << "4. Baby Clothes            - 25/kg          MAX.6kg" << endl;
        cout << "5. Mixed Clothes           - 21.4/kg        MAX.7kg" << endl;
        cout << "6. Beddings and Linens     - 25/kg          MAX.6kg" << endl;
        cout << "7. Queen Comforter         - 250     (1pc per load)" << endl;
        cout << "8. Single/Double Comforter - 150/pc  (2pc per load)" << endl;
        cout << "9. Curtains                - 40/kg          MAX.5kg" << endl;
        cout << "10.Stuffed Toy             -              (per pc.)" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Please Choose What Kind of Clothes you would Wash: ";
        cin >> Choice;
        {


        if (Choice < 1 || Choice > 10)
        {
            cout << "Invalid choice!";
            return 0;
        }
        if (Choice == 7) laundryPrice = 250;
        else if (Choice == 8) laundryPrice = 150;
        else if (Choice == 10)
        {
            cout << "============= Size =============" << endl;
            cout << "             Per pc"              << endl;
            cout << "1. Small = 50  | 2. Medium = 100" << endl;
            cout << "3. Large = 150 | 4. XL     = 250" << endl;
            cout << "================================" << endl;
            cout << "What size: ";
            cin >> stuffSize;

            if (stuffSize == 1)
            stuffPrice = 50;

            else if (stuffPrice == 2)
            stuffPrice = 100;

            else if (stuffPrice == 3)
            stuffPrice = 150;

            else if (stuffPrice == 4)
            stuffPrice = 250;


            if (stuffSize == 1)
            {
                cout << "Quantity: ";
                cin >> pc;
            }

            else if (stuffSize == 2)
            {
                cout << "Quantity: ";
                cin >> pc;
            }

            else if (stuffSize == 3)
            {
                cout << "Quantity: ";
                cin >> pc;
            }

            else if (stuffSize == 4)
            {
                cout << "Quantity: ";
                cin >> pc;
            }
            else
            {
                cout << "It's not in the option." << endl;
                return 0;
            }
        }
        else {
            cout << "Enter kg: ";
            cin >> kg;
            }


        multiplier = kg * 20;



            switch (Choice)
            {
            case 1: laundryPrice = 30 + multiplier; break;
            case 2: laundryPrice = 40 + multiplier; break;
            case 3: laundryPrice = 50 + multiplier; break;
            case 4: laundryPrice = 50 + multiplier; break;
            case 5: laundryPrice = 30 + multiplier; break;
            case 6: laundryPrice = 50 + multiplier; break;
            case 9: laundryPrice = 90 + multiplier; break;
            }
        }
        hours = 3;
    }
    else if (laundryType == 'B' || laundryType == 'b')
    {
        cout << "=============== PREMIUM LAUNDRY ===============" << endl;
        cout << "A. White Clothes - 350/load" << endl;
        cout << "B. Mixed Clothes - 400/load" << endl;
        cout << "Choose: ";
        cin >> powderOpt;

        if (powderOpt == 'A' || powderOpt == 'a') laundryPrice = 350;
        else if (powderOpt == 'B' || powderOpt == 'b') laundryPrice = 400;
        else
        {
            cout << "Invalid choice";
            return 0;
        }
        hours = 2;
    }

     else
    {
        cout << "Invalid laundry type";
        return 0;
    }

cout << "=========================================" << endl;
cout << "Here are the available powder detergents:" << endl;
cout << "=========================================" << endl;
    cout << "A. Downy      " << endl;
    cout << "B. Surf       " << endl;
    cout << "C. Tide       " << endl;
    cout << "D. champion   " << endl;
cout << "=========================================" << endl;
    cout << "Please Choose powder: ";
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
        cout << " Invalid Input";
        return 0;
        }
        }



cout << "============================" << endl;
cout << "Here are the available fabcons:" << endl;
cout << "============================" << endl;
    cout << "A. Downy" << endl;
    cout << "B. Surf" << endl;
    cout << "C. Champion" << endl;
cout << "============================" << endl;
    cout << "Select Fabcon: ";
    cin >> fabcon;


    if (fabcon == 'A' || fabcon == 'a'){
cout << "============================" << endl;
cout <<    "Downy Variants (fabcon)"   << endl;
cout << "============================" << endl;
    cout << "1. Sunrise Fresh - 10" << endl;
    cout << "2. Garden Bloom  - 10" << endl;
    cout << "3. Antibac       - 10" << endl;
    cout << "4. Passion       - 10" << endl;
cout << "============================" << endl;
    cout << "Select Variants: ";
    cin >> downyfabcon_variant;

    if (downyfabcon_variant == '1' || '2' || '3' || '4')
    downyfabconprice = 10;

    else {
    cout << "Invalid input" << endl;
    return 0;
    }
    }





    if (fabcon == 'B' || fabcon == 'b') {
cout << "============================" << endl;
    cout << "Surf Variants (fabcon)" << endl;
cout << "============================" << endl;
    cout << "1. Sun Fresh     - 10" << endl;
    cout << "2. Cherry Blosom - 10" << endl;
    cout << "3. Antibac       - 10" << endl;
    cout << "4. Daisy Fresh   - 10" << endl;
cout << "============================" << endl;
    cout << "Select Variant: ";
    cin >> surffabcon_variant;

    if (surffabcon_variant == '1' || '2' || '3' || '4')
    surffabconprice = 10;

    else {
    cout << "Invalid Input" << endl;
    return 0;
    }
    }




    if (fabcon =='C' || fabcon == 'c') {
cout << "Champion Variants (fabcon)" << endl;
cout << "============================" << endl;
    cout << "1. Simply Fresh - 10" << endl;
    cout << "2. Sweet Floral - 10" << endl;
    cout << "3. Aqua Fresh   - 10" << endl;
    cout << "4. Antibac      - 10" << endl;
cout << "============================" << endl;
    cout << "Select Variants: ";
    cin >> championfabcon_variant;
    }

    if (championfabcon_variant == '1' || '2' || '3' || '4')
    championfabconprice = 10;

    else {
    cout << "Invalid Input" << endl;
    return 0;
    }


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




cout << "============================" << endl;
cout << "    Do you want to add?     " << endl;
cout << "============================" << endl;
    cout << "1. Yes     2. No" << endl;
    cin >> addons;

    if (addons == '1'){
    cout << "Add-ons:" << endl;
    cout << "1. Fabcon" << endl;
    cout << "2. Powder" << endl;
    cout << "3. Bleach" << endl;
    cout << "Choose: ";
    cin >> choice;
    }

    if (choice == 1)
    {
        cout << "=============== FABCON ===============" << endl;;
        cout << "A. Downy (10)" << endl;
        cout << "B. Surf  (10)" << endl;
        cout << "C. Champion (10)" << endl;
        cout << "Choose: ";
        cin >> fabconOpt;

        if (fabconOpt=='A'||fabconOpt=='a'){

cout << "============================" << endl;
cout <<    "Downy Variants (fabcon)"   << endl;
cout << "============================" << endl;
    cout << "1. Sunrise Fresh - 10" << endl;
    cout << "2. Garden Bloom  - 10" << endl;
    cout << "3. Antibac       - 10" << endl;
    cout << "4. Passion       - 10" << endl;
cout << "============================" << endl;
    cout << "Select Variants: ";
    cin >> downyfabcon_variant;

    if (downyfabcon_variant == '1' || '2' || '3' || '4')
    downyfabconprice = 10;

    else {
    cout << "Invalid Input" << endl;
    return 0;
    }
    }
    }


    else if (fabcon == 'B' || fabcon == 'b') {
cout << "============================" << endl;
    cout << "Surf Variants (fabcon)" << endl;
cout << "============================" << endl;
    cout << "1. Sun Fresh     - 10" << endl;
    cout << "2. Cherry Blosom - 10" << endl;
    cout << "3. Antibac       - 10" << endl;
    cout << "4. Daisy Fresh   - 10" << endl;
cout << "============================" << endl;
    cout << "Select Variant: ";
    cin >> surffabcon_variant;

    if (surffabcon_variant == '1' || '2' || '3' || '4')
    surffabconprice = 10;

    else {
    cout << "Invalid Input" << endl;
    return 0;
    }
    }




    else if (fabcon =='C' || fabcon == 'c') {
cout << "Champion Variants (fabcon)" << endl;
cout << "============================" << endl;
    cout << "1. Simply Fresh - 10" << endl;
    cout << "2. Sweet Floral - 10" << endl;
    cout << "3. Aqua Fresh   - 10" << endl;
    cout << "4. Antibac      - 10" << endl;
cout << "============================" << endl;
    cout << "Select Variants: ";
    cin >> championfabcon_variant;
    }

     if (championfabcon_variant == '1' || '2' || '3' || '4')
    championfabconprice = 10;

            fabconPrice = 10;





     if (choice == 2)
    {
        cout << "=============== POWDER ===============" << endl;
        cout << "A. Downy     (5 - 10)" << endl;
        cout << "B. Surf      (5 - 10)" << endl;
        cout << "C. Tide      (5 - 10)" << endl;
        cout << "D. Champion  (5 - 10)" << endl;
        cout << "E. Bleach     (8 - 9)" << endl;
        cout << "Choose: ";
        cin >> powderOpt;

        switch (powderOpt)
        {
        case 'A': case 'a': powderPrice = 10; break;
        case 'B': case 'b': powderPrice = 10; break;
        case 'C': case 'c': powderPrice = 10; break;
        case 'D': case 'd': powderPrice = 10; break;
        case 'E': case 'e': powderPrice = 9; break;
        default:
            cout << "Powder not available";
            return 0;
        }
    }

        if (choice == 2)
        {
cout << "=========================================" << endl;
cout << "Here are the available powder detergents:" << endl;
cout << "=========================================" << endl;
    cout << "A. Downy      " << endl;
    cout << "B. Surf       " << endl;
    cout << "C. Tide       " << endl;
    cout << "D. champion   " << endl;
cout << "=========================================" << endl;
    cout << "Please Choose powder: ";
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
    cout << " Invalid Input";
    return 0;
        }
        }
        }


    else if (powders == 'B' || powders == 'b')
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
    cout << " Invalid Input";
    return 0;
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
        cout << " Invalid Input";
        return 0;
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
        cout << " Invalid Input";
        return 0;
        }
        }

        if (choice == 3){
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
        }





    else if (addons == 2){
    cout << "Thank you for using JAKOB'S WELL Laundry Services!" << endl;
    return 0;
    }


    totalPrice = laundryPrice + powderPrice + fabconPrice;

    cout << "================== BILLING ==================" << endl;
    cout << "Laundry Price:    " << format2(laundryPrice) << endl;
    if (fabconPrice > 0) cout << "Fabcon Price:     " << format2(fabconPrice) << endl;
    if (powderPrice > 0) cout << "Powder Price:     " << format2(powderPrice) << endl;
    cout << "---------------------------------------------" << endl;
    cout << "TOTAL PRICE:      " << format2(totalPrice) << endl;
    cout << "Estimated Time:   " << hours << " hours" << endl;
    cout << "---------------------------------------------" << endl;

    cout << "Enter Payment: ";
    cin >> pay;

    if (pay < totalPrice)
    {
        cout << "Insufficient Payment";
        return 0;
    }
    change = pay - totalPrice;
    cout << "Change: " << format2(change) << endl;

    cout << "Thank you for using JAKOB'S WELL Laundry Services!" << endl;

    return 0;
}





