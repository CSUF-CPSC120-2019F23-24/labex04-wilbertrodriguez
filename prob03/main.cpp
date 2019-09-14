// Sales prediction

#include <iostream>

int main()
{
  const int TOT_SALES=2103419277;
  const double SALE_INC=.18;
  //sets the constants of the program

  long int future=(TOT_SALES*SALE_INC)+TOT_SALES;
  //finds the prediction of the future sales after increase

  std::cout << "Last year's sales were " << TOT_SALES <<"\n"
  << "This year's sales predictions: " << future << "\n";
  //outputs the sales from last year and the predictions for this year

  return 0;
}
