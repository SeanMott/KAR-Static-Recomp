//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B224(PPC::Runtime::GCContext* context)
{
/*8000B224 00008024*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B228 00008028*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B22C 0000802C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B230 00008030*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B234 00008034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B238 00008038*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r3));
/*8000B23C 0000803C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B240 00008040*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B244 00008044*/ PPC::Runtime::ASM::blr();
}