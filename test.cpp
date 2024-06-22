//[[Rcpp::depends(RcppEigen)]]
#include <RcppEigen.h>

using namespace Eigen;
using namespace Rcpp;



// [[Rcpp::export]]
void timesTwo(VectorXd x) {
  MatrixXd a(5, 5);
  
  // Rcout << a(seq(0, 2), seq(2, 3));
  Rcout << a.sum();
  
  // return x * 2;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
timesTwo(1:10)
*/
