//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801A2FC0(PPC::Runtime::GCContext* context)
{
/*801A2FC0 0019FDC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r3));
/*801A2FC4 0019FDC4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A2FC8 0019FDC8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801A2FCC 0019FDCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r3));
/*801A2FD0 0019FDD0*/ PPC::Runtime::ASM::blr();
}