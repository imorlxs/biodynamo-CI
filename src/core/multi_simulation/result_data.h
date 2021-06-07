// -----------------------------------------------------------------------------
//
// Copyright (C) 2021 CERN & Newcastle University for the benefit of the
// BioDynaMo collaboration. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// See the LICENSE file distributed with this work for details.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership.
//
// -----------------------------------------------------------------------------

#ifndef CORE_MULTI_SIMULATION_RESULT_DATA_H_
#define CORE_MULTI_SIMULATION_RESULT_DATA_H_

namespace bdm {

#include "core/analysis/error_computation/error_computation.h"

/// Base class that represents the results of a single experiment
struct ResultData {
  ResultData() {}

  virtual ~ResultData() {}

  virtual double ComputeError(ResultData* other);

 private:
  BDM_CLASS_DEF(ResultData, 1);
  /// The unique id for this result
  uint64_t result_id;
};

}  // namespace bdm

#endif  // CORE_MULTI_SIMULATION_RESULT_DATA_H_
