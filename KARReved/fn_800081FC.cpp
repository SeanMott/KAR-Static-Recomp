//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_800081FC(PPC::Runtime::GCContext* context)
{
/*800081FC 00004FFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80008200 00005000*/ PPC::Runtime::ASM::mflr(context->r0);
/*80008204 00005004*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80008208 00005008*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000820C 0000500C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80008210 00005010*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x7d4);
/*80008214 00005014*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80008218 00005018*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000821C 0000501C*/ PPC::Runtime::ASM::blr();
}