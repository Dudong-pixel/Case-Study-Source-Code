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
int option, regular;
char laundryType, premium;
double kg, change;
int powderPrice;
double pay;
char add;



    cout << "=========================================" << endl;
    cout << "      JACOB'S WELL LAUNDRY SHOP          " << endl;
    cout << "=========================================" << endl;
    cout << "      1. Add Laundry Request" << endl;
    cout << "      0. Exit" << endl;
    cout << "=========================================" << endl;
    cout << "Choose an Option: ";
    cin >> option;

    if (option == 1)
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "                REQUEST LAUNDRY" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "A. Regular" << endl;
        cout << "B. Premium" << endl;
        cout << "Choose Laundry Type: ";
        cin >> laundryType;
    }
    else if (option == 0)
    {
        cout << "Returning..." << endl;
        return 0;
    }
    else
    {
        cout << "Invalid Option!" << endl;
        return 0;
    }


    if (laundryType == 'A' || laundryType == 'a')
    {
    cout << "---------------------------------------------" << endl;
    cout << "                   REGULAR" << endl;
    cout << "1. Regular Clothes - 17.5/kg" << endl;
    cout << "2. Heavy Clothes   - 23.3/kg" << endl;
    cout << "3. Whites          - 25/kg" << endl;
    cout << "4. Baby Clothes    - 25/kg" << endl;
    cout << "5. Mixed Clothes   - 21.4/kg" << endl;
    cout << "6. Beddings        - 25/kg" << endl;
    cout << "7. Queen Comforter - 250/load" << endl;
    cout << "8. Single Comforter- 150/pc" << endl;
    cout << "9. Curtains - 40/kg" << endl;
    cout << "10. Stuffed toy" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Enter choice: ";
    cin >> regular;

    if (regular < 1 || regular > 10)
    {
    cout << "Invalid Choice!" << endl;
    return 0;
    }



    if (regular == 1) price = 17.5 * kg;
    else if (regular == 2) price = 23.3 * kg;
    else if (regular == 3) price = 25 * kg;
    else if (regular == 4) price = 25 * kg;
    else if (regular == 5) price = 21.4 * kg;
    else if (regular == 6) price = 25 * kg;
    else if (regular == 9) price = 40 * kg;
    cout << "Enter kg; ";
    cin >> kg;
    }

    if (regular == 10){
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

    }

    if (regular == 7){
    cout << "Enter kg: ";
    cin >> kg;
     price = 250;
     }
    else if (regular == 8){
    cout << "Enter kg; ";
    cin >> kg;
    price = 150;
    }



    else if (laundryType == 'B' || laundryType == 'b')
    {
    cout << "----------------------------------------" << endl;
    cout << "                 PREMIUM" << endl;
    cout << "----------------------------------------" << endl;
    cout << "A. White Clothes - 350/load" << endl;
    cout << "B. Mixed Clothes - 400/load" << endl;
    cout << "Choose: ";
    cin >> premium;

    if (premium == 'A' || premium == 'a') price = 350;
    else if (premium == 'B' || premium == 'b') price = 400;
    else
    {
    cout << "Invalid Choice!" << endl << endl;
    return 0;
    }
    }



    cout << "Here are the available powder detergents:" << endl;
    cout << "A. Downy      " << endl;
    cout << "B. Surf       " << endl;
    cout << "C. Tide       " << endl;
    cout << "D. champion   " << endl;
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

    double downypowpay;
    cout << " total price: " << downypowderprice << endl;
    cout << " Enter payment: ";
    cin >> downypowpay;

    totalPrice += Downypowder_variant;

    if (downypowpay >= downypowderprice){
    double change = downypowpay - downypowderprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = downypowderprice - downypowpay;
        cout << " Insufficient funds - " << not_enough << endl;
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

    double surfpowpay;
    cout << " total price: " << Surfpowderprice << endl;
    cout << " Enter payment: ";
    cin >> surfpowpay;

    totalPrice += Surfpowder_variant;


    if (surfpowpay >= Surfpowderprice){
    double change = surfpowpay - Surfpowderprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = Surfpowderprice - surfpowpay;
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

    double tidepowpay;
    cout << " total price: " << Tidepowderprice << endl;
    cout << " Enter payment: ";
    cin >> tidepowpay;

     totalPrice += Tidepowder_variant;

    if (tidepowpay >= Tidepowderprice){
    double change = tidepowpay - Tidepowderprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = Tidepowderprice - tidepowpay;
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

    double champowpay;
    cout << " total price: " << Championpowderprice << endl;
    cout << " Enter payment: ";
    cin >> champowpay;

     totalPrice += Championpowder_variant;

    if (champowpay >= Championpowderprice){
    double change = champowpay - Championpowderprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = Championpowderprice - champowpay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }


    cout << "Here are the available fabcons:" << endl;
    cout << "A. Downy" << endl;
    cout << "B. Surf" << endl;
    cout << "C. Tide" << endl;
    cout << "D. Champion" << endl;
    cout << "Select Fabcon: ";
    cin >> fabcon;


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

    double downyfabpay;
    cout << " total price: " << downyfabconprice << endl;
    cout << " Enter payment: ";
    cin >> downyfabpay;

    totalPrice += downyfabcon_variant;


    if (downyfabpay >= downyfabconprice){
    double change = downyfabpay - downyfabconprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = downyfabconprice - downyfabpay;
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


    double surffabpay;
    cout << " total price: " << surffabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> surffabpay;

     totalPrice += surffabcon_variant;

    if (surffabpay >= surffabconprice){
    double change = surffabpay - surffabconprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = surffabconprice - surffabpay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }


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


    double champfabpay;
    cout << " total price: " << championfabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> champfabpay;

    totalPrice += championfabcon_variant;

    if (champfabpay >= championfabconprice){
    double change = champfabpay - championfabconprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = championfabconprice - champfabpay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
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

    double bleachpay;
    cout << " total price: " << Bleachprice << endl;
    cout << " Enter payment: ";
    cin >> bleachpay;

    totalPrice += Bleachprice;


    if (bleachpay >= Bleachprice){
    double change = bleachpay - Bleachprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = Bleachprice - bleachpay;
        cout << " Insufficient funds - " << not_enough << endl;
    }

    cout << "Do you want to add?" << endl;
    cout << "1. Yes      2. No ";
    cin >> add;

    if (add == '1'){
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

    double addonspay;
    cout << " total price: " << downypowderprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> addonspay;

    if (addonspay >= downypowderprice){
    double change = addonspay - downypowderprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = downypowderprice - addonspay;
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

    double addonspay;
    cout << " total price: " << Surfpowderprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> addonspay;

    if (pay >= Surfpowderprice){
    double change = addonspay - Surfpowderprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Surfpowderprice - addonspay;
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

    double addonspay;
    cout << " total price: " << Tidepowderprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> addonspay;

    if (pay >= Tidepowderprice){
    double change = addonspay - Tidepowderprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Tidepowderprice - addonspay;
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


    totalPrice += Championpowder_variant;

    double addonspay;
    cout << " total price: " << Championpowderprice << endl;
    cout << " Enter payment: ";
    cin >> addonspay;

    if (pay >= Championpowderprice){
    double change = addonspay - Championpowderprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = Championpowderprice - addonspay;
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

    double addonspay;
    cout << " total price: " << downyfabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> pay;

    if (pay >= downyfabconprice){
    double change = addonspay - downyfabconprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = downyfabconprice - addonspay;
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

    double addonspay;
    cout << " total price: " << surffabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> addonspay;

    if (pay >= surffabconprice){
    double change = addonspay - surffabconprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = surffabconprice - addonspay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }


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

    double addonspay;
    cout << " total price: " << championfabconprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> addonspay;

    if (addonspay >= championfabconprice){
    double change = addonspay - championfabconprice;
        cout << " Payment success! " << endl;
        cout << " change: " << change << endl;
    }
    else {
    double not_enough = championfabconprice - addonspay;
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

    double addonspay;
    cout << " total price: " << Bleachprice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> addonspay;

    if (addonspay >= Bleachprice){
    double change = addonspay - Bleachprice;
        cout << " Payment successful " << endl;
        cout << " your change is: " << change << endl;
    }
    else {
    double not_enough = Bleachprice - addonspay;
        cout << " Insufficient funds - " << not_enough << endl;
    }
    }

    else if (add == 2){
    cout << "Thank you so much!" << endl; // di pa to final kasi dito na icocompute yung total amount ng lahat
    }

    else {
    cout << "Invalid input" << endl;
    }







return 0;
}
}
















