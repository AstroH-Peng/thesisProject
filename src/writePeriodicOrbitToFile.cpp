#include <iostream>
#include <fstream>
#include <cstdio>
#include <Eigen/Core>
#include <Eigen/Eigenvalues>
#include <Eigen/QR>
#include <Eigen/Dense>

#include "propagateOrbit.h"


Eigen::MatrixXd writePeriodicOrbitToFile( Eigen::VectorXd initialStateVector, int librationPointNr, std::string orbitType,
                                          int orbitId, double orbitalPeriod, const double massParameter,
                                          bool completeInitialConditionsHaloFamily,
                                          int saveEveryNthIntegrationStep )
{
//    // Initialize output vector and STM
//    std::pair< Eigen::MatrixXd, double > outputVector;
//    std::pair< Eigen::MatrixXd, double > previousOutputVector;
//    Eigen::MatrixXd initialStateVectorInclSTM = Eigen::MatrixXd::Zero( 6, 7 );
//    Eigen::MatrixXd identityMatrix            = Eigen::MatrixXd::Identity(6, 6);
//    initialStateVectorInclSTM.block( 0, 0, 6, 1 )  = initialStateVector;
//    initialStateVectorInclSTM.block( 0, 1, 6, 6 ) = identityMatrix;

////    remove(("../data/raw/L" + std::to_string(librationPointNr) + "_" + orbitType + "_" + std::to_string(orbitId) + ".txt").c_str());
////    std::ofstream textFileOrbit(("../data/raw/L" + std::to_string(librationPointNr) + "_" + orbitType + "_" + std::to_string(orbitId) + ".txt").c_str());
//    std::string fileNameString;


//    // Prepare output file
//    if (saveEveryNthIntegrationStep != 1000){
//        if (completeInitialConditionsHaloFamily == false){
//            fileNameString = ("../data/raw/orbits/L" + std::to_string(librationPointNr) + "_" + orbitType + "_" + std::to_string(orbitId) + "_" + std::to_string(saveEveryNthIntegrationStep) + ".txt");
//        } else {
//            fileNameString = ("../data/raw/orbits/L" + std::to_string(librationPointNr) + "_" + orbitType + "_n_" + std::to_string(orbitId) + "_" + std::to_string(saveEveryNthIntegrationStep) + ".txt");
//        }
//    } else {
//        if (completeInitialConditionsHaloFamily == false){
//            fileNameString = ("../data/raw/orbits/L" + std::to_string(librationPointNr) + "_" + orbitType + "_" + std::to_string(orbitId) + ".txt");
//        } else {
//            fileNameString = ("../data/raw/orbits/L" + std::to_string(librationPointNr) + "_" + orbitType + "_n_" + std::to_string(orbitId) + ".txt");
//        }
//    }
//    //remove(fileNameString);
//    std::ofstream textFileOrbit(fileNameString);

//    std::cout<<"REAL STREAM IS OPEN "<<textFileOrbit.is_open( )<<std::endl;

//    textFileOrbit.precision(std::numeric_limits<double>::digits10);

//    // Write initial state to file
//    textFileOrbit << std::left << std::scientific << std::setw(25) << 0.0                          << std::setw(25)
//                  << initialStateVectorInclSTM(0) << std::setw(25) << initialStateVectorInclSTM(1) << std::setw(25)
//                  << initialStateVectorInclSTM(2) << std::setw(25) << initialStateVectorInclSTM(3) << std::setw(25)
//                  << initialStateVectorInclSTM(4) << std::setw(25) << initialStateVectorInclSTM(5) << std::endl;

//    // Perform first integration step
//    outputVector                       = propagateOrbit( initialStateVectorInclSTM, massParameter, 0.0, 1.0 );
//    Eigen::MatrixXd stateVectorInclSTM = outputVector.first;
//    double currentTime                 = outputVector.second;

//    int count = 1;

//    // Perform integration steps until end of orbital period
//    for (int i = 5; i <= 12; i++) {

//        double initialStepSize = pow(10,(static_cast<float>(-i)));
//        double maximumStepSize = pow(10,(static_cast<float>(-i) + 1.0));

//        while (currentTime <= orbitalPeriod)
//        {
//            stateVectorInclSTM      = outputVector.first;
//            currentTime             = outputVector.second;
//            previousOutputVector    = outputVector;

//            // Write every nth integration step to file.
//            if (count % saveEveryNthIntegrationStep == 0) {
//                textFileOrbit << std::left << std::scientific << std::setw(25) << currentTime           << std::setw(25)
//                              << stateVectorInclSTM(0, 0 )        << std::setw(25) << stateVectorInclSTM(1, 0 ) << std::setw(25)
//                              << stateVectorInclSTM(2, 0 )        << std::setw(25) << stateVectorInclSTM(3, 0 ) << std::setw(25)
//                              << stateVectorInclSTM(4, 0 )        << std::setw(25) << stateVectorInclSTM(5, 0 ) << std::endl;
//            }

//            // Propagate to next time step
//            outputVector         = propagateOrbit(stateVectorInclSTM, massParameter, currentTime, 1.0, initialStepSize, maximumStepSize);

//            if (outputVector.second > orbitalPeriod) {
//                outputVector = previousOutputVector;
//                break;
//            }
//            count += 1;
//        }
//    }

//    // Save last integration step
//    textFileOrbit << std::left << std::scientific << std::setw(25) << currentTime           << std::setw(25)
//                  << stateVectorInclSTM(0, 0 )        << std::setw(25) << stateVectorInclSTM(1, 0 ) << std::setw(25)
//                  << stateVectorInclSTM(2, 0 )        << std::setw(25) << stateVectorInclSTM(3, 0 ) << std::setw(25)
//                  << stateVectorInclSTM(4, 0 )        << std::setw(25) << stateVectorInclSTM(5, 0 ) << std::endl;

//    // Close orbit file and clear the variable for the next orbit
//    textFileOrbit.close();
//    textFileOrbit.clear();

//    return stateVectorInclSTM;
}
