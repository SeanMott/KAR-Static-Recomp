//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80158300.hpp"



void fn_80134D04(PPC::Runtime::GCContext* context)
{
/*80134D04 00131B04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80134D08 00131B08*/ PPC::Runtime::ASM::mflr(context->r0);
/*80134D0C 00131B0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134D10 00131B10*/ PPC::Runtime::ASM::bl(fn_80158300);
/*80134D14 00131B14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134D18 00131B18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134D1C 00131B1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80134D20 00131B20*/ PPC::Runtime::ASM::blr();
}