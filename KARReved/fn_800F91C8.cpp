//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800F91C8(PPC::Runtime::GCContext* context)
{
/*800F91C8 000F5FC8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r3));
/*800F91CC 000F5FCC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800F91D0 000F5FD0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*800F91D4 000F5FD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r3));
/*800F91D8 000F5FD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r3));
/*800F91DC 000F5FDC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*800F91E0 000F5FE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r3));
/*800F91E4 000F5FE4*/ PPC::Runtime::ASM::blr();
}