#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

void setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%ld \n", N);

   for (int i = 0; i < N; i++)
   {

      A[i] = rand() % N - 1;
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%ld \n", N);
   int64_t sum = 0;
   uint64_t indx = A[0];
   for (int i = 0; i < N; i++)
   {

      sum += A[indx];
      indx = A[indx];
   }

   return sum;
}

