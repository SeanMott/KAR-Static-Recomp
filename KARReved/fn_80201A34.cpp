//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006A250.hpp"



void fn_80201A34(PPC::Runtime::GCContext* context)
{
/*80201A34 001FE834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80201A38 001FE838*/ PPC::Runtime::ASM::mflr(context->r0);
/*80201A3C 001FE83C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x70);
/*80201A40 001FE840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80201A44 001FE844*/ PPC::Runtime::ASM::bl(fn_8006A250);
/*80201A48 001FE848*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80201A4C 001FE84C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80201A50 001FE850*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80201A54 001FE854*/ PPC::Runtime::ASM::blr();
}