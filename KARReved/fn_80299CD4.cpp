//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80299CD4(PPC::Runtime::GCContext* context)
{
/*80299CD4 00296AD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80299CD8 00296AD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80299CDC 00296ADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80299CE0 00296AE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80299CE4 00296AE4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80299CE8 00296AE8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80299CEC 00296AEC*/ PPC::Runtime::ASM::bctrl();
/*80299CF0 00296AF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80299CF4 00296AF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80299CF8 00296AF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80299CFC 00296AFC*/ PPC::Runtime::ASM::blr();
}