//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802B3C3C(PPC::Runtime::GCContext* context)
{
/*802B3C3C 002B0A3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802B3C40 002B0A40*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x4);
/*802B3C44 002B0A44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B3C48 002B0A48*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802B3C4C 002B0A4C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802B3C50 002B0A50*/ PPC::Runtime::ASM::blr();
}