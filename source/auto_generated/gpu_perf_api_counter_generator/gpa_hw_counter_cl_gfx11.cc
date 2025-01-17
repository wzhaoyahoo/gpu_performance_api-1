//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX11.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx11.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_exposed_counters_gfx11.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_cl_gfx11.h"

// This file is autogenerated by the ConvertHWEnums project

// clang-format off

namespace counter_cl_gfx11
{
    using namespace counter_gfx11;

    std::vector<std::vector<GpaHardwareCounterDesc>*> kClExposedCountersGroupArrayGfx11 = {
        &kCb0ExposedCountersGfx11,
        &kCb1ExposedCountersGfx11,
        &kCb2ExposedCountersGfx11,
        &kCb3ExposedCountersGfx11,
        &kCpfExposedCountersGfx11,
        &kDb0ExposedCountersGfx11,
        &kDb1ExposedCountersGfx11,
        &kDb2ExposedCountersGfx11,
        &kDb3ExposedCountersGfx11,
        &kGrbmExposedCountersGfx11,
        &kPaSu0ExposedCountersGfx11,
        &kPaSc0ExposedCountersGfx11,
        &kPaSc1ExposedCountersGfx11,
        &kSpi0ExposedCountersGfx11,
        &kSqg0ExposedCountersGfx11,
        &kSqgGs0ExposedCountersGfx11,
        &kSqgPs0ExposedCountersGfx11,
        &kSqgHs0ExposedCountersGfx11,
        &kSqgCs0ExposedCountersGfx11,
        &kSx0ExposedCountersGfx11,
        &kTa0ExposedCountersGfx11,
        &kTa1ExposedCountersGfx11,
        &kTa2ExposedCountersGfx11,
        &kTa3ExposedCountersGfx11,
        &kTa4ExposedCountersGfx11,
        &kTa5ExposedCountersGfx11,
        &kTa6ExposedCountersGfx11,
        &kTa7ExposedCountersGfx11,
        &kTa8ExposedCountersGfx11,
        &kTa9ExposedCountersGfx11,
        &kTa10ExposedCountersGfx11,
        &kTa11ExposedCountersGfx11,
        &kTa12ExposedCountersGfx11,
        &kTa13ExposedCountersGfx11,
        &kTa14ExposedCountersGfx11,
        &kTa15ExposedCountersGfx11,
        &kTd0ExposedCountersGfx11,
        &kTd1ExposedCountersGfx11,
        &kTd2ExposedCountersGfx11,
        &kTd3ExposedCountersGfx11,
        &kTd4ExposedCountersGfx11,
        &kTd5ExposedCountersGfx11,
        &kTd6ExposedCountersGfx11,
        &kTd7ExposedCountersGfx11,
        &kTd8ExposedCountersGfx11,
        &kTd9ExposedCountersGfx11,
        &kTd10ExposedCountersGfx11,
        &kTd11ExposedCountersGfx11,
        &kTd12ExposedCountersGfx11,
        &kTd13ExposedCountersGfx11,
        &kTd14ExposedCountersGfx11,
        &kTd15ExposedCountersGfx11,
        &kTcp0ExposedCountersGfx11,
        &kTcp1ExposedCountersGfx11,
        &kTcp2ExposedCountersGfx11,
        &kTcp3ExposedCountersGfx11,
        &kTcp4ExposedCountersGfx11,
        &kTcp5ExposedCountersGfx11,
        &kTcp6ExposedCountersGfx11,
        &kTcp7ExposedCountersGfx11,
        &kTcp8ExposedCountersGfx11,
        &kTcp9ExposedCountersGfx11,
        &kTcp10ExposedCountersGfx11,
        &kTcp11ExposedCountersGfx11,
        &kTcp12ExposedCountersGfx11,
        &kTcp13ExposedCountersGfx11,
        &kTcp14ExposedCountersGfx11,
        &kTcp15ExposedCountersGfx11,
        &kGcea0ExposedCountersGfx11,
        &kGcea1ExposedCountersGfx11,
        &kGcea2ExposedCountersGfx11,
        &kGcea3ExposedCountersGfx11,
        &kGcea4ExposedCountersGfx11,
        &kGcea5ExposedCountersGfx11,
        &kGcea6ExposedCountersGfx11,
        &kGcea7ExposedCountersGfx11,
        &kGcea8ExposedCountersGfx11,
        &kGcea9ExposedCountersGfx11,
        &kGcea10ExposedCountersGfx11,
        &kGcea11ExposedCountersGfx11,
        &kGcea12ExposedCountersGfx11,
        &kGcea13ExposedCountersGfx11,
        &kGcea14ExposedCountersGfx11,
        &kGcea15ExposedCountersGfx11,
        &kGcea16ExposedCountersGfx11,
        &kGcea17ExposedCountersGfx11,
        &kGcea18ExposedCountersGfx11,
        &kGcea19ExposedCountersGfx11,
        &kGcea20ExposedCountersGfx11,
        &kGcea21ExposedCountersGfx11,
        &kGcea22ExposedCountersGfx11,
        &kGcea23ExposedCountersGfx11,
        &kGl1c0ExposedCountersGfx11,
        &kGl2c0ExposedCountersGfx11,
        &kGl2c1ExposedCountersGfx11,
        &kGl2c2ExposedCountersGfx11,
        &kGl2c3ExposedCountersGfx11,
        &kGl2c4ExposedCountersGfx11,
        &kGl2c5ExposedCountersGfx11,
        &kGl2c6ExposedCountersGfx11,
        &kGl2c7ExposedCountersGfx11,
        &kGl2c8ExposedCountersGfx11,
        &kGl2c9ExposedCountersGfx11,
        &kGl2c10ExposedCountersGfx11,
        &kGl2c11ExposedCountersGfx11,
        &kGl2c12ExposedCountersGfx11,
        &kGl2c13ExposedCountersGfx11,
        &kGl2c14ExposedCountersGfx11,
        &kGl2c15ExposedCountersGfx11,
        &kGl2c16ExposedCountersGfx11,
        &kGl2c17ExposedCountersGfx11,
        &kGl2c18ExposedCountersGfx11,
        &kGl2c19ExposedCountersGfx11,
        &kGl2c20ExposedCountersGfx11,
        &kGl2c21ExposedCountersGfx11,
        &kGl2c22ExposedCountersGfx11,
        &kGl2c23ExposedCountersGfx11,
        &kSqwgp0ExposedCountersGfx11,
        &kSqwgp1ExposedCountersGfx11,
        &kSqwgp2ExposedCountersGfx11,
        &kSqwgp3ExposedCountersGfx11,
        &kSqwgp4ExposedCountersGfx11,
        &kSqwgp5ExposedCountersGfx11,
        &kSqwgp6ExposedCountersGfx11,
        &kSqwgp7ExposedCountersGfx11,
        &kSqwgpGs0ExposedCountersGfx11,
        &kSqwgpGs1ExposedCountersGfx11,
        &kSqwgpGs2ExposedCountersGfx11,
        &kSqwgpGs3ExposedCountersGfx11,
        &kSqwgpGs4ExposedCountersGfx11,
        &kSqwgpGs5ExposedCountersGfx11,
        &kSqwgpGs6ExposedCountersGfx11,
        &kSqwgpGs7ExposedCountersGfx11,
        &kSqwgpPs0ExposedCountersGfx11,
        &kSqwgpPs1ExposedCountersGfx11,
        &kSqwgpPs2ExposedCountersGfx11,
        &kSqwgpPs3ExposedCountersGfx11,
        &kSqwgpPs4ExposedCountersGfx11,
        &kSqwgpPs5ExposedCountersGfx11,
        &kSqwgpPs6ExposedCountersGfx11,
        &kSqwgpPs7ExposedCountersGfx11,
        &kSqwgpHs0ExposedCountersGfx11,
        &kSqwgpHs1ExposedCountersGfx11,
        &kSqwgpHs2ExposedCountersGfx11,
        &kSqwgpHs3ExposedCountersGfx11,
        &kSqwgpHs4ExposedCountersGfx11,
        &kSqwgpHs5ExposedCountersGfx11,
        &kSqwgpHs6ExposedCountersGfx11,
        &kSqwgpHs7ExposedCountersGfx11,
        &kSqwgpCs0ExposedCountersGfx11,
        &kSqwgpCs1ExposedCountersGfx11,
        &kSqwgpCs2ExposedCountersGfx11,
        &kSqwgpCs3ExposedCountersGfx11,
        &kSqwgpCs4ExposedCountersGfx11,
        &kSqwgpCs5ExposedCountersGfx11,
        &kSqwgpCs6ExposedCountersGfx11,
        &kSqwgpCs7ExposedCountersGfx11,
    };

