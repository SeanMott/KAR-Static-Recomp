//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B724(PPC::Runtime::GCContext* context)
{
/*8000B724 00008524*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B728 00008528*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B72C 0000852C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B730 00008530*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B734 00008534*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000B738 00008538*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B73C 0000853C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8000B740 00008540*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8000B744 00008544*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc00, context->r3));
/*8000B748 00008548*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B74C 0000854C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B750 00008550*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B754 00008554*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B758 00008558*/ PPC::Runtime::ASM::blr();
}