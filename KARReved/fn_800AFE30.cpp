//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800ABA6C.hpp"
#include "fn_800ACE08.hpp"



void fn_800AFE30(PPC::Runtime::GCContext* context)
{
/*800AFE30 000ACC30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AFE34 000ACC34*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AFE38 000ACC38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800AFE3C 000ACC3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFE40 000ACC40*/ PPC::Runtime::ASM::bne(.L_800AFE4C);
/*800AFE44 000ACC44*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800AFE48 000ACC48*/ PPC::Runtime::ASM::bl(fn_800ACE08);
RUNTIME_PPC_JUMP_LABEL(.L_800AFE4C, 0x800AFE4C) //this is a jump label
/*800AFE4C 000ACC4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFE50 000ACC50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AFE54 000ACC54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AFE58 000ACC58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AFE5C 000ACC5C*/ PPC::Runtime::ASM::blr();
}