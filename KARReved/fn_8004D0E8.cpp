//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_800D57B0.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8023002C.hpp"



void fn_8004D0E8(PPC::Runtime::GCContext* context)
{
/*8004D0E8 00049EE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8004D0EC 00049EEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004D0F0 00049EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8004D0F4 00049EF4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8004D0F8 00049EF8*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8004D0FC 00049EFC*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*8004D100 00049F00*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8004D104 00049F04*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8004D108 00049F08*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8004D10C 00049F0C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8004D110 00049F10*/ PPC::Runtime::ASM::bne(.L_8004D1B4);
/*8004D114 00049F14*/ PPC::Runtime::ASM::bl(fn_800D57B0);
/*8004D118 00049F18*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8004D11C 00049F1C*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8004D120 00049F20*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D124, 0x8004D124) //this is a jump label
/*8004D124 00049F24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8004D128 00049F28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8004D12C 00049F2C*/ PPC::Runtime::ASM::beq(.L_8004D19C);
/*8004D130 00049F30*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8004D134 00049F34*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8004D138, 0x8004D138) //this is a jump label
/*8004D138 00049F38*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004D13C 00049F3C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8004D140 00049F40*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r26);
/*8004D144 00049F44*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8004D148 00049F48*/ PPC::Runtime::ASM::beq(.L_8004D18C);
/*8004D14C 00049F4C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D150, 0x8004D150) //this is a jump label
/*8004D150 00049F50*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004D154 00049F54*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004D158 00049F58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004D15C 00049F5C*/ PPC::Runtime::ASM::bne(.L_8004D174);
/*8004D160 00049F60*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004D164 00049F64*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8004D168 00049F68*/ PPC::Runtime::ASM::bl(fn_8023002C);
/*8004D16C 00049F6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004D170 00049F70*/ PPC::Runtime::ASM::bne(.L_8004D180);
RUNTIME_PPC_JUMP_LABEL(.L_8004D174, 0x8004D174) //this is a jump label
/*8004D174 00049F74*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8004D178 00049F78*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x5);
/*8004D17C 00049F7C*/ PPC::Runtime::ASM::blt(.L_8004D150);
RUNTIME_PPC_JUMP_LABEL(.L_8004D180, 0x8004D180) //this is a jump label
/*8004D180 00049F80*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x5);
/*8004D184 00049F84*/ PPC::Runtime::ASM::bne(.L_8004D18C);
/*8004D188 00049F88*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D18C, 0x8004D18C) //this is a jump label
/*8004D18C 00049F8C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*8004D190 00049F90*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004D194 00049F94*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x8);
/*8004D198 00049F98*/ PPC::Runtime::ASM::blt(.L_8004D138);
RUNTIME_PPC_JUMP_LABEL(.L_8004D19C, 0x8004D19C) //this is a jump label
/*8004D19C 00049F9C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8004D1A0 00049FA0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x8);
/*8004D1A4 00049FA4*/ PPC::Runtime::ASM::cmpwi(context->r27, 0xd);
/*8004D1A8 00049FA8*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*8004D1AC 00049FAC*/ PPC::Runtime::ASM::blt(.L_8004D124);
/*8004D1B0 00049FB0*/ PPC::Runtime::ASM::b(.L_8004D1B8);
RUNTIME_PPC_JUMP_LABEL(.L_8004D1B4, 0x8004D1B4) //this is a jump label
/*8004D1B4 00049FB4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D1B8, 0x8004D1B8) //this is a jump label
/*8004D1B8 00049FB8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004D1BC 00049FBC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8004D1C0 00049FC0*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8004D1C4 00049FC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8004D1C8 00049FC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004D1CC 00049FCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8004D1D0 00049FD0*/ PPC::Runtime::ASM::blr();
}