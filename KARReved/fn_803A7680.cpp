//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803A7730.hpp"



void fn_803A7680(PPC::Runtime::GCContext* context)
{
/*803A7680 003A4480*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803A7684 003A4484*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A7688 003A4488*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x44);
/*803A768C 003A448C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A7690 003A4490*/ PPC::Runtime::ASM::bl(fn_803A7730);
/*803A7694 003A4494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A7698 003A4498*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A769C 003A449C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803A76A0 003A44A0*/ PPC::Runtime::ASM::blr();
}