    std::vector<GpaCounterGroupDesc> kHwClGroupsGfx11 = {
        {0, "CB0", 0, 314, 4, 0},
        {1, "CB1", 1, 314, 4, 0},
        {2, "CB2", 2, 314, 4, 0},
        {3, "CB3", 3, 314, 4, 0},
        {4, "CPF", 0, 44, 2, 0},
        {5, "DB0", 0, 388, 4, 0},
        {6, "DB1", 1, 388, 4, 0},
        {7, "DB2", 2, 388, 4, 0},
        {8, "DB3", 3, 388, 4, 0},
        {9, "GRBM", 0, 50, 2, 0},
        {10, "GRBMSE", 0, 21, 1, 0},
        {11, "PA_SU", 0, 311, 4, 0},
        {12, "PA_SC0", 0, 665, 8, 0},
        {13, "PA_SC1", 1, 665, 8, 0},
        {14, "SPI", 0, 284, 6, 0},
        {15, "SQG", 0, 37, 8, 0},
        {16, "SQG_GS", 0, 37, 8, 0},
        {17, "SQG_PS", 0, 37, 8, 0},
        {18, "SQG_HS", 0, 37, 8, 0},
        {19, "SQG_CS", 0, 37, 8, 0},
        {20, "SX", 0, 82, 4, 0},
        {21, "TA0", 0, 236, 2, 0},
        {22, "TA1", 1, 236, 2, 0},
        {23, "TA2", 2, 236, 2, 0},
        {24, "TA3", 3, 236, 2, 0},
        {25, "TA4", 4, 236, 2, 0},
        {26, "TA5", 5, 236, 2, 0},
        {27, "TA6", 6, 236, 2, 0},
        {28, "TA7", 7, 236, 2, 0},
        {29, "TA8", 8, 236, 2, 0},
        {30, "TA9", 9, 236, 2, 0},
        {31, "TA10", 10, 236, 2, 0},
        {32, "TA11", 11, 236, 2, 0},
        {33, "TA12", 12, 236, 2, 0},
        {34, "TA13", 13, 236, 2, 0},
        {35, "TA14", 14, 236, 2, 0},
        {36, "TA15", 15, 236, 2, 0},
        {37, "TD0", 0, 197, 2, 0},
        {38, "TD1", 1, 197, 2, 0},
        {39, "TD2", 2, 197, 2, 0},
        {40, "TD3", 3, 197, 2, 0},
        {41, "TD4", 4, 197, 2, 0},
        {42, "TD5", 5, 197, 2, 0},
        {43, "TD6", 6, 197, 2, 0},
        {44, "TD7", 7, 197, 2, 0},
        {45, "TD8", 8, 197, 2, 0},
        {46, "TD9", 9, 197, 2, 0},
        {47, "TD10", 10, 197, 2, 0},
        {48, "TD11", 11, 197, 2, 0},
        {49, "TD12", 12, 197, 2, 0},
        {50, "TD13", 13, 197, 2, 0},
        {51, "TD14", 14, 197, 2, 0},
        {52, "TD15", 15, 197, 2, 0},
        {53, "TCP0", 0, 78, 4, 0},
        {54, "TCP1", 1, 78, 4, 0},
        {55, "TCP2", 2, 78, 4, 0},
        {56, "TCP3", 3, 78, 4, 0},
        {57, "TCP4", 4, 78, 4, 0},
        {58, "TCP5", 5, 78, 4, 0},
        {59, "TCP6", 6, 78, 4, 0},
        {60, "TCP7", 7, 78, 4, 0},
        {61, "TCP8", 8, 78, 4, 0},
        {62, "TCP9", 9, 78, 4, 0},
        {63, "TCP10", 10, 78, 4, 0},
        {64, "TCP11", 11, 78, 4, 0},
        {65, "TCP12", 12, 78, 4, 0},
        {66, "TCP13", 13, 78, 4, 0},
        {67, "TCP14", 14, 78, 4, 0},
        {68, "TCP15", 15, 78, 4, 0},
        {69, "GDS", 0, 148, 4, 0},
        {70, "CPG", 0, 92, 2, 0},
        {71, "CPC", 0, 56, 2, 0},
        {72, "GCVML2", 0, 91, 8, 0},
        {73, "GCEA0", 0, 98, 2, 0},
        {74, "GCEA1", 1, 98, 2, 0},
        {75, "GCEA2", 2, 98, 2, 0},
        {76, "GCEA3", 3, 98, 2, 0},
        {77, "GCEA4", 4, 98, 2, 0},
        {78, "GCEA5", 5, 98, 2, 0},
        {79, "GCEA6", 6, 98, 2, 0},
        {80, "GCEA7", 7, 98, 2, 0},
        {81, "GCEA8", 8, 98, 2, 0},
        {82, "GCEA9", 9, 98, 2, 0},
        {83, "GCEA10", 10, 98, 2, 0},
        {84, "GCEA11", 11, 98, 2, 0},
        {85, "GCEA12", 12, 98, 2, 0},
        {86, "GCEA13", 13, 98, 2, 0},
        {87, "GCEA14", 14, 98, 2, 0},
        {88, "GCEA15", 15, 98, 2, 0},
        {89, "GCEA16", 16, 98, 2, 0},
        {90, "GCEA17", 17, 98, 2, 0},
        {91, "GCEA18", 18, 98, 2, 0},
        {92, "GCEA19", 19, 98, 2, 0},
        {93, "GCEA20", 20, 98, 2, 0},
        {94, "GCEA21", 21, 98, 2, 0},
        {95, "GCEA22", 22, 98, 2, 0},
        {96, "GCEA23", 23, 98, 2, 0},
        {97, "RPB", 0, 64, 4, 0},
        {98, "RMI0", 0, 139, 2, 0},
        {99, "RMI1", 1, 139, 2, 0},
        {100, "GE", 0, 40, 4, 0},
        {101, "GL1A", 0, 24, 4, 0},
        {102, "GL1C", 0, 84, 4, 0},
        {103, "GL2A0", 0, 108, 4, 0},
        {104, "GL2A1", 1, 108, 4, 0},
        {105, "GL2A2", 2, 108, 4, 0},
        {106, "GL2A3", 3, 108, 4, 0},
        {107, "GL2C0", 0, 259, 4, 0},
        {108, "GL2C1", 1, 259, 4, 0},
        {109, "GL2C2", 2, 259, 4, 0},
        {110, "GL2C3", 3, 259, 4, 0},
        {111, "GL2C4", 4, 259, 4, 0},
        {112, "GL2C5", 5, 259, 4, 0},
        {113, "GL2C6", 6, 259, 4, 0},
        {114, "GL2C7", 7, 259, 4, 0},
        {115, "GL2C8", 8, 259, 4, 0},
        {116, "GL2C9", 9, 259, 4, 0},
        {117, "GL2C10", 10, 259, 4, 0},
        {118, "GL2C11", 11, 259, 4, 0},
        {119, "GL2C12", 12, 259, 4, 0},
        {120, "GL2C13", 13, 259, 4, 0},
        {121, "GL2C14", 14, 259, 4, 0},
        {122, "GL2C15", 15, 259, 4, 0},
        {123, "GL2C16", 16, 259, 4, 0},
        {124, "GL2C17", 17, 259, 4, 0},
        {125, "GL2C18", 18, 259, 4, 0},
        {126, "GL2C19", 19, 259, 4, 0},
        {127, "GL2C20", 20, 259, 4, 0},
        {128, "GL2C21", 21, 259, 4, 0},
        {129, "GL2C22", 22, 259, 4, 0},
        {130, "GL2C23", 23, 259, 4, 0},
        {131, "CHA", 0, 40, 4, 0},
        {132, "CHC", 0, 44, 4, 0},
        {133, "CHCG", 0, 44, 4, 0},
        {134, "GUS", 0, 176, 2, 0},
        {135, "GCR", 0, 155, 2, 0},
        {136, "PA_PH", 0, 1024, 8, 0},
        {137, "UTCL1", 0, 66, 2, 0},
        {138, "SQWGP0", 0, 512, 8, 0},
        {139, "SQWGP1", 1, 512, 8, 0},
        {140, "SQWGP2", 2, 512, 8, 0},
        {141, "SQWGP3", 3, 512, 8, 0},
        {142, "SQWGP4", 4, 512, 8, 0},
        {143, "SQWGP5", 5, 512, 8, 0},
        {144, "SQWGP6", 6, 512, 8, 0},
        {145, "SQWGP7", 7, 512, 8, 0},
        {146, "SQWGP_GS0", 0, 512, 8, 0},
        {147, "SQWGP_GS1", 1, 512, 8, 0},
        {148, "SQWGP_GS2", 2, 512, 8, 0},
        {149, "SQWGP_GS3", 3, 512, 8, 0},
        {150, "SQWGP_GS4", 4, 512, 8, 0},
        {151, "SQWGP_GS5", 5, 512, 8, 0},
        {152, "SQWGP_GS6", 6, 512, 8, 0},
        {153, "SQWGP_GS7", 7, 512, 8, 0},
        {154, "SQWGP_PS0", 0, 512, 8, 0},
        {155, "SQWGP_PS1", 1, 512, 8, 0},
        {156, "SQWGP_PS2", 2, 512, 8, 0},
        {157, "SQWGP_PS3", 3, 512, 8, 0},
        {158, "SQWGP_PS4", 4, 512, 8, 0},
        {159, "SQWGP_PS5", 5, 512, 8, 0},
        {160, "SQWGP_PS6", 6, 512, 8, 0},
        {161, "SQWGP_PS7", 7, 512, 8, 0},
        {162, "SQWGP_HS0", 0, 512, 8, 0},
        {163, "SQWGP_HS1", 1, 512, 8, 0},
        {164, "SQWGP_HS2", 2, 512, 8, 0},
        {165, "SQWGP_HS3", 3, 512, 8, 0},
        {166, "SQWGP_HS4", 4, 512, 8, 0},
        {167, "SQWGP_HS5", 5, 512, 8, 0},
        {168, "SQWGP_HS6", 6, 512, 8, 0},
        {169, "SQWGP_HS7", 7, 512, 8, 0},
        {170, "SQWGP_CS0", 0, 512, 8, 0},
        {171, "SQWGP_CS1", 1, 512, 8, 0},
        {172, "SQWGP_CS2", 2, 512, 8, 0},
        {173, "SQWGP_CS3", 3, 512, 8, 0},
        {174, "SQWGP_CS4", 4, 512, 8, 0},
        {175, "SQWGP_CS5", 5, 512, 8, 0},
        {176, "SQWGP_CS6", 6, 512, 8, 0},
        {177, "SQWGP_CS7", 7, 512, 8, 0},
    };

    GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx11[] = {
        {0, 0, {5, 19, 21, 30, 32}},
        {1, 314, {5, 19, 21, 30, 32}},
        {2, 628, {5, 19, 21, 30, 32}},
        {3, 942, {5, 19, 21, 30, 32}},
        {4, 1256, {0, 24}},
        {5, 1300, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 1688, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2076, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 2464, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 2852, {0, 2}},
        {11, 2923, {14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 3234, {159, 235, 259}},
        {13, 3899, {159, 235, 259}},
        {14, 4564, {2, 5, 22, 27, 38, 39, 42, 46, 47, 50, 57, 58, 59, 60, 73, 74, 75, 76}},
        {15, 4848, {20, 21, 24}},
        {16, 4885, {20, 21, 24}},
        {17, 4922, {20, 21, 24}},
        {18, 4959, {20, 21, 24}},
        {19, 4996, {20, 21, 24}},
        {20, 5033, {12, 14, 17, 19, 22, 24, 27, 29}},
        {21, 5115, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {22, 5351, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {23, 5587, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {24, 5823, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {25, 6059, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {26, 6295, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {27, 6531, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {28, 6767, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {29, 7003, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {30, 7239, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {31, 7475, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {32, 7711, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {33, 7947, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {34, 8183, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {35, 8419, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {36, 8655, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {37, 8891, {82, 116, 117, 118}},
        {38, 9088, {82, 116, 117, 118}},
        {39, 9285, {82, 116, 117, 118}},
        {40, 9482, {82, 116, 117, 118}},
        {41, 9679, {82, 116, 117, 118}},
        {42, 9876, {82, 116, 117, 118}},
        {43, 10073, {82, 116, 117, 118}},
        {44, 10270, {82, 116, 117, 118}},
        {45, 10467, {82, 116, 117, 118}},
        {46, 10664, {82, 116, 117, 118}},
        {47, 10861, {82, 116, 117, 118}},
        {48, 11058, {82, 116, 117, 118}},
        {49, 11255, {82, 116, 117, 118}},
        {50, 11452, {82, 116, 117, 118}},
        {51, 11649, {82, 116, 117, 118}},
        {52, 11846, {82, 116, 117, 118}},
        {53, 12043, {9, 17, 39}},
        {54, 12121, {9, 17, 39}},
        {55, 12199, {9, 17, 39}},
        {56, 12277, {9, 17, 39}},
        {57, 12355, {9, 17, 39}},
        {58, 12433, {9, 17, 39}},
        {59, 12511, {9, 17, 39}},
        {60, 12589, {9, 17, 39}},
        {61, 12667, {9, 17, 39}},
        {62, 12745, {9, 17, 39}},
        {63, 12823, {9, 17, 39}},
        {64, 12901, {9, 17, 39}},
        {65, 12979, {9, 17, 39}},
        {66, 13057, {9, 17, 39}},
        {67, 13135, {9, 17, 39}},
        {68, 13213, {9, 17, 39}},
        {73, 13678, {55, 57}},
        {74, 13776, {55, 57}},
        {75, 13874, {55, 57}},
        {76, 13972, {55, 57}},
        {77, 14070, {55, 57}},
        {78, 14168, {55, 57}},
        {79, 14266, {55, 57}},
        {80, 14364, {55, 57}},
        {81, 14462, {55, 57}},
        {82, 14560, {55, 57}},
        {83, 14658, {55, 57}},
        {84, 14756, {55, 57}},
        {85, 14854, {55, 57}},
        {86, 14952, {55, 57}},
        {87, 15050, {55, 57}},
        {88, 15148, {55, 57}},
        {89, 15246, {55, 57}},
        {90, 15344, {55, 57}},
        {91, 15442, {55, 57}},
        {92, 15540, {55, 57}},
        {93, 15638, {55, 57}},
        {94, 15736, {55, 57}},
        {95, 15834, {55, 57}},
        {96, 15932, {55, 57}},
        {102, 16436, {14, 18}},
        {107, 16952, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {108, 17211, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {109, 17470, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {110, 17729, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {111, 17988, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {112, 18247, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {113, 18506, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {114, 18765, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {115, 19024, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {116, 19283, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {117, 19542, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {118, 19801, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {119, 20060, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {120, 20319, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {121, 20578, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {122, 20837, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {123, 21096, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {124, 21355, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {125, 21614, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {126, 21873, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {127, 22132, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {128, 22391, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {129, 22650, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {130, 22909, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {138, 24717, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {139, 25229, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {140, 25741, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {141, 26253, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {142, 26765, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {143, 27277, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {144, 27789, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {145, 28301, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {146, 28813, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {147, 29325, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {148, 29837, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {149, 30349, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {150, 30861, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {151, 31373, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {152, 31885, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {153, 32397, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {154, 32909, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {155, 33421, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {156, 33933, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {157, 34445, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {158, 34957, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {159, 35469, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {160, 35981, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {161, 36493, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {162, 37005, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {163, 37517, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {164, 38029, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {165, 38541, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {166, 39053, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {167, 39565, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {168, 40077, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {169, 40589, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {170, 41101, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {171, 41613, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {172, 42125, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {173, 42637, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {174, 43149, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {175, 43661, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {176, 44173, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
        {177, 44685, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
    };

    GpaPaddedCounterDesc kClPaddedCounterByGroupGfx11[] = {
    {}
    };

    GpaSqCounterGroupDesc kHwClSqGroupsGfx11[] = {
        {15, 0, kSqAll},
        {16, 0, kSqGs},
        {17, 0, kSqPs},
        {18, 0, kSqHs},
        {19, 0, kSqCs},
        {138, 0, kSqAll},
        {139, 1, kSqAll},
        {140, 2, kSqAll},
        {141, 3, kSqAll},
        {142, 4, kSqAll},
        {143, 5, kSqAll},
        {144, 6, kSqAll},
        {145, 7, kSqAll},
        {146, 0, kSqGs},
        {147, 1, kSqGs},
        {148, 2, kSqGs},
        {149, 3, kSqGs},
        {150, 4, kSqGs},
        {151, 5, kSqGs},
        {152, 6, kSqGs},
        {153, 7, kSqGs},
        {154, 0, kSqPs},
        {155, 1, kSqPs},
        {156, 2, kSqPs},
        {157, 3, kSqPs},
        {158, 4, kSqPs},
        {159, 5, kSqPs},
        {160, 6, kSqPs},
        {161, 7, kSqPs},
        {162, 0, kSqHs},
        {163, 1, kSqHs},
        {164, 2, kSqHs},
        {165, 3, kSqHs},
        {166, 4, kSqHs},
        {167, 5, kSqHs},
        {168, 6, kSqHs},
        {169, 7, kSqHs},
        {170, 0, kSqCs},
        {171, 1, kSqCs},
        {172, 2, kSqCs},
        {173, 3, kSqCs},
        {174, 4, kSqCs},
        {175, 5, kSqCs},
        {176, 6, kSqCs},
        {177, 7, kSqCs},
    };


    unsigned int kHwClSqIsolatedGroupsGfx11[] = {
        21, // Ta
        22, // Ta
        23, // Ta
        24, // Ta
        25, // Ta
        26, // Ta
        27, // Ta
        28, // Ta
        29, // Ta
        30, // Ta
        31, // Ta
        32, // Ta
        33, // Ta
        34, // Ta
        35, // Ta
        36, // Ta
        37, // Td
        38, // Td
        39, // Td
        40, // Td
        41, // Td
        42, // Td
        43, // Td
        44, // Td
        45, // Td
        46, // Td
        47, // Td
        48, // Td
        49, // Td
        50, // Td
        51, // Td
        52, // Td
        53, // Tcp
        54, // Tcp
        55, // Tcp
        56, // Tcp
        57, // Tcp
        58, // Tcp
        59, // Tcp
        60, // Tcp
        61, // Tcp
        62, // Tcp
        63, // Tcp
        64, // Tcp
        65, // Tcp
        66, // Tcp
        67, // Tcp
        68, // Tcp
    };

    const std::set<unsigned int> kHwClTimestampBlockIdsGfx11 =       {}; ///< Timestamp block id's for CL for gfx11 family
    const std::set<unsigned int> kHwClTimeCounterIndicesGfx11 =      {}; ///< Timestamp counter indices for CL for gfx11 family
    const unsigned int           kHwClGroupCountGfx11                = static_cast<unsigned int>(kHwClGroupsGfx11.size());
    const unsigned int           kHwClExposedCountersGroupCountGfx11 = 157;
    const unsigned int           kClPaddedCounterGroupCountGfx11 = 0;
    const unsigned int           kHwClSqGroupCountGfx11              = sizeof(kHwClSqGroupsGfx11) / sizeof(GpaSqCounterGroupDesc);
    const unsigned int           kHwClSqIsolatedGroupCountGfx11      = sizeof(kHwClSqIsolatedGroupsGfx11) / sizeof(unsigned int);
} //  namespace counter_cl_gfx11

// clang-format on
