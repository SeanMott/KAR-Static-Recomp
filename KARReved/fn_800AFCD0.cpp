//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_menuGetNextMenuID.hpp"
#include "fn_800064F0.hpp"
#include "fn_80008220.hpp"



void fn_800AFCD0(PPC::Runtime::GCContext* context)
{
/*800AFCD0 000ACAD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AFCD4 000ACAD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AFCD8 000ACAD8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AFCDC 000ACADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFCE0 000ACAE0*/ PPC::Runtime::ASM::bne(.L_800AFCF4);
/*800AFCE4 000ACAE4*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*800AFCE8 000ACAE8*/ PPC::Runtime::ASM::bl(fn_menuGetNextMenuID);
/*800AFCEC 000ACAEC*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*800AFCF0 000ACAF0*/ PPC::Runtime::ASM::bl(fn_80008220);
RUNTIME_PPC_JUMP_LABEL(.L_800AFCF4, 0x800AFCF4) //this is a jump label
/*800AFCF4 000ACAF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFCF8 000ACAF8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AFCFC 000ACAFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AFD00 000ACB00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AFD04 000ACB04*/ PPC::Runtime::ASM::blr();
}