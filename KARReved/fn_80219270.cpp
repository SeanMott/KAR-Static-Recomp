//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205F60.hpp"



void fn_80219270(PPC::Runtime::GCContext* context)
{
/*80219270 00216070*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80219274 00216074*/ PPC::Runtime::ASM::mflr(context->r0);
/*80219278 00216078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021927C 0021607C*/ PPC::Runtime::ASM::bl(fn_80205F60);
/*80219280 00216080*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80219284 00216084*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80219288 00216088*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021928C 0021608C*/ PPC::Runtime::ASM::blr();
}