#include<iostream>
#include<cmath>

using namespace std;

int choice, numbers, n, num1, num2;
float n1, n2;
char option;

void addition() {
    int sum = 0;
    cout << "Enter number you want to add: \n";
    cin >> numbers;

    for(int i=0;i<numbers;i++){
        cout<< "Enter number "<<i+1<<":\n\n" ;
        cin>>n; 
        sum+=n;}
    cout<<"sum is: "<< sum<<endl<<endl;
    }

void subtraction(){
    int diff;
    cout<<"Enter two numbers for subtraction:\n\n";
    cout<<"Enter first number: \n";
    cin>>num1;
    cout<<"Enter second number: \n";
    cin>>num2;
    diff = num1 - num2;
    cout<<"difference is: "<<diff<<endl<<endl;
    }

void product(){
    int product=1;
    cout<<"How many numbers you want to multiply:\n";
    cin>>numbers;
    for(int i=1;i<=numbers;i++){
        cout<<"Enter number "<<i<<": ";
        cin>>n;
        product = product * n;}
             
    cout<<"product is:"<<product<<endl<<endl;    
    }

void division(){
    float div;
    cout<<"Enter numerator: \n";
    cin>>n1;
    cout<<"Enter denominator: \n";
    cin>>n2;
    div = n1 / n2;
    cout<<"Quotient is:"<<div<<endl<<endl;
    }  

void squareroot() {
    float s;
    cout<<"Enter number to find its square root: ";
    cin>>n;
    s = sqrt(n);
    cout<<"Square root of "<<n<<" is: "<<s<<endl;
    }


int main() {

do {
cout << "***** Welcome to Digital Calculator Application ***** \n\n";
cout << "Which operation you want to perform \n\n";
    
cout<<"1 for addition \n";
cout<<"2 for subtraction\n";
cout<<"3 for multiplication\n";
cout<<"4 for division\n";
cout<<"5 for square root \n";
cout<<"0 for exit\n\n";

cout<<"Enter Your option: \n";
cin>>option;

switch(option){

    case '1':
        addition();
        break;

    case '2':
        subtraction();
        break;
              
    case '3':
        product();
        break;

    case '4':
        division();
        break;

    case '5':
        squareroot();
        break;

    case '0':
        exit(0);
                
    default:
    cout<<"invalid input\n\n" ;   
    }
} while (option != 5);
   
   
return 0;
}


