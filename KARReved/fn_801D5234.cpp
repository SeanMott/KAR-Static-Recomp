//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801D5234(PPC::Runtime::GCContext* context)
{
/*801D5234 001D2034*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc28, context->r3));
/*801D5238 001D2038*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801D523C 001D203C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*801D5240 001D2040*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc28, context->r3));
/*801D5244 001D2044*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801D5248 001D2048*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*801D524C 001D204C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801D5250 001D2050*/ PPC::Runtime::ASM::blr();
}