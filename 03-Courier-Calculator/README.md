# Courier Delivery Calculator

A beginner-friendly C++ console program that calculates the delivery cost of a parcel based on its destination,
weight, delivery type, and whether the parcel is fragile.

## Features

* Takes the customer's name
* Takes parcel weight
* Supports three destinations:

  * Local
  * National
  * International
* Supports two delivery options:

  * Standard
  * Express
* Adds an additional charge for fragile parcels
* Calculates individual charges
* Calculates the final delivery cost
* Displays a formatted courier receipt
* Handles invalid destination and delivery choices

## Concepts Practiced

* `iostream`
* `string`
* Variables and data types
* `cin` and `cout`
* `if`, `else if`, and `else`
* Logical OR operator `||`
* Arithmetic operations
* Basic input validation
* Formatted console output

## Pricing Logic

### Destination Charges

| Destination   | Base Charge |
| ------------- | ----------: |
| Local         |     Rs. 200 |
| National      |     Rs. 500 |
| International |    Rs. 1500 |

### Weight Charges

| Parcel Weight              | Additional Charge |
| -------------------------- | ----------------: |
| Up to 1 kg                 |             Rs. 0 |
| More than 1 kg up to 5 kg  |           Rs. 300 |
| More than 5 kg up to 10 kg |           Rs. 600 |
| More than 10 kg            |          Rs. 1000 |

### Delivery Charges

| Delivery Type | Additional Charge |
| ------------- | ----------------: |
| Standard      |             Rs. 0 |
| Express       |           Rs. 500 |

### Fragile Handling

* Fragile parcel: **Rs. 300**
* Non-fragile parcel: **Rs. 0**

## Example

```text
========================================
       COURIER DELIVERY SYSTEM
========================================

Enter customer name: Zayn
Enter parcel weight in kg: 2.5

Select destination:
1. Local
2. National
3. International
Enter your choice: 2

Select delivery type:
1. Standard Delivery
2. Express Delivery
Enter your choice: 2

Is the parcel fragile? (y/n): y


========================================
          COURIER RECEIPT
========================================
Customer: Zayren
Weight: 2.5 kg

Base Charge:      Rs. 500
Weight Charge:    Rs. 300
Delivery Charge:  Rs. 500
Fragile Charge:   Rs. 300
----------------------------------------
Total Amount:     Rs. 1600
========================================
```

## How to Run

1. Make sure a C++ compiler is installed.
2. Open the project in your C++ development environment.
3. Compile the `.cpp` file.
4. Run the program.
5. Enter the requested parcel information.

