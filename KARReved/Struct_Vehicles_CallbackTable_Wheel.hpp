#pragma once
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Ready_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Ready_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Ready_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Ready_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Run_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Run_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Run_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Run_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Jump_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Jump_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Jump_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Jump_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Landing_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Landing_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Landing_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Landing_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Drop_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Drop_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Drop_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Drop_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_4.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_1.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_2.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_3.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_4.hpp"



struct Struct_Vehicles_CallbackTable_Wheel
{
uint32_t 0x00000050
uint32_t 0x00000000
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitStop_4
uint32_t 0x00000050
uint32_t 0x00000000
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_4
uint32_t 0x00000050
uint32_t 0x00000000
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_WaitJump_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000000
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Adhere_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000000
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Ready_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Ready_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Ready_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Ready_4
uint32_t 0x00000055
uint32_t 0x00001024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_4
uint32_t 0x00000056
uint32_t 0x00001024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_4
uint32_t 0x00000057
uint32_t 0x00001024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushEnd_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Run_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Run_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Run_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Run_4
uint32_t 0x00000055
uint32_t 0x00001024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_4
uint32_t 0x00000056
uint32_t 0x00001024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_4
uint32_t 0x00000054
uint32_t 0x00001024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_4
uint32_t 0x00000057
uint32_t 0x00000024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000025
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Jump_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Jump_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Jump_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Jump_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000025
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_JumpPush_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Landing_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Landing_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Landing_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Landing_4
uint32_t 0x0000000E
uint32_t 0x00000024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Drop_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Drop_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Drop_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Drop_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000025
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_SuperJump_4
uint32_t 0xFFFFFFFF
uint32_t 0x00002024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRun_4
uint32_t 0x00000055
uint32_t 0x00003024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushStart_4
uint32_t 0x00000056
uint32_t 0x00003024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPush_4
uint32_t 0x00000057
uint32_t 0x00002024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailRunPushEnd_4
uint32_t 0x00000053
uint32_t 0x00002024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000026
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Gondola_4
uint32_t 0xFFFFFFFF
uint32_t 0x00000027
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Cannon_4
uint32_t 0x00000004
uint32_t 0x00000000
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_4
uint32_t 0x00000005
uint32_t 0x00000000
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_Rebirth_4
uint32_t 0x0000004F
uint32_t 0x00000024
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_1
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_2
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_3
uint32_t fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_4
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
uint32_t 0x00000000
};