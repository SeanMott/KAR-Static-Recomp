//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8019B0D8(PPC::Runtime::GCContext* context)
{
/*8019B0D8 00197ED8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r3));
/*8019B0DC 00197EDC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8019B0E0 00197EE0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*8019B0E4 00197EE4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r3));
/*8019B0E8 00197EE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B0EC 00197EEC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8019B0F0 00197EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B0F4 00197EF4*/ PPC::Runtime::ASM::blr();
}