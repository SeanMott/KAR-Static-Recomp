//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014CEA8.hpp"



void fn_801337FC(PPC::Runtime::GCContext* context)
{
/*801337FC 001305FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80133800 00130600*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133804 00130604*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133808 00130608*/ PPC::Runtime::ASM::bl(fn_8014CEA8);
/*8013380C 0013060C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133810 00130610*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133814 00130614*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133818 00130618*/ PPC::Runtime::ASM::blr();
}