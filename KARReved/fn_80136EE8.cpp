//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80169098.hpp"



void fn_80136EE8(PPC::Runtime::GCContext* context)
{
/*80136EE8 00133CE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80136EEC 00133CEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136EF0 00133CF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136EF4 00133CF4*/ PPC::Runtime::ASM::bl(fn_80169098);
/*80136EF8 00133CF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136EFC 00133CFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136F00 00133D00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80136F04 00133D04*/ PPC::Runtime::ASM::blr();
}