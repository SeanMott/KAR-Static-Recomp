//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80009208.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022D468.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022D248.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022C70C.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022D248.hpp"



void fn_8022DF1C(PPC::Runtime::GCContext* context)
{
/*8022DF1C 0022AD1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8022DF20 0022AD20*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022DF24 0022AD24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022DF28 0022AD28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022DF2C 0022AD2C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022DF30 0022AD30*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022DF34 0022AD34*/ PPC::Runtime::ASM::bl(fn_80009208);
/*8022DF38 0022AD38*/ PPC::Runtime::ASM::extsb(context->r29, context->r3);
/*8022DF3C 0022AD3C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*8022DF40 0022AD40*/ PPC::Runtime::ASM::ble(.L_8022E05C);
/*8022DF44 0022AD44*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8022DF48 0022AD48*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8022DF4C, 0x8022DF4C) //this is a jump label
/*8022DF4C 0022AD4C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022DF50 0022AD50*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8022DF54 0022AD54*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8022DF58 0022AD58*/ PPC::Runtime::ASM::beq(.L_8022DF70);
/*8022DF5C 0022AD5C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022DF60 0022AD60*/ PPC::Runtime::ASM::bl(fn_8022D468);
/*8022DF64 0022AD64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022DF68 0022AD68*/ PPC::Runtime::ASM::beq(.L_8022DF70);
/*8022DF6C 0022AD6C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8022DF70, 0x8022DF70) //this is a jump label
/*8022DF70 0022AD70*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8022DF74 0022AD74*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8022DF78 0022AD78*/ PPC::Runtime::ASM::blt(.L_8022DF4C);
/*8022DF7C 0022AD7C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8022DF80, 0x8022DF80) //this is a jump label
/*8022DF80 0022AD80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022DF84 0022AD84*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8022DF88 0022AD88*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8022DF8C 0022AD8C*/ PPC::Runtime::ASM::beq(.L_8022DFE0);
/*8022DF90 0022AD90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022DF94 0022AD94*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022DF98 0022AD98*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*8022DF9C 0022AD9C*/ PPC::Runtime::ASM::beq(.L_8022DFB0);
/*8022DFA0 0022ADA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r3));
/*8022DFA4 0022ADA4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8022DFA8 0022ADA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r3));
/*8022DFAC 0022ADAC*/ PPC::Runtime::ASM::b(.L_8022DFB8);
RUNTIME_PPC_JUMP_LABEL(.L_8022DFB0, 0x8022DFB0) //this is a jump label
/*8022DFB0 0022ADB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8022DFB4 0022ADB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8022DFB8, 0x8022DFB8) //this is a jump label
/*8022DFB8 0022ADB8*/ PPC::Runtime::ASM::cmpw(context->r31, context->r29);
/*8022DFBC 0022ADBC*/ PPC::Runtime::ASM::bne(.L_8022DFE0);
/*8022DFC0 0022ADC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r3));
/*8022DFC4 0022ADC4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8022DFC8 0022ADC8*/ PPC::Runtime::ASM::beq(.L_8022DFD8);
/*8022DFCC 0022ADCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r3));
/*8022DFD0 0022ADD0*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8022DFD4 0022ADD4*/ PPC::Runtime::ASM::ble(.L_8022DFE0);
RUNTIME_PPC_JUMP_LABEL(.L_8022DFD8, 0x8022DFD8) //this is a jump label
/*8022DFD8 0022ADD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r3));
/*8022DFDC 0022ADDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8022DFE0, 0x8022DFE0) //this is a jump label
/*8022DFE0 0022ADE0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8022DFE4 0022ADE4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8022DFE8 0022ADE8*/ PPC::Runtime::ASM::blt(.L_8022DF80);
/*8022DFEC 0022ADEC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8022DFF0 0022ADF0*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8022DFF4, 0x8022DFF4) //this is a jump label
/*8022DFF4 0022ADF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022DFF8 0022ADF8*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8022DFFC 0022ADFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8022E000 0022AE00*/ PPC::Runtime::ASM::beq(.L_8022E018);
/*8022E004 0022AE04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022E008 0022AE08*/ PPC::Runtime::ASM::bl(fn_8022C70C);
/*8022E00C 0022AE0C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8022E010 0022AE10*/ PPC::Runtime::ASM::bne(.L_8022E018);
/*8022E014 0022AE14*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8022E018, 0x8022E018) //this is a jump label
/*8022E018 0022AE18*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8022E01C 0022AE1C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022E020 0022AE20*/ PPC::Runtime::ASM::blt(.L_8022DFF4);
/*8022E024 0022AE24*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8022E028, 0x8022E028) //this is a jump label
/*8022E028 0022AE28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022E02C 0022AE2C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8022E030 0022AE30*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8022E034 0022AE34*/ PPC::Runtime::ASM::beq(.L_8022E050);
/*8022E038 0022AE38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022E03C 0022AE3C*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022E040 0022AE40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r3));
/*8022E044 0022AE44*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*8022E048 0022AE48*/ PPC::Runtime::ASM::bge(.L_8022E050);
/*8022E04C 0022AE4C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8022E050, 0x8022E050) //this is a jump label
/*8022E050 0022AE50*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8022E054 0022AE54*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022E058 0022AE58*/ PPC::Runtime::ASM::blt(.L_8022E028);
RUNTIME_PPC_JUMP_LABEL(.L_8022E05C, 0x8022E05C) //this is a jump label
/*8022E05C 0022AE5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022E060 0022AE60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022E064 0022AE64*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022E068 0022AE68*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E06C 0022AE6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022E070 0022AE70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8022E074 0022AE74*/ PPC::Runtime::ASM::blr();
}