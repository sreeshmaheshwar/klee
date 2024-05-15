//===-- SolverStats.cpp ---------------------------------------------------===//
//
//                     The KLEE Symbolic Virtual Machine
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "klee/Solver/SolverStats.h"

using namespace klee;

Statistic stats::cexCacheTime("CexCacheTime", "CCtime");
Statistic stats::solverQueries("SolverQueries", "SQ");
Statistic stats::commonConstraints("CommonConstraints", "CC");
Statistic stats::queries("Queries", "Q");
Statistic stats::queriesInvalid("QueriesInvalid", "Qiv");
Statistic stats::queriesValid("QueriesValid", "Qv");
Statistic stats::queryCacheHits("QueryCacheHits", "QChits") ;
Statistic stats::queryCacheMisses("QueryCacheMisses", "QCmisses");
Statistic stats::queryCexCacheHits("QueryCexCacheHits", "QCexHits") ;
Statistic stats::queryCexCacheMisses("QueryCexCacheMisses", "QCexMisses");
Statistic stats::queryConstructs("QueryConstructs", "QB");
Statistic stats::queryCounterexamples("QueriesCEX", "Qcex");
Statistic stats::queryTime("QueryTime", "Qtime");
Statistic stats::postLCPTime("PostLCPTime", "PLCPtime");

#ifdef KLEE_ARRAY_DEBUG
Statistic stats::arrayHashTime("ArrayHashTime", "AHtime");
#endif
