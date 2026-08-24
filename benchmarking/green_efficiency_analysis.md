# Green Efficiency Analysis

Software efficiency is not an abstract concern. Inefficient programs keep the CPU active longer, which typically increases energy consumption at scale. Professional energy profiling requires specialized tooling, but developers can already make responsible decisions using basic performance measurement and controlled experiments.

This project runs a C program that aims to identify how long does a known, fixed amount of trivial arithmetic work take on this machine, and how consistent is that timing.

```
for (i = 0; i < ITERATION_COUNT; i++)
    result += (unsigned long long)(i % 3);
```

## Measurement Methodology

## Observed Performance Differences

## Relation Between Runtime and Energy Consumption

## Limitations of the Experiment

## Practical Engineering Takeaway