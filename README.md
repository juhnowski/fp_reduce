#  Parallel versions of standard algorithms

Since C++17, many STL algorithms let you specify that their execution should be parallelized. The algorithms that can be parallelized accept the execution policy as an additional argument. If you want the algorithm execution to be parallelized, you need to pass it the std::execution::par policy.

[For more information on execution policies, check out the C++ Reference]: http://mng.bz/EBys

For Linux:
```
$ sudo apt update
$ sudo apt install libtbb-dev
```

For Mac:
```
brew install tbb
```

For xCode:

- Set ```Header Search Paths``` to ```/usr/local/Cellar/tbb/2020_U2/include/```
- Set ```Library Search Paths``` to ```/usr/local/Cellar/tbb/2020_U2/lib/```
- Set ```Other Linker Flags``` to ```-ltbb```

[C++17 and parallel algorithms in STL - setting up]: http://mng.bz/8435
