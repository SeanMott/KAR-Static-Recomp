//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_getRuleNum.hpp"



void fn_isRuleKirbyMelee(PPC::Runtime::GCContext* context)
{
/*80191930 0018E730*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80191934 0018E734*/ PPC::Runtime::ASM::mflr(context->r0);
/*80191938 0018E738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019193C 0018E73C*/ PPC::Runtime::ASM::bl(fn_getRuleNum);
/*80191940 0018E740*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80191944 0018E744*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0xd);
/*80191948 0018E748*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8019194C 0018E74C*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*80191950 0018E750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191954 0018E754*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80191958 0018E758*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019195C 0018E75C*/ PPC::Runtime::ASM::blr();
}