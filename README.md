📖 Overview
Vigilance-Plus is a high-performance transaction monitoring system built in C++. While modern fintech often relies on slow, high-level languages like Python for fraud analysis, Vigilance++ moves the logic closer to the hardware.

By leveraging C++'s deterministic memory management and the nlohmann/json library, we achieve sub-100 microsecond decision-making. We don't just detect fraud; we stop it before the transaction is finalized.

✨ Key FeaturesMicrosecond Latency: Processes complex risk-scoring heuristics in $< 0.1ms$
.JSON-Native: Seamlessly integrates with Plaid, Mastercard, or Stripe API responses.
Heuristic Intelligence: Multi-factor analysis checking for:
    Velocity/Amount spikes.
    Unusual timestamps (e.g., 3 AM transactions).
    Geographic anomalies (International shifts).
Production Ready: Built with an automated CI/CD pipeline via GitHub Actions
