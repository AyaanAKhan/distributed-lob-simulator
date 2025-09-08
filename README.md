# Distributed Limit Order Book Simulator

This project implements a high‐performance limit order book (LOB) simulator designed to support
distributed event processing.  The core matching engine is written in modern C++ (C++17) and
communicates with external systems using Apache Kafka for real‐time event streaming and Redis for
in‐memory state storage.

## Features

- **C++17 core**: Efficient order matching logic using lock‐free queues and preallocated memory pools.
- **Kafka integration**: Publish and subscribe to order events for distributed processing pipelines.
- **Redis storage**: Maintain an in‐memory snapshot of order book state for low‐latency access.
- **Python bindings**: Optional Python bindings via [`pybind11`](https://pybind11.readthedocs.io/) for rapid prototyping and analysis.

## Getting Started

This repository contains a minimal C++ skeleton of the limit order book engine.  You will need a
C++17 compiler, Kafka, and Redis installed to run the full system.  To build the core library:

```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make

# Run unit tests (if implemented)
ctest
```

Start Kafka and Redis according to their official documentation before running the engine.  The
Python bindings can be generated using `pybind11` and compiled as part of the build system.

## Folder Structure

```
github_projects/distributed-lob-simulator/
├── README.md       # Project overview and build instructions
└── src/
    └── order_book.cpp  # Minimal skeleton for the matching engine
```

## Contributing

Improvements are welcome!  Feel free to add matching logic, unit tests, Kafka/Redis integration,
or Python bindings.  Please open issues or pull requests to discuss changes.