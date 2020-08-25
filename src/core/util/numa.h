// -----------------------------------------------------------------------------
//
// Copyright (C) The BioDynaMo Project.
// All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// See the LICENSE file distributed with this work for details.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership.
//
// -----------------------------------------------------------------------------

#ifndef CORE_UTIL_NUMA_H_
#define CORE_UTIL_NUMA_H_

#ifdef USE_NUMA

#include <numa.h>

#else

#include <cstdint>

inline int numa_available();
inline int numa_num_configured_nodes();
inline int numa_num_configured_cpus();
inline int numa_run_on_node(int);
inline int numa_node_of_cpu(int);
inline int numa_move_pages(int pid, unsigned long count, void **pages,
                           const int *nodes, int *status, int flags);
inline void *numa_alloc_onnode(uint64_t size, int nid);
inline void numa_free(void *p, uint64_t);

// on linux in <sched.h>, but missing on MacOS
inline int sched_getcpu();

#endif  // USE_NUMA

#endif  // CORE_UTIL_NUMA_H_
