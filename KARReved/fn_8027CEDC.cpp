//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80065A80.hpp"
#include "fn_80065B7C.hpp"
#include "fn_80065E00.hpp"
#include "fn_8005FC08.hpp"
#include "fn_80066B34.hpp"
#include "fn_8027E574.hpp"
#include "fn_80078284.hpp"
#include "fn_80077F14.hpp"
#include "fn_800780D0.hpp"
#include "fn_8027D844.hpp"
#include "fn_8027D844.hpp"
#include "fn_8027D844.hpp"
#include "fn_8027D844.hpp"
#include "fn_8027D844.hpp"
#include "fn_8027EF58.hpp"
#include "fn_8027EDF8.hpp"
#include "fn_8027E120.hpp"



void fn_8027CEDC(PPC::Runtime::GCContext* context)
{
/*8027CEDC 00279CDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8027CEE0 00279CE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027CEE4 00279CE4*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8027CEE8 00279CE8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027CEEC 00279CEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8027CEF0 00279CF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8027CEF4 00279CF4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*8027CEF8 00279CF8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8027CEFC 00279CFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8027CF00 00279D00*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027CF04 00279D04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8027CF08 00279D08*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*8027CF0C 00279D0C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 23, 23);
/*8027CF10 00279D10*/ PPC::Runtime::ASM::beq(.L_8027CF18);
/*8027CF14 00279D14*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF18, 0x8027CF18) //this is a jump label
/*8027CF18 00279D18*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 22, 22);
/*8027CF1C 00279D1C*/ PPC::Runtime::ASM::beq(.L_8027CF28);
/*8027CF20 00279D20*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8027CF24 00279D24*/ PPC::Runtime::ASM::b(.L_8027CF9C);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF28, 0x8027CF28) //this is a jump label
/*8027CF28 00279D28*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027CF2C 00279D2C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*8027CF30 00279D30*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*8027CF34 00279D34*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 23, 23);
/*8027CF38 00279D38*/ PPC::Runtime::ASM::beq(.L_8027CF40);
/*8027CF3C 00279D3C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF40, 0x8027CF40) //this is a jump label
/*8027CF40 00279D40*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 22, 22);
/*8027CF44 00279D44*/ PPC::Runtime::ASM::beq(.L_8027CF50);
/*8027CF48 00279D48*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8027CF4C 00279D4C*/ PPC::Runtime::ASM::b(.L_8027CF9C);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF50, 0x8027CF50) //this is a jump label
/*8027CF50 00279D50*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8027CF54 00279D54*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*8027CF58 00279D58*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*8027CF5C 00279D5C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 23, 23);
/*8027CF60 00279D60*/ PPC::Runtime::ASM::beq(.L_8027CF68);
/*8027CF64 00279D64*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF68, 0x8027CF68) //this is a jump label
/*8027CF68 00279D68*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 22, 22);
/*8027CF6C 00279D6C*/ PPC::Runtime::ASM::beq(.L_8027CF78);
/*8027CF70 00279D70*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8027CF74 00279D74*/ PPC::Runtime::ASM::b(.L_8027CF9C);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF78, 0x8027CF78) //this is a jump label
/*8027CF78 00279D78*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8027CF7C 00279D7C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*8027CF80 00279D80*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*8027CF84 00279D84*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 23, 23);
/*8027CF88 00279D88*/ PPC::Runtime::ASM::beq(.L_8027CF90);
/*8027CF8C 00279D8C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF90, 0x8027CF90) //this is a jump label
/*8027CF90 00279D90*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 22, 22);
/*8027CF94 00279D94*/ PPC::Runtime::ASM::beq(.L_8027CF9C);
/*8027CF98 00279D98*/ PPC::Runtime::ASM::li(context->r5, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_8027CF9C, 0x8027CF9C) //this is a jump label
/*8027CF9C 00279D9C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*8027CFA0 00279DA0*/ PPC::Runtime::ASM::beq(.L_8027CFB8);
/*8027CFA4 00279DA4*/ PPC::Runtime::ASM::bge(.L_8027CFAC);
/*8027CFA8 00279DA8*/ PPC::Runtime::ASM::b(.L_8027CFD0);
RUNTIME_PPC_JUMP_LABEL(.L_8027CFAC, 0x8027CFAC) //this is a jump label
/*8027CFAC 00279DAC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x3);
/*8027CFB0 00279DB0*/ PPC::Runtime::ASM::bge(.L_8027CFD0);
/*8027CFB4 00279DB4*/ PPC::Runtime::ASM::b(.L_8027CFC4);
RUNTIME_PPC_JUMP_LABEL(.L_8027CFB8, 0x8027CFB8) //this is a jump label
/*8027CFB8 00279DB8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3248 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027CFBC 00279DBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8027CFC0 00279DC0*/ PPC::Runtime::ASM::b(.L_8027CFD8);
RUNTIME_PPC_JUMP_LABEL(.L_8027CFC4, 0x8027CFC4) //this is a jump label
/*8027CFC4 00279DC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3240 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027CFC8 00279DC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8027CFCC 00279DCC*/ PPC::Runtime::ASM::b(.L_8027CFD8);
RUNTIME_PPC_JUMP_LABEL(.L_8027CFD0, 0x8027CFD0) //this is a jump label
/*8027CFD0 00279DD0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3244 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027CFD4 00279DD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8027CFD8, 0x8027CFD8) //this is a jump label
/*8027CFD8 00279DD8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8027CFDC 00279DDC*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8027CFE0 00279DE0*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x44);
/*8027CFE4 00279DE4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8027CFE8 00279DE8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8027CFEC 00279DEC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8027CFF0 00279DF0*/ PPC::Runtime::ASM::beq(.L_8027D000);
/*8027CFF4 00279DF4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027CFF8 00279DF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8027CFFC 00279DFC*/ PPC::Runtime::ASM::b(.L_8027D058);
RUNTIME_PPC_JUMP_LABEL(.L_8027D000, 0x8027D000) //this is a jump label
/*8027D000 00279E00*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8027D004 00279E04*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x44);
/*8027D008 00279E08*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8027D00C 00279E0C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8027D010 00279E10*/ PPC::Runtime::ASM::beq(.L_8027D01C);
/*8027D014 00279E14*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8027D018 00279E18*/ PPC::Runtime::ASM::b(.L_8027D058);
RUNTIME_PPC_JUMP_LABEL(.L_8027D01C, 0x8027D01C) //this is a jump label
/*8027D01C 00279E1C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8027D020 00279E20*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x44);
/*8027D024 00279E24*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8027D028 00279E28*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8027D02C 00279E2C*/ PPC::Runtime::ASM::beq(.L_8027D03C);
/*8027D030 00279E30*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027D034 00279E34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8027D038 00279E38*/ PPC::Runtime::ASM::b(.L_8027D058);
RUNTIME_PPC_JUMP_LABEL(.L_8027D03C, 0x8027D03C) //this is a jump label
/*8027D03C 00279E3C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8027D040 00279E40*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x44);
/*8027D044 00279E44*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8027D048 00279E48*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8027D04C 00279E4C*/ PPC::Runtime::ASM::beq(.L_8027D058);
/*8027D050 00279E50*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027D054 00279E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8027D058, 0x8027D058) //this is a jump label
/*8027D058 00279E58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8027D05C 00279E5C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8027D060 00279E60*/ PPC::Runtime::ASM::beq(.L_8027D0FC);
/*8027D064 00279E64*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D068 00279E68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8027D06C 00279E6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8027D070 00279E70*/ PPC::Runtime::ASM::bne(.L_8027D0B4);
/*8027D074 00279E74*/ PPC::Runtime::ASM::li(context->r3, 0x20);
/*8027D078 00279E78*/ PPC::Runtime::ASM::bl(fn_80065A80);
/*8027D07C 00279E7C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D080 00279E80*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*8027D084 00279E84*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8027D088 00279E88*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D08C 00279E8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8027D090 00279E90*/ PPC::Runtime::ASM::bl(fn_80065B7C);
/*8027D094 00279E94*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D098 00279E98*/ PPC::Runtime::ASM::li(context->r4, 0x3c);
/*8027D09C 00279E9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8027D0A0 00279EA0*/ PPC::Runtime::ASM::bl(fn_80065E00);
/*8027D0A4 00279EA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8027D0A8 00279EA8*/ PPC::Runtime::ASM::li(context->r4, 0x3c);
/*8027D0AC 00279EAC*/ PPC::Runtime::ASM::bl(fn_8005FC08);
/*8027D0B0 00279EB0*/ PPC::Runtime::ASM::b(.L_8027D2B8);
RUNTIME_PPC_JUMP_LABEL(.L_8027D0B4, 0x8027D0B4) //this is a jump label
/*8027D0B4 00279EB4*/ PPC::Runtime::ASM::bl(fn_80066B34);
/*8027D0B8 00279EB8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8027D0BC 00279EBC*/ PPC::Runtime::ASM::beq(.L_8027D2B8);
/*8027D0C0 00279EC0*/ PPC::Runtime::ASM::bl(fn_8027E574);
/*8027D0C4 00279EC4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8027D0C8 00279EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8027D0CC 00279ECC*/ PPC::Runtime::ASM::bl(fn_80078284);
/*8027D0D0 00279ED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027D0D4 00279ED4*/ PPC::Runtime::ASM::bl(fn_80077F14);
/*8027D0D8 00279ED8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8027D0DC 00279EDC*/ PPC::Runtime::ASM::bne(.L_8027D2B8);
/*8027D0E0 00279EE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027D0E4 00279EE4*/ PPC::Runtime::ASM::bl(fn_800780D0);
/*8027D0E8 00279EE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8027D0EC 00279EEC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027D0F0 00279EF0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027D0F4 00279EF4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD900 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D0F8 00279EF8*/ PPC::Runtime::ASM::b(.L_8027D2B8);
RUNTIME_PPC_JUMP_LABEL(.L_8027D0FC, 0x8027D0FC) //this is a jump label
/*8027D0FC 00279EFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8027D100 00279F00*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8027D104 00279F04*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8027D108 00279F08*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8027D10C 00279F0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027D110 00279F10*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*8027D114 00279F14*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8027D118 00279F18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8027D11C 00279F1C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8027D120 00279F20*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8027D124 00279F24*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8027D128 00279F28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027D12C 00279F2C*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*8027D130 00279F30*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8027D134 00279F34*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8027D138 00279F38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8027D13C 00279F3C*/ PPC::Runtime::ASM::bge(.L_8027D264);
/*8027D140 00279F40*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8027D144 00279F44*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x58);
/*8027D148 00279F48*/ PPC::Runtime::ASM::beq(.L_8027D1A0);
/*8027D14C 00279F4C*/ PPC::Runtime::ASM::bge(.L_8027D168);
/*8027D150 00279F50*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x4d);
/*8027D154 00279F54*/ PPC::Runtime::ASM::beq(.L_8027D1B4);
/*8027D158 00279F58*/ PPC::Runtime::ASM::bge(.L_8027D1DC);
/*8027D15C 00279F5C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x2);
/*8027D160 00279F60*/ PPC::Runtime::ASM::beq(.L_8027D18C);
/*8027D164 00279F64*/ PPC::Runtime::ASM::b(.L_8027D1DC);
RUNTIME_PPC_JUMP_LABEL(.L_8027D168, 0x8027D168) //this is a jump label
/*8027D168 00279F68*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x5b);
/*8027D16C 00279F6C*/ PPC::Runtime::ASM::beq(.L_8027D180);
/*8027D170 00279F70*/ PPC::Runtime::ASM::bge(.L_8027D1DC);
/*8027D174 00279F74*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x5a);
/*8027D178 00279F78*/ PPC::Runtime::ASM::bge(.L_8027D21C);
/*8027D17C 00279F7C*/ PPC::Runtime::ASM::b(.L_8027D1C8);
RUNTIME_PPC_JUMP_LABEL(.L_8027D180, 0x8027D180) //this is a jump label
/*8027D180 00279F80*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027D184 00279F84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8027D188 00279F88*/ PPC::Runtime::ASM::b(.L_8027D2B8);
RUNTIME_PPC_JUMP_LABEL(.L_8027D18C, 0x8027D18C) //this is a jump label
/*8027D18C 00279F8C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D190 00279F90*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8027D194 00279F94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8027D198 00279F98*/ PPC::Runtime::ASM::bl(fn_8027D844);
/*8027D19C 00279F9C*/ PPC::Runtime::ASM::b(.L_8027D21C);
RUNTIME_PPC_JUMP_LABEL(.L_8027D1A0, 0x8027D1A0) //this is a jump label
/*8027D1A0 00279FA0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D1A4 00279FA4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8027D1A8 00279FA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8027D1AC 00279FAC*/ PPC::Runtime::ASM::bl(fn_8027D844);
/*8027D1B0 00279FB0*/ PPC::Runtime::ASM::b(.L_8027D21C);
RUNTIME_PPC_JUMP_LABEL(.L_8027D1B4, 0x8027D1B4) //this is a jump label
/*8027D1B4 00279FB4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D1B8 00279FB8*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8027D1BC 00279FBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8027D1C0 00279FC0*/ PPC::Runtime::ASM::bl(fn_8027D844);
/*8027D1C4 00279FC4*/ PPC::Runtime::ASM::b(.L_8027D21C);
RUNTIME_PPC_JUMP_LABEL(.L_8027D1C8, 0x8027D1C8) //this is a jump label
/*8027D1C8 00279FC8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D1CC 00279FCC*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8027D1D0 00279FD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8027D1D4 00279FD4*/ PPC::Runtime::ASM::bl(fn_8027D844);
/*8027D1D8 00279FD8*/ PPC::Runtime::ASM::b(.L_8027D21C);
RUNTIME_PPC_JUMP_LABEL(.L_8027D1DC, 0x8027D1DC) //this is a jump label
/*8027D1DC 00279FDC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D1E0 00279FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8027D1E4 00279FE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8027D1E8 00279FE8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8027D1EC 00279FEC*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*8027D1F0 00279FF0*/ PPC::Runtime::ASM::bl(fn_8027D844);
/*8027D1F4 00279FF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8027D1F8 00279FF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8027D1FC 00279FFC*/ PPC::Runtime::ASM::bne(.L_8027D20C);
/*8027D200 0027A000*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027D204 0027A004*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8027D208 0027A008*/ PPC::Runtime::ASM::b(.L_8027D21C);
RUNTIME_PPC_JUMP_LABEL(.L_8027D20C, 0x8027D20C) //this is a jump label
/*8027D20C 0027A00C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8027D210 0027A010*/ PPC::Runtime::ASM::bne(.L_8027D21C);
/*8027D214 0027A014*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8027D218 0027A018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8027D21C, 0x8027D21C) //this is a jump label
/*8027D21C 0027A01C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8027D220 0027A020*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD904 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D224 0027A024*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x2);
/*8027D228 0027A028*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x6);
/*8027D22C 0027A02C*/ PPC::Runtime::ASM::lhzx(context->r0, context->r4, context->r0);
/*8027D230 0027A030*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8027D234 0027A034*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8027D238 0027A038*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8027D23C 0027A03C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8027D240 0027A040*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8027D244 0027A044*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x59);
/*8027D248 0027A048*/ PPC::Runtime::ASM::bne(.L_8027D264);
/*8027D24C 0027A04C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D250 0027A050*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8027D254 0027A054*/ PPC::Runtime::ASM::bl(fn_8027EF58);
/*8027D258 0027A058*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8027D25C 0027A05C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x50);
/*8027D260 0027A060*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8027D264, 0x8027D264) //this is a jump label
/*8027D264 0027A064*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8027D268 0027A068*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8027D26C 0027A06C*/ PPC::Runtime::ASM::bge(.L_8027D2B8);
/*8027D270 0027A070*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D274 0027A074*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8027D278 0027A078*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8027D27C 0027A07C*/ PPC::Runtime::ASM::bl(fn_8027EDF8);
/*8027D280 0027A080*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027D284 0027A084*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8027D288 0027A088*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8027D28C 0027A08C*/ PPC::Runtime::ASM::bl(fn_8027E120);
/*8027D290 0027A090*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8027D294 0027A094*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8027D298 0027A098*/ PPC::Runtime::ASM::bne(.L_8027D2A8);
/*8027D29C 0027A09C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8027D2A0 0027A0A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8027D2A4 0027A0A4*/ PPC::Runtime::ASM::b(.L_8027D2B0);
RUNTIME_PPC_JUMP_LABEL(.L_8027D2A8, 0x8027D2A8) //this is a jump label
/*8027D2A8 0027A0A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8027D2AC 0027A0AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8027D2B0, 0x8027D2B0) //this is a jump label
/*8027D2B0 0027A0B0*/ PPC::Runtime::ASM::li(context->r0, 0x3c0);
/*8027D2B4 0027A0B4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8027D2B8, 0x8027D2B8) //this is a jump label
/*8027D2B8 0027A0B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8027D2BC 0027A0BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8027D2C0 0027A0C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027D2C4 0027A0C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8027D2C8 0027A0C8*/ PPC::Runtime::ASM::blr();
}