//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80153340(PPC::Runtime::GCContext* context)
{
/*80153340 00150140*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80153344 00150144*/ PPC::Runtime::ASM::mflr(context->r0);
/*80153348 00150148*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015334C 0015014C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80153350 00150150*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80153354 00150154*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80153358 00150158*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8015335C 0015015C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80153360 00150160*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80153364 00150164*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c0, context->r3));
/*80153368 00150168*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015336C 0015016C*/ PPC::Runtime::ASM::beq(.L_80153380);
/*80153370 00150170*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80153374 00150174*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80153378 00150178*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8015337C 0015017C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
RUNTIME_PPC_JUMP_LABEL(.L_80153380, 0x80153380) //this is a jump label
/*80153380 00150180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80153384 00150184*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80153388 00150188*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015338C 0015018C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80153390 00150190*/ PPC::Runtime::ASM::blr();
}