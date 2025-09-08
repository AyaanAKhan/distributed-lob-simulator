// distributed-lob-simulator/src/order_book.cpp
//
// Minimal skeleton for a distributed limit order book simulator.
//
// The purpose of this file is to provide a starting point for implementing a high-performance
// matching engine.  The actual matching logic, order book data structures, and integration
// with Kafka/Redis are left for future development.

#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>

// A simple representation of an order.  In a real system you would include additional fields
// such as order ID, timestamp, side (buy/sell), and more.
struct Order {
    std::string symbol;
    double price;
    int quantity;
    bool is_buy;  // true for buy, false for sell
};

// A minimal order book that stores buy and sell orders in two queues.  This is not a matching
// engine; it merely queues orders.  Extend this class to implement matching logic and
// integration with external systems.
class LimitOrderBook {
public:
    void add_order(const Order &order) {
        if (order.is_buy) {
            buy_orders_.push(order);
        } else {
            sell_orders_.push(order);
        }
    }

    void print_state() const {
        std::cout << "Buy orders: " << buy_orders_.size() << "\n";
        std::cout << "Sell orders: " << sell_orders_.size() << "\n";
    }

private:
    std::queue<Order> buy_orders_;
    std::queue<Order> sell_orders_;
};

int main() {
    LimitOrderBook lob;
    lob.add_order({"AAPL", 150.0, 100, true});
    lob.add_order({"AAPL", 149.5, 100, false});
    lob.print_state();
    return 0;
}