//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80150CC8.hpp"



void fn_80133F28(PPC::Runtime::GCContext* context)
{
/*80133F28 00130D28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80133F2C 00130D2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133F30 00130D30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133F34 00130D34*/ PPC::Runtime::ASM::bl(fn_80150CC8);
/*80133F38 00130D38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133F3C 00130D3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133F40 00130D40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133F44 00130D44*/ PPC::Runtime::ASM::blr();
}