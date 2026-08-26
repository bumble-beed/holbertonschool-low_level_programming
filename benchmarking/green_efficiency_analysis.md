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
0.728268 ÷ 0.000028 ≈ 26,010
Naive implementation is roughly 26,000 times slower than the single-pass implementation.

##### Controlled Instrumentation Experiment
Next, a multi-phase program was instrumented to see where execution time is actually spent within a single run, rather than just measuring one overall time. To do this, individual clock readings were placed around each of the three phases (BUILD_DATA, PROCESS, REDUCE) as well as around the whole sequence, so each stage's contribution to the total could be measured separately.

**Results**
| Process | Time | Result | Percentage |
| --- | --- | --- | --- |
| TOTAL | seconds | 0.001846 | 100% |
| BUILD_DATA | seconds | 0.000518 | 28.06% |
| PROCESS | seconds | 0.000872 | 47.24% |
| REDUCE | seconds | 0.000442 | 23.95% |
| clock() | seconds | 0.000014 | 0.76% |

### Relation Between Runtime and Energy Consumption
While no power or energy readings were taken directly, for CPU-bound work, energy use scales with how long the processor stays active. This means execution time can act as a rough stand-in for energy cost.
Using relative differnce of naive algorithm's roughly 26,000x longer runtime implies it also consumes substantially more energy to complete the same task than the single-pass version
Im the instrumented program, `PROCESS` also has the largest share (47%) suggesting it is the most energy-intensive of the three phases simply because it holds the CPU active the longest

### Limitations of the Experiment
- `clock()` - measures at whatever the OS provides (TOTAL exceeded the summed phases by 0.000014s in this experiment)
- no power or engergy metering done
- 3 trials only 
- OS background activity may affect results

### Practical Engineering Takeaway
The biggest takeaway is that algorithm choice matters far more than small timing noise or minor code tweaks. The naive implementation was roughly 26,000x slower than the single-pass version for solving the same problem. This shows that picking a better algorithm is a much bigger win than micro-optimizing existing code. The phase breakdown shows the same thing: PROCESS took up the largest share of runtime, so that's the stage worth optimizing first if the goal is to reduce both runtime and energy use.