#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int yahtzee_sim_cpp_external(int num_sim){
  int count_result = 0;
  
  for(int i = 0; i < num_sim; i++){
    NumericVector die_roll = round(runif(5, 1, 5), 0);
    if(unique(die_roll).length() == 1){
      count_result++;
    }
  }
  
  return(count_result);
}

/*** R
yahtzee_sim_cpp_external(5)
*/
