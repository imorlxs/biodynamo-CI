#ifndef DEMO_BDMADAPTOR_H_
#define DEMO_BDMADAPTOR_H_

#include "cell.h"

using bdm::Cell;
using bdm::Soa;

namespace bdmAdaptor {
void Initialize(char* script);

void Finalize();

void CoProcess(Cell<Soa>& cells, double time, size_t timeStep,
               bool lastTimeStep);
}

#endif  // DEMO_BDMADAPTOR_H_
