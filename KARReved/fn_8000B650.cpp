//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B650(PPC::Runtime::GCContext* context)
{
/*8000B650 00008450*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B654 00008454*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B658 00008458*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B65C 0000845C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B660 00008460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B664 00008464*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x396, context->r3));
/*8000B668 00008468*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B66C 0000846C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B670 00008470*/ PPC::Runtime::ASM::blr();
}