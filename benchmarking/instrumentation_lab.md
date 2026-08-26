## Where does the time actually go?

`BUILD_DATA` - fills the array with 50,000 fake "random" numbers, generated using a fixed formula so the same numbers come up every run.

`PROCESS` goes through the array and changes every number using a simple math formula.

`REDUCE` - combines all the numbers into one final total (a checksum), by looping through and adding each one into a running sum.

`TOTAL` 
- `t_end` - `t_start`
- `t_start` is captured right before `BUILD_DATA` begins
- `t_end` is captured right after `REDUCE` finishes
- `TOTAL` covers the three phases back-to-back (BUILD_DATA + PROCESS + REDUCE), plus a tiny sliver of overhead from calling clock() itself six times in a row

## Results 
| Process | Time | Result |
| --- | --- | --- |
| TOTAL | seconds | 0.001846 |
| BUILD_DATA | seconds | 0.000518 |
| PROCESS | seconds | 0.000872 |
| REDUCE | seconds | 0.000442 |