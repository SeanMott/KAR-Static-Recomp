//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205A60.hpp"



void fn_80215710(PPC::Runtime::GCContext* context)
{
/*80215710 00212510*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215714 00212514*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215718 00212518*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8021571C 0021251C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215720 00212520*/ PPC::Runtime::ASM::bl(fn_80205A60);
/*80215724 00212524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215728 00212528*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021572C 0021252C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215730 00212530*/ PPC::Runtime::ASM::blr();
}