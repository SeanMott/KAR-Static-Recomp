//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800CEE08(PPC::Runtime::GCContext* context)
{
/*800CEE08 000CBC08*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CEE0C 000CBC0C*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 6);
/*800CEE10 000CBC10*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x3c);
/*800CEE14 000CBC14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r4));
/*800CEE18 000CBC18*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*800CEE1C 000CBC1C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*800CEE20 000CBC20*/ PPC::Runtime::ASM::blr();
}