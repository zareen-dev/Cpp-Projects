#include <iostream>
#include <string>
using namespace std;

int main()
{

    // ==========================================
    //       COURIER DELIVERY CALCULATOR
    // ==========================================

    string customerName;
    double weight;
    int destination;
    int deliveryType;
    char fragile;

    double baseCharge = 0;
    double weightCharge = 0;
    double deliveryCharge = 0;
    double fragileCharge = 0;
    double totalCharge = 0;

    cout << "========================================" << endl;
    cout << "       COURIER DELIVERY SYSTEM" << endl;
    cout << "========================================" << endl;

    // Get customer's name
    cout << "\nEnter customer name: ";
    cin >> customerName;

    // Get parcel weight
    cout << "Enter parcel weight in kg: ";
    cin >> weight;

    // Display destination choices
    cout << "\nSelect destination:" << endl;
    cout << "1. Local" << endl;
    cout << "2. National" << endl;
    cout << "3. International" << endl;
    cout << "Enter your choice: ";
    cin >> destination;

    // Display delivery options
    cout << "\nSelect delivery type:" << endl;
    cout << "1. Standard Delivery" << endl;
    cout << "2. Express Delivery" << endl;
    cout << "Enter your choice: ";
    cin >> deliveryType;

    // Ask whether the parcel is fragile
    cout << "\nIs the parcel fragile? (y/n): ";
    cin >> fragile;

    // ==========================================
    //       CALCULATE DESTINATION CHARGE
    // ==========================================

    if (destination == 1)
    {
        baseCharge = 200;
    }
    else if (destination == 2)
    {
        baseCharge = 500;
    }
    else if (destination == 3)
    {
        baseCharge = 1500;
    }
    else
    {
        cout << "\nInvalid destination selected." << '\n';
        return 0;
    }

    // ==========================================
    //       CALCULATE WEIGHT CHARGE
    // ==========================================

    if (weight <= 1)
    {
        weightCharge = 0;
    }
    else if (weight <= 5)
    {
        weightCharge = 300;
    }
    else if (weight <= 10)
    {
        weightCharge = 600;
    }
    else
    {
        weightCharge = 1000;
    }

    // ==========================================
    //       CALCULATE DELIVERY CHARGE
    // ==========================================

    if (deliveryType == 1)
    {
        deliveryCharge = 0;
    }
    else if (deliveryType == 2)
    {
        deliveryCharge = 500;
    }
    else
    {
        cout << "\nInvalid delivery type selected." << endl;
        return 0;
    }

    // ==========================================
    //       CALCULATE FRAGILE CHARGE
    // ==========================================

    if (fragile == 'y' || fragile == 'Y')
    {
        fragileCharge = 300;
    }
    else
    {
        fragileCharge = 0;
    }

    // Calculate final delivery cost
    totalCharge = baseCharge + weightCharge + deliveryCharge + fragileCharge;

    // ==========================================
    //             FINAL RECEIPT
    // ==========================================

    cout << "\n\n========================================" << endl;
    cout << "          COURIER RECEIPT" << endl;
    cout << "========================================" << endl;

    cout << "Customer: " << customerName << endl;
    cout << "Weight: " << weight << " kg" << endl;

    cout << "\nBase Charge:      Rs. " << baseCharge << endl;
    cout << "Weight Charge:    Rs. " << weightCharge << endl;
    cout << "Delivery Charge:  Rs. " << deliveryCharge << endl;
    cout << "Fragile Charge:   Rs. " << fragileCharge << endl;

    cout << "----------------------------------------" << endl;
    cout << "Total Amount:     Rs. " << totalCharge << endl;
    cout << "========================================" << endl;

    cout << "\nThank you for using our courier service!" << endl;

    return 0;
}