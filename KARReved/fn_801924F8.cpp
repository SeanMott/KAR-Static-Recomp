//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BDBAC.hpp"



void fn_801924F8(PPC::Runtime::GCContext* context)
{
/*801924F8 0018F2F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801924FC 0018F2FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80192500 0018F300*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192504 0018F304*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80192508 0018F308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8019250C 0018F30C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80192510 0018F310*/ PPC::Runtime::ASM::bne(.L_80192518);
/*80192514 0018F314*/ PPC::Runtime::ASM::bl(fn_801BDBAC);
RUNTIME_PPC_JUMP_LABEL(.L_80192518, 0x80192518) //this is a jump label
/*80192518 0018F318*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019251C 0018F31C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80192520 0018F320*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80192524 0018F324*/ PPC::Runtime::ASM::blr();
}