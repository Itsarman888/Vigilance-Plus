#include <iostream>
#include <string>
#include <vector>

// ANSI Color Codes for a "Flashy" Terminal Demo
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"

struct Transaction {
    std::string id;
    double amount;
    bool isInternational;
    int hour; // 24-hour format
};

class VigilanceEngine {
public:
    void analyze(Transaction tx) {
        double riskScore = 0.0;
        std::cout << CYAN << "\n[Analyzing Transaction: " << tx.id << "]" << RESET << std::endl;

        // Rule 1: High Amount
        if (tx.amount > 2000) riskScore += 0.5;
        // Rule 2: Unusual Hours (Late night)
        if (tx.hour < 5 || tx.hour > 23) riskScore += 0.3;
        // Rule 3: Geo-Shift
        if (tx.isInternational) riskScore += 0.4;

        std::cout << "Calculating risk using C++ Latency Logic..." << std::endl;
        
        if (riskScore >= 0.7) {
            std::cout << RED << "STATUS: FRAUD DETECTED (Score: " << riskScore * 100 << "%)" << RESET << std::endl;
            std::cout << RED << "ACTION: TRANSACTION BLOCKED" << RESET << std::endl;
        } else {
            std::cout << GREEN << "STATUS: TRANSACTION SECURE" << RESET << RESET << std::endl;
        }
    }
};

int main() {
    VigilanceEngine engine;

    // Simulated API Data
    Transaction t1 = {"TX_9901", 4500.00, true, 3};  // High risk
    Transaction t2 = {"TX_9902", 45.50, false, 14};  // Low risk

    engine.analyze(t1);
    engine.analyze(t2);

    return 0;
}
