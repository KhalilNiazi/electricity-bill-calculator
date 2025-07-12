# ⚡ Electricity Bill Calculator (C++)

This is a simple command-line **Electricity Bill Calculator** written in C++. It allows users to calculate their electricity bill based on their meter type (Residential, Commercial, Industrial), whether they are a protected consumer, and the number of units consumed.

---

## 📋 Features

- Supports **Residential**, **Commercial**, and **Industrial** meter types.
- Applies different billing rates for **Protected** and **Non-Protected** residential consumers.
- Accepts user input for:
  - Meter type (R/C/I)
  - Consumer status (Protected/Non-Protected)
  - Units consumed
  - Load factor (for Commercial/Industrial)
- Calculates:
  - Base bill
  - Tax (17%)
  - Total amount payable
- Neatly formatted output for bill summary.

---

## 🚀 How to Run

### Requirements:
- A C++ compiler (e.g., `g++`, `clang++`, or an IDE like Code::Blocks or Visual Studio)

### Compilation & Execution:

```bash
g++ -o bill_calculator bill_calculator.cpp
./bill_calculator
```
### 🧮 Sample Output
```
**************************************************************
*                                                            *
*               ELECTRICITY BILL CALCULATOR                  *
*                                                            *
**************************************************************
Enter the type of meter (Residential/Commercial/Industrial)(R/C/I): R
Is the consumer protected? (Yes/No): Yes
Enter the number of units consumed: 120

**************************************************************
*                     BILL SUMMARY                           *
**************************************************************
* Meter Type            : R
* Protected Consumer    : Yes
* Units Consumed        : 120 units
*------------------------------------------------------------*
* Base Bill Amount      : Rs. 1750.80
* Tax (17%)             : Rs. 297.64
*------------------------------------------------------------*
* Total Amount Payable  : Rs. 2048.44
**************************************************************
*        THANK YOU FOR USING OUR SERVICE!                   *
**************************************************************
```
📌 Notes

- This project is designed for learning and educational purposes.
- Tariff rates are hardcoded and may not reflect the latest actual electricity rates.
- You can modify the tax rate or tariffs as needed.
