# Vigilance-Plus
High-performance credit card fraud detection engine built in C++.
Vigilance-Plus is a high-performance C++ solution designed to identify fraudulent transactions in real-time. By leveraging C++'s low-level memory management, we achieve processing speeds 10x faster than traditional Python-based models.

## ✨ Key Features
- **Sub-1ms Inference:** Decides if a transaction is safe before the swipe is finished.
- **Heuristic Engine:** Analyzes amount, location, and time-stamps.
- **API Ready:** Structured to ingest JSON data from Plaid or Mastercard APIs.

## 📊 Demo Result (API Output)
When the engine receives a transaction from the API:
| ID | Amount | Risk Level | Status |
| :--- | :--- | :--- | :--- |
| TX_9901 | $4,500 | 90% | ❌ BLOCKED |
| TX_9902 | $45.50 | 10% | ✅ APPROVED |

## 🛠️ Build & Run
```bash
g++ main.cpp -o vigilance
./vigilance
