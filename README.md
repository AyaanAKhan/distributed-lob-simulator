# Distributed Limit Order Book Simulator

A C++17 limit order book simulator designed as a systems and low latency engineering project. The project models the architecture of a trading system where order events can be processed, matched, and distributed to external services.

## What It Demonstrates

This repository is meant to show comfort with performance oriented C++, concurrency concepts, event driven systems, and financial market infrastructure. It is a strong portfolio project for software engineering, systems engineering, fintech, and quant adjacent roles.

## Current Scope

- C++17 matching engine skeleton
- Limit order book architecture for bid and ask side processing
- Event driven design for future order submission, cancellation, and execution events
- Planned Kafka integration for streaming market events
- Planned Redis integration for fast in memory state snapshots
- Optional Python binding direction for research and analysis workflows

## Planned Architecture

```text
Order events
    |
    v
Kafka topic
    |
    v
C++ matching engine
    |
    +--> Trades and fills
    +--> Book updates
    +--> Redis snapshot
    |
    v
Python analytics / dashboard
```

## Tech Stack

| Area | Tools |
|---|---|
| Core Engine | C++17 |
| Build System | CMake |
| Streaming Design | Kafka |
| State Store Design | Redis |
| Research Interface | Python, pybind11 |

## Build

```bash
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make
ctest
```

Kafka, Redis, and Python bindings are planned extensions. The current repository focuses on the core C++ project structure and matching engine direction.

## Repository Structure

```text
.
├── README.md
└── src/
    └── order_book.cpp
```

## Recruiter Notes

This project is useful for showing more than basic web development. It points toward systems programming, data structures, concurrency, event processing, and performance aware design.

## Future Improvements

- Implement price time priority matching
- Add order cancellation and modification
- Add unit tests for fills, partial fills, and book state
- Add benchmark tests for throughput and latency
- Add Docker Compose for Kafka and Redis
- Add pybind11 bindings for Python analysis
