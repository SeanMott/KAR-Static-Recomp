//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80068DC4(PPC::Runtime::GCContext* context)
{
/*80068DC4 00065BC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80068DC8 00065BC8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80068DCC 00065BCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80068DD0 00065BD0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 6);
/*80068DD4 00065BD4*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*80068DD8 00065BD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80068DDC 00065BDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80068DE0 00065BE0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4);
/*80068DE4 00065BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80068DE8 00065BE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80068DEC 00065BEC*/ PPC::Runtime::ASM::blr();
}