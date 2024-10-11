#include <iostream>
#include <iomanip>


using namespace std;


double calculateCommission(double sales) {
    if (sales < 10000) {
        return sales * 0.05;
    } else if (sales < 15000) {
        return sales * 0.10;
    } else if (sales < 18000) {
        return sales * 0.12;
    } else if (sales < 22000) {
        return sales * 0.14;
    } else {
        return sales * 0.16;
    }

}

int main () {
    double sales, advancePay;

  while (true) {
    cout << "Enter the salesperson's monthly sales (or -1 to exit): ";
    cin >> sales;

    if (sales == -1) {
        break; // Exit the loop if -1 is entered
    }

    cout << "Enter the salesperson's advance pay for this salesperson: ";
    cin >> advancePay;

    double commission = calculateCommission(sales);

    double remainingPay = commission - advancePay;


    cout << fixed << setprecision(2);
    cout << "\npay Results:\n";
    cout << "-----------\n";
    cout << "Sales: $" << sales << endl;
    double commissionRate = (sales > 0) ? (commission / sales) : 0.0;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advance Pay: $" << advancePay << endl;


    if (remainingPay >= 0) {
        cout << "Remaining Pay: $" << remainingPay << endl;
    } else {
        cout << "Amount Owed: $" << -remainingPay << endl;
          }
  }

  return 0;

}
