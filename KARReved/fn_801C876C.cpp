//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194B30.hpp"



void fn_801C876C(PPC::Runtime::GCContext* context)
{
/*801C876C 001C556C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C8770 001C5570*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C8774 001C5574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8778 001C5578*/ PPC::Runtime::ASM::bl(fn_80194B30);
/*801C877C 001C557C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8780 001C5580*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C8784 001C5584*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C8788 001C5588*/ PPC::Runtime::ASM::blr();
}