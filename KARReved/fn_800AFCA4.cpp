//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80078D78.hpp"



void fn_800AFCA4(PPC::Runtime::GCContext* context)
{
/*800AFCA4 000ACAA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AFCA8 000ACAA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AFCAC 000ACAAC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AFCB0 000ACAB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFCB4 000ACAB4*/ PPC::Runtime::ASM::bne(.L_800AFCBC);
/*800AFCB8 000ACAB8*/ PPC::Runtime::ASM::bl(fn_80078D78);
RUNTIME_PPC_JUMP_LABEL(.L_800AFCBC, 0x800AFCBC) //this is a jump label
/*800AFCBC 000ACABC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFCC0 000ACAC0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AFCC4 000ACAC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AFCC8 000ACAC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AFCCC 000ACACC*/ PPC::Runtime::ASM::blr();
}