#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string Metertype, Protected_Consumers;
    int units;
    float bill = 0;
    float taxRate = 0.17;

    cout << "**************************************************************" << endl;
    cout << "*                                                            *" << endl;
    cout << "*               ELECTRICITY BILL CALCULATOR                  *" << endl;
    cout << "*                                                            *" << endl;
    cout << "**************************************************************" << endl;

    cout << "Enter the type of meter (Residential/Commercial/Industrial)(R/C/I): ";
    cin >> Metertype;
    cout << "Is the consumer protected? (Yes/No): ";
    cin >> Protected_Consumers;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    
    if (Metertype == "R" && Protected_Consumers == "Yes") {
        if (units <= 50){
            bill = units * 4.00;
        }else if (units <= 100)
            {
                bill = units * 14.59;
            }
        else if (units <= 200)
            {
                bill = units * 16.41;
            }
        else
            {
                bill = units * 18.00; 
            }
    }    else if (Metertype == "R" && Protected_Consumers == "No") {
        if (units <= 100)
            {
                bill = units * 9.42;
            }
        else if (units <= 200)
            {
                bill = units * 11.74;
            }
        else if (units <= 300)
            {
                bill = units * 13.83;
            }
        else if (units <= 700)
            {
                bill = units * 21.23;
            }
        else
            {
                bill = units * 23.00;
            }
    }
    else if (Metertype == "C" || Metertype == "I") {
        int load_factor;
        cout << "Enter Your Load (kW): ";
        cin >> load_factor;

        if (load_factor < 25)
            {
                bill = units * 18.31;
            }
        else if (load_factor <= 500)
            {
                bill = units * 440;
            }
        else
            {
                bill = units * 460; 
            }
    }
    else {
        cout << "\n⚠️ Invalid meter type entered!" << endl;
        return 1;
    }

    float taxAmount = bill * taxRate;
    float totalBill = bill + taxAmount;


    cout << "\n**************************************************************" << endl;
    cout << "*                     BILL SUMMARY                           *" << endl;
    cout << "**************************************************************" << endl;
    cout << fixed << setprecision(2);
    cout << "* Meter Type            : " << Metertype << endl;
    cout << "* Protected Consumer    : " << Protected_Consumers << endl;
    cout << "* Units Consumed        : " << units << " units" << endl;
    cout << "*------------------------------------------------------------*" << endl;
    cout << "* Base Bill Amount      : Rs. " << bill << endl;
    cout << "* Tax (17%)             : Rs. " << taxAmount << endl;
    cout << "*------------------------------------------------------------*" << endl;
    cout << "* Total Amount Payable  : Rs. " << totalBill << endl;
    cout << "**************************************************************" << endl;
    cout << "*        THANK YOU FOR USING OUR SERVICE!                   *" << endl;
    cout << "**************************************************************" << endl;

    return 0;
}