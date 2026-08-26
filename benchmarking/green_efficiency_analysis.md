# Green Efficiency Analysis

Software efficiency is not an abstract concern. Inefficient programs keep the CPU active longer, which typically increases energy consumption at scale. Professional energy profiling requires specialized tooling, but developers can already make responsible decisions using basic performance measurement and controlled experiments.

This project runs a C program that aims to identify how long does a known, fixed amount of trivial arithmetic work take on this machine, and how consistent is that timing.

### Measurement Methodology
##### Baseline Execution Measurement
First a baseline is needed to gauge existing behavior. To to this, a basic loop was run 3 times and the measurements recorded

Baseline set as below:
```
for (i = 0; i < ITERATION_COUNT; i++)
    result += (unsigned long long)(i % 3);
```
**Baseline Observed Performance Differences**
| Iteration | Execution time |
| --- | --- |
| 1 | 0.075564 seconds |
| 2 | 0.069966 seconds |
| 3 | 0.068705 seconds |

##### Algorithmic Efficiency Comparison
Next, two different approaches to solving the same problem were compared to see how algorithm design affects execution time. To do this, a naive (nested-loop) implementation and a single-pass implementation were both run against the same dataset, each timed individually, across 3 iterations.

**Excution Times**
| Iteration | Naive algorithm result | Naive algorithm time | Single-pass algorithm result | Single-pass algorithm time |
| --- | --- | --- | --- | --- |
| 1 | 625025000 | 0.732230 seconds | 25000 | 0.000028 seconds | 
| 2 | 625025000 | 0.727085 seconds | 25000 | 0.000028 seconds |
| 3 | 625025000 | 0.725489 seconds | 25000 | 0.000028 seconds | 

**Average Execution**
| Implementation | Average Time | 
| --- | --- |
| Naive algorithm | 0.728268 |
| Single-pass algorithm | 0.000028 |

**Relative difference**
0.728268 ÷ 0.000028 ≈ 26,010 — so the naive implementation is roughly 26,000 times slower than the single-pass implementation for solving the same problem.

### Relation Between Runtime and Energy Consumption

### Limitations of the Experiment

### Practical Engineering Takeaway