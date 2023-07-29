#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << "\n\n";cout << "\n\n";
  cout << "\t\t\t----------------------------WELCOME TO CURRENCY CONVERTER SERVER----------------------------- \n";
  cout << "\n\n";cout << "\n\n";
  double m, a;
  int n;
  cout << "ENTER THE AMOUNT IN INR YOU WANT TO EXCHANGE :\n";
  cin >> m;
  cout << "\n\n";cout << "\n\n";
  cout << "SELECT THE CURRENCY IN WHICH YOU WANT TO EXCHANGE \n";
  cout << "SELECT ONE NUMBER FROM THE GIVEN MENU ACCORDING TO YOUR NEED : \n";
  cout << "1.EURO \n";
  cout << "2.U.S. DOLLAR \n";
  cout << "3.SOUTH KOREAN WON \n";
  cout << "4.CHINESE YUAN \n";
  cout << "5.JAPANESE YEN \n";
  cout << "6.KUWAITI DINAR \n";
  cout << "7.POUND STERLING \n";
  cout << "8.UAE DIRHAM \n";
  cout << "9.SWISS FRANC \n";
  cout << "10.SOUTH AFRICAN RAND \n";
  cout << "11.NOT HERE\n";
  cout << "\n\n";cout << "\n\n";
  cout << "ENTER A NO. :";
  cin >> n;
  cout << "\n\n";cout << "\n\n";
  switch (n)
  {

  case 1:
    cout << "THE CURRENT EXCHANGE RATE FOR EURO IN MARKET IS 1 RS = 0.011 EURO \n";
    a = m * 0.011;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN EURO IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 2:
    cout << "THE CURRENT EXCHANGE RATE FOR USD IN MARKET IS 1 RS = 0.012 USD \n";
    a = m * 0.012;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN USD IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 3:
    cout << "THE CURRENT EXCHANGE RATE FOR WON IN MARKET IS 1 RS = 15.48 WON \n";
    a = m * 15.48;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN WON IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 4:
    cout << "THE CURRENT EXCHANGE RATE FOR YUAN IN MARKET IS 1 RS = 0.087 YUAN \n";
    a = m * 0.087;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN YUAN IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 5:
    cout << "THE CURRENT EXCHANGE RATE FOR YEN IN MARKET IS 1 RS = 1.72 YEN \n";
    a = m * 1.72;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN YEN IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 6:
    cout << "THE CURRENT EXCHANGE RATE FOR DINAR IN MARKET IS 1 RS = 0.0037 DINAR \n";
    a = m * 0.0037;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN DINAR IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 7:
    cout << "THE CURRENT EXCHANGE RATE FOR STERLING IN MARKET IS 1 RS = 0.0095 POUND STERLING \n";
    a = m * 0.0095;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN POUND IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 8:
    cout << "THE CURRENT EXCHANGE RATE FOR DIRHAM IN MARKET IS 1 RS = 0.045 DIRHAM \n";
    a = m * 0.045;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN DIRHAM IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 9:
    cout << "THE CURRENT EXCHANGE RATE FOR SWISS FRANC IN MARKET IS 1 RS = 0.011 SWISS FRANC \n";
    a = m * 0.011;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN SWISS FRANC IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 10:
    cout << "THE CURRENT EXCHANGE RATE FOR RAND IN MARKET IS 1 RS = 0.21 RAND \n";
    a = m * 0.21;
    cout << fixed << setprecision(2);
    cout << "THE ENTERED AMOUNT IN RAND IS " << a<<endl;
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  case 11:
    cout << "WE ARE SORRY AS WE CANNOT PROVIDE THIS CONVERSION \n";
    cout<<"\t\t-----------------------------------------------------------------";
    break;

  default:
    cout << "WRONG CHOICE !!";
    cout<<"\t\t-----------------------------------------------------------------";
  }

  return 0;
}