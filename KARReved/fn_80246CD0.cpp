//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E79F8.hpp"



void fn_80246CD0(PPC::Runtime::GCContext* context)
{
/*80246CD0 00243AD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80246CD4 00243AD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80246CD8 00243AD8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*80246CDC 00243ADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246CE0 00243AE0*/ PPC::Runtime::ASM::bl(fn_800E79F8);
/*80246CE4 00243AE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246CE8 00243AE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80246CEC 00243AEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80246CF0 00243AF0*/ PPC::Runtime::ASM::blr();
}