#ifndef fincu_utilities_hpp
#define fincu_utilities_hpp

#include <iostream>
#include <limits>

#define FC_NULL_INTEGER        ((std::numeric_limits<int>::max)()) 
#define FC_NULL_REAL           (std::numeric_limits<float>::max()) 

#define CUDA_CALL(x) if((x)!=cudaSuccess) std::cerr<<"Cuda call failed\n";
#define CURAND_CALL(x) if((x)!=CURAND_STATUS_SUCCESS) std::cerr<<"CuRand call failed\n";
#define FC_FAIL(x) std::cerr<<x<<std::endl;

#endif