//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_80213A30(PPC::Runtime::GCContext* context)
{
/*80213A30 00210830*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80213A34 00210834*/ PPC::Runtime::ASM::mflr(context->r0);
/*80213A38 00210838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213A3C 0021083C*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*80213A40 00210840*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213A44 00210844*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80213A48 00210848*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80213A4C 0021084C*/ PPC::Runtime::ASM::blr();
}