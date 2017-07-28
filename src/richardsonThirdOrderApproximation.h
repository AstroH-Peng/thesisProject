#ifndef TUDATBUNDLE_RICHARDSONTHIRDORDERAPPROXIMATION_H
#define TUDATBUNDLE_RICHARDSONTHIRDORDERAPPROXIMATION_H



#include "richardsonThirdOrderApproximation.cpp"


Eigen::VectorXd richardsonThirdOrderApproximation( std::string orbitType, int librationPointNr,
                                                   double amplitude, double n );



#endif  // TUDATBUNDLE_RICHARDSONTHIRDORDERAPPROXIMATION_H