//==============================================================================
// Copyright (c) 2015-2021 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for GL GFX103 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_GL_GFX103
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_GL_GFX103

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for GLGfx103 Public counter index
#define GPUTIME_PUBLIC_GL_GFX103 0
#define GPUBUSY_PUBLIC_GL_GFX103 1
#define GPUBUSYCYCLES_PUBLIC_GL_GFX103 2
#define VSBUSY_PUBLIC_GL_GFX103 3
#define VSBUSYCYCLES_PUBLIC_GL_GFX103 4
#define VSTIME_PUBLIC_GL_GFX103 5
#define HSBUSY_PUBLIC_GL_GFX103 6
#define HSBUSYCYCLES_PUBLIC_GL_GFX103 7
#define HSTIME_PUBLIC_GL_GFX103 8
#define DSBUSY_PUBLIC_GL_GFX103 9
#define DSBUSYCYCLES_PUBLIC_GL_GFX103 10
#define DSTIME_PUBLIC_GL_GFX103 11
#define PSBUSY_PUBLIC_GL_GFX103 12
#define PSBUSYCYCLES_PUBLIC_GL_GFX103 13
#define PSTIME_PUBLIC_GL_GFX103 14
#define CSBUSY_PUBLIC_GL_GFX103 15
#define CSBUSYCYCLES_PUBLIC_GL_GFX103 16
#define CSTIME_PUBLIC_GL_GFX103 17
#define VSVERTICESIN_PUBLIC_GL_GFX103 18
#define VSVALUINSTCOUNT_PUBLIC_GL_GFX103 19
#define VSSALUINSTCOUNT_PUBLIC_GL_GFX103 20
#define VSVALUBUSY_PUBLIC_GL_GFX103 21
#define VSVALUBUSYCYCLES_PUBLIC_GL_GFX103 22
#define VSSALUBUSY_PUBLIC_GL_GFX103 23
#define VSSALUBUSYCYCLES_PUBLIC_GL_GFX103 24
#define HSPATCHES_PUBLIC_GL_GFX103 25
#define HSVALUINSTCOUNT_PUBLIC_GL_GFX103 26
#define HSSALUINSTCOUNT_PUBLIC_GL_GFX103 27
#define HSVALUBUSY_PUBLIC_GL_GFX103 28
#define HSVALUBUSYCYCLES_PUBLIC_GL_GFX103 29
#define HSSALUBUSY_PUBLIC_GL_GFX103 30
#define HSSALUBUSYCYCLES_PUBLIC_GL_GFX103 31
#define DSVERTICESIN_PUBLIC_GL_GFX103 32
#define DSVALUINSTCOUNT_PUBLIC_GL_GFX103 33
#define DSSALUINSTCOUNT_PUBLIC_GL_GFX103 34
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_GL_GFX103 35
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_GL_GFX103 36
#define PRIMITIVESIN_PUBLIC_GL_GFX103 37
#define CULLEDPRIMS_PUBLIC_GL_GFX103 38
#define CLIPPEDPRIMS_PUBLIC_GL_GFX103 39
#define PASTALLEDONRASTERIZER_PUBLIC_GL_GFX103 40
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_GL_GFX103 41
#define PSPIXELSOUT_PUBLIC_GL_GFX103 42
#define PSEXPORTSTALLS_PUBLIC_GL_GFX103 43
#define PSEXPORTSTALLSCYCLES_PUBLIC_GL_GFX103 44
#define PSVALUINSTCOUNT_PUBLIC_GL_GFX103 45
#define PSSALUINSTCOUNT_PUBLIC_GL_GFX103 46
#define PSVALUBUSY_PUBLIC_GL_GFX103 47
#define PSVALUBUSYCYCLES_PUBLIC_GL_GFX103 48
#define PSSALUBUSY_PUBLIC_GL_GFX103 49
#define PSSALUBUSYCYCLES_PUBLIC_GL_GFX103 50
#define CSTHREADGROUPS_PUBLIC_GL_GFX103 51
#define CSWAVEFRONTS_PUBLIC_GL_GFX103 52
#define CSTHREADS_PUBLIC_GL_GFX103 53
#define CSVALUINSTS_PUBLIC_GL_GFX103 54
#define CSVALUUTILIZATION_PUBLIC_GL_GFX103 55
#define CSSALUINSTS_PUBLIC_GL_GFX103 56
#define CSVFETCHINSTS_PUBLIC_GL_GFX103 57
#define CSSFETCHINSTS_PUBLIC_GL_GFX103 58
#define CSVWRITEINSTS_PUBLIC_GL_GFX103 59
#define CSVALUBUSY_PUBLIC_GL_GFX103 60
#define CSVALUBUSYCYCLES_PUBLIC_GL_GFX103 61
#define CSSALUBUSY_PUBLIC_GL_GFX103 62
#define CSSALUBUSYCYCLES_PUBLIC_GL_GFX103 63
#define CSMEMUNITBUSY_PUBLIC_GL_GFX103 64
#define CSMEMUNITBUSYCYCLES_PUBLIC_GL_GFX103 65
#define CSMEMUNITSTALLED_PUBLIC_GL_GFX103 66
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_GL_GFX103 67
#define CSWRITEUNITSTALLED_PUBLIC_GL_GFX103 68
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_GL_GFX103 69
#define CSGDSINSTS_PUBLIC_GL_GFX103 70
#define CSLDSINSTS_PUBLIC_GL_GFX103 71
#define CSALUSTALLEDBYLDS_PUBLIC_GL_GFX103 72
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_GL_GFX103 73
#define CSLDSBANKCONFLICT_PUBLIC_GL_GFX103 74
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_GL_GFX103 75
#define TEXUNITBUSY_PUBLIC_GL_GFX103 76
#define TEXUNITBUSYCYCLES_PUBLIC_GL_GFX103 77
#define TEXAVEANISOTROPY_PUBLIC_GL_GFX103 78
#define DEPTHSTENCILTESTBUSY_PUBLIC_GL_GFX103 79
#define DEPTHSTENCILTESTBUSYCOUNT_PUBLIC_GL_GFX103 80
#define HIZTILESACCEPTED_PUBLIC_GL_GFX103 81
#define HIZTILESACCEPTEDCOUNT_PUBLIC_GL_GFX103 82
#define HIZTILESREJECTEDCOUNT_PUBLIC_GL_GFX103 83
#define PREZTILESDETAILCULLED_PUBLIC_GL_GFX103 84
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_GL_GFX103 85
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_GL_GFX103 86
#define HIZQUADSCULLED_PUBLIC_GL_GFX103 87
#define HIZQUADSCULLEDCOUNT_PUBLIC_GL_GFX103 88
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_GL_GFX103 89
#define PREZQUADSCULLED_PUBLIC_GL_GFX103 90
#define PREZQUADSCULLEDCOUNT_PUBLIC_GL_GFX103 91
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_GL_GFX103 92
#define POSTZQUADS_PUBLIC_GL_GFX103 93
#define POSTZQUADCOUNT_PUBLIC_GL_GFX103 94
#define PREZSAMPLESPASSING_PUBLIC_GL_GFX103 95
#define PREZSAMPLESFAILINGS_PUBLIC_GL_GFX103 96
#define PREZSAMPLESFAILINGZ_PUBLIC_GL_GFX103 97
#define POSTZSAMPLESPASSING_PUBLIC_GL_GFX103 98
#define POSTZSAMPLESFAILINGS_PUBLIC_GL_GFX103 99
#define POSTZSAMPLESFAILINGZ_PUBLIC_GL_GFX103 100
#define ZUNITSTALLED_PUBLIC_GL_GFX103 101
#define ZUNITSTALLEDCYCLES_PUBLIC_GL_GFX103 102
#define DBMEMREAD_PUBLIC_GL_GFX103 103
#define DBMEMWRITTEN_PUBLIC_GL_GFX103 104
#define CBMEMREAD_PUBLIC_GL_GFX103 105
#define CBCOLORANDMASKREAD_PUBLIC_GL_GFX103 106
#define CBMEMWRITTEN_PUBLIC_GL_GFX103 107
#define CBCOLORANDMASKWRITTEN_PUBLIC_GL_GFX103 108
#define CBSLOWPIXELPCT_PUBLIC_GL_GFX103 109
#define CBSLOWPIXELCOUNT_PUBLIC_GL_GFX103 110
#define L0CACHEHIT_PUBLIC_GL_GFX103 111
#define L0CACHEREQUESTCOUNT_PUBLIC_GL_GFX103 112
#define L0CACHEHITCOUNT_PUBLIC_GL_GFX103 113
#define L0CACHEMISSCOUNT_PUBLIC_GL_GFX103 114
#define L1CACHEHIT_PUBLIC_GL_GFX103 115
#define L1CACHEREQUESTCOUNT_PUBLIC_GL_GFX103 116
#define L1CACHEHITCOUNT_PUBLIC_GL_GFX103 117
#define L1CACHEMISSCOUNT_PUBLIC_GL_GFX103 118
#define L2CACHEHIT_PUBLIC_GL_GFX103 119
#define L2CACHEMISS_PUBLIC_GL_GFX103 120
#define L2CACHEREQUESTCOUNT_PUBLIC_GL_GFX103 121
#define L2CACHEHITCOUNT_PUBLIC_GL_GFX103 122
#define L2CACHEMISSCOUNT_PUBLIC_GL_GFX103 123
#define FETCHSIZE_PUBLIC_GL_GFX103 124
#define WRITESIZE_PUBLIC_GL_GFX103 125
#define MEMUNITBUSY_PUBLIC_GL_GFX103 126
#define MEMUNITBUSYCYCLES_PUBLIC_GL_GFX103 127
#define MEMUNITSTALLED_PUBLIC_GL_GFX103 128
#define MEMUNITSTALLEDCYCLES_PUBLIC_GL_GFX103 129
#define WRITEUNITSTALLED_PUBLIC_GL_GFX103 130
#define WRITEUNITSTALLEDCYCLES_PUBLIC_GL_GFX103 131

/// Number of public counters for GL GFX103 
const size_t kGlGfx103PublicCounterCount = 132;

/// Array of public counters for GL GFX103 
extern const GpaCounterDesc kGlGfx103PublicCounters[kGlGfx103PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_GL_GFX103