//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8003D5F0.hpp"
#include "fn_getRuleNum.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_8000A0F8.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"
#include "fn_8023077C.hpp"



void fn_8004AFC0(PPC::Runtime::GCContext* context)
{
/*8004AFC0 00047DC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8004AFC4 00047DC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004AFC8 00047DC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004AFCC 00047DCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004AFD0 00047DD0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004AFD4 00047DD4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004AFD8 00047DD8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004AFDC 00047DDC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8004AFE0 00047DE0*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*8004AFE4 00047DE4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004AFE8 00047DE8*/ PPC::Runtime::ASM::bne(.L_8004B058);
/*8004AFEC 00047DEC*/ PPC::Runtime::ASM::bl(fn_getRuleNum);
/*8004AFF0 00047DF0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004AFF4 00047DF4*/ PPC::Runtime::ASM::bne(.L_8004B044);
/*8004AFF8 00047DF8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004AFFC, 0x8004AFFC) //this is a jump label
/*8004AFFC 00047DFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004B000 00047E00*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004B004 00047E04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004B008 00047E08*/ PPC::Runtime::ASM::bne(.L_8004B024);
/*8004B00C 00047E0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004B010 00047E10*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004B014 00047E14*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004B018 00047E18*/ PPC::Runtime::ASM::beq(.L_8004B024);
/*8004B01C 00047E1C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004B020 00047E20*/ PPC::Runtime::ASM::b(.L_8004B034);
RUNTIME_PPC_JUMP_LABEL(.L_8004B024, 0x8004B024) //this is a jump label
/*8004B024 00047E24*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004B028 00047E28*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004B02C 00047E2C*/ PPC::Runtime::ASM::blt(.L_8004AFFC);
/*8004B030 00047E30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B034, 0x8004B034) //this is a jump label
/*8004B034 00047E34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004B038 00047E38*/ PPC::Runtime::ASM::beq(.L_8004B058);
/*8004B03C 00047E3C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004B040 00047E40*/ PPC::Runtime::ASM::b(.L_8004B05C);
RUNTIME_PPC_JUMP_LABEL(.L_8004B044, 0x8004B044) //this is a jump label
/*8004B044 00047E44*/ PPC::Runtime::ASM::bl(fn_8000A0F8);
/*8004B048 00047E48*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004B04C 00047E4C*/ PPC::Runtime::ASM::bgt(.L_8004B058);
/*8004B050 00047E50*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004B054 00047E54*/ PPC::Runtime::ASM::b(.L_8004B05C);
RUNTIME_PPC_JUMP_LABEL(.L_8004B058, 0x8004B058) //this is a jump label
/*8004B058 00047E58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B05C, 0x8004B05C) //this is a jump label
/*8004B05C 00047E5C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004B060 00047E60*/ PPC::Runtime::ASM::beq(.L_8004B1AC);
/*8004B064 00047E64*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B068, 0x8004B068) //this is a jump label
/*8004B068 00047E68*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B06C 00047E6C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004B070 00047E70*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004B074 00047E74*/ PPC::Runtime::ASM::bne(.L_8004B1A0);
/*8004B078 00047E78*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B07C 00047E7C*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004B080 00047E80*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004B084 00047E84*/ PPC::Runtime::ASM::bne(.L_8004B1A0);
/*8004B088 00047E88*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x8);
/*8004B08C 00047E8C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8004B090 00047E90*/ PPC::Runtime::ASM::beq(.L_8004B124);
/*8004B094 00047E94*/ PPC::Runtime::ASM::bge(.L_8004B0A8);
/*8004B098 00047E98*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x6);
/*8004B09C 00047E9C*/ PPC::Runtime::ASM::beq(.L_8004B0B4);
/*8004B0A0 00047EA0*/ PPC::Runtime::ASM::bge(.L_8004B0EC);
/*8004B0A4 00047EA4*/ PPC::Runtime::ASM::b(.L_8004B190);
RUNTIME_PPC_JUMP_LABEL(.L_8004B0A8, 0x8004B0A8) //this is a jump label
/*8004B0A8 00047EA8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0xa);
/*8004B0AC 00047EAC*/ PPC::Runtime::ASM::bge(.L_8004B190);
/*8004B0B0 00047EB0*/ PPC::Runtime::ASM::b(.L_8004B15C);
RUNTIME_PPC_JUMP_LABEL(.L_8004B0B4, 0x8004B0B4) //this is a jump label
/*8004B0B4 00047EB4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B0B8 00047EB8*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8004B0BC 00047EBC*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B0C0 00047EC0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004B0C4 00047EC4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B0C8 00047EC8*/ PPC::Runtime::ASM::li(context->r4, 0x23);
/*8004B0CC 00047ECC*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B0D0 00047ED0*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B0D4 00047ED4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B0D8 00047ED8*/ PPC::Runtime::ASM::li(context->r4, 0x3b);
/*8004B0DC 00047EDC*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B0E0 00047EE0*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B0E4 00047EE4*/ PPC::Runtime::ASM::li(context->r30, 0x3);
/*8004B0E8 00047EE8*/ PPC::Runtime::ASM::b(.L_8004B190);
RUNTIME_PPC_JUMP_LABEL(.L_8004B0EC, 0x8004B0EC) //this is a jump label
/*8004B0EC 00047EEC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B0F0 00047EF0*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8004B0F4 00047EF4*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B0F8 00047EF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004B0FC 00047EFC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B100 00047F00*/ PPC::Runtime::ASM::li(context->r4, 0x25);
/*8004B104 00047F04*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B108 00047F08*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B10C 00047F0C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B110 00047F10*/ PPC::Runtime::ASM::li(context->r4, 0x3d);
/*8004B114 00047F14*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B118 00047F18*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B11C 00047F1C*/ PPC::Runtime::ASM::li(context->r30, 0x3);
/*8004B120 00047F20*/ PPC::Runtime::ASM::b(.L_8004B190);
RUNTIME_PPC_JUMP_LABEL(.L_8004B124, 0x8004B124) //this is a jump label
/*8004B124 00047F24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B128 00047F28*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8004B12C 00047F2C*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B130 00047F30*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004B134 00047F34*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B138 00047F38*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*8004B13C 00047F3C*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B140 00047F40*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B144 00047F44*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B148 00047F48*/ PPC::Runtime::ASM::li(context->r4, 0x35);
/*8004B14C 00047F4C*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B150 00047F50*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B154 00047F54*/ PPC::Runtime::ASM::li(context->r30, 0x3);
/*8004B158 00047F58*/ PPC::Runtime::ASM::b(.L_8004B190);
RUNTIME_PPC_JUMP_LABEL(.L_8004B15C, 0x8004B15C) //this is a jump label
/*8004B15C 00047F5C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B160 00047F60*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8004B164 00047F64*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B168 00047F68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004B16C 00047F6C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B170 00047F70*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*8004B174 00047F74*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B178 00047F78*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B17C 00047F7C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B180 00047F80*/ PPC::Runtime::ASM::li(context->r4, 0x38);
/*8004B184 00047F84*/ PPC::Runtime::ASM::bl(fn_8023077C);
/*8004B188 00047F88*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*8004B18C 00047F8C*/ PPC::Runtime::ASM::li(context->r30, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_8004B190, 0x8004B190) //this is a jump label
/*8004B190 00047F90*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*8004B194 00047F94*/ PPC::Runtime::ASM::blt(.L_8004B1A0);
/*8004B198 00047F98*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004B19C 00047F9C*/ PPC::Runtime::ASM::b(.L_8004B1B0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B1A0, 0x8004B1A0) //this is a jump label
/*8004B1A0 00047FA0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8004B1A4 00047FA4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x5);
/*8004B1A8 00047FA8*/ PPC::Runtime::ASM::blt(.L_8004B068);
RUNTIME_PPC_JUMP_LABEL(.L_8004B1AC, 0x8004B1AC) //this is a jump label
/*8004B1AC 00047FAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B1B0, 0x8004B1B0) //this is a jump label
/*8004B1B0 00047FB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004B1B4 00047FB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004B1B8 00047FB8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004B1BC 00047FBC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004B1C0 00047FC0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004B1C4 00047FC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004B1C8 00047FC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8004B1CC 00047FCC*/ PPC::Runtime::ASM::blr();
}