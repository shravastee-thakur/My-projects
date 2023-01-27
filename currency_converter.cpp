#include <iostream>  
using namespace std ;   
int main ()   
{
int value1, choice;
float amount;
float dollar, rupee, euro, yen, yuan; 
char ans; 

  
cout << "***** Welcome to Currency Converter Application ***** \n\n";
cout << "You can convert Rupee, Euro, Yen, Yuan \n\n";

runagain:

cout << "Following are the choices: \n\n";
cout << "Enter 1: Rupee\n";
cout << "Enter 2: Dollar\n";
cout << "Enter 3: Euro\n";
cout << "Enter 4: Yen\n";
cout << "Enter 5: Yuan\n\n";

cout << "Enter your choice: "<< endl;
cin >> choice;

if (choice > 5){
    cout << "You have entered a wrong value" << endl;
}
else {
    cout << "Enter the amount you want to convert: "<< endl;
    cin >> amount;
}

switch (choice)
{
    case 1: // Ruppe Conversion
        dollar = amount / 81.59;
        cout << amount << " Rupee =  "<< dollar << " Dollar" << endl;

        euro = amount / 88.66;
        cout << amount << " Rupee =  "<< euro << " Euro" << endl;
 
        yen = amount / 0.63;
        cout << amount << " Rupee =  "<< yen << " Yen" << endl;

        yuan = amount / 12.02;
        cout <<amount << " Rupee =  "<< yuan << " Yuan" << endl;
        break;
        
    case 2: // Dollar Conversion
        rupee = amount * 81.59;
        cout << amount << " Dollar =  "<< rupee << " Rupee" << endl;
 
        euro = amount * 0.92;
        cout << amount << " Dollar =  "<< euro << " Euro" << endl;
        
        yen = amount * 130.39;
        cout << amount << " Dollar =  "<< yen << " Yen" << endl;

        yuan = amount * 6.78;
        cout <<amount << " Dollar =  "<< yuan << " Yuan" << endl;
        break;
 
     
    case 3: // Euro Conversion
        rupee = amount * 88.97;
        cout << amount << " Euro =  "<< rupee << " Rupee" << endl;
         
        dollar = amount * 1.09;
        cout << amount << " Euro =  "<< dollar << " Dollar" << endl;
         
        yen = amount * 141.99;
        cout << amount << " Euro =  "<< yen << " Yen" << endl;

        yuan = amount * 7.38;
        cout <<amount << " Euro =  "<< yuan << " Yuan" << endl;
        break;

    case 4: // Yen Conversion
        rupee = amount * 0.63;
        cout << amount << " Yen =  "<< rupee << " Rupee" << endl;
         
        dollar = amount * 0.0077;
        cout << amount << " Yen =  "<< dollar << " Dollar" << endl;
         
        euro = amount * 0.0070;
        cout << amount << " Yen =  "<< euro << " Euro" << endl;

        yuan = amount * 0.052;
        cout <<amount << " Yen =  "<< yuan << " Yuan" << endl;
        break;

    case 5: // Yuan Conversion
        rupee = amount * 12.04;
        cout << amount << " Yuan =  "<< rupee << " Rupee" << endl;
         
        dollar = amount * 0.15;
        cout << amount << " Yuan =  "<< dollar << " Dollar" << endl;
         
        euro = amount * 0.14;
        cout << amount << " Yuan =  "<< euro << " Euro" << endl;

        yen = amount * 19.22;
        cout << amount << " Yuan =  "<< yen << " Yen" << endl;
        break;
 
    default :
        cout << "Please enter a correct value" << endl;
        
}
cout << "Would you like to run the program again? (Y/N) ";
cin >> ans;
if (ans == 'y' or ans == 'Y')
{
goto runagain;
}

return 0;   
}