//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80225194.hpp"



void fn_80225170(PPC::Runtime::GCContext* context)
{
/*80225170 00221F70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80225174 00221F74*/ PPC::Runtime::ASM::mflr(context->r0);
/*80225178 00221F78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022517C 00221F7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80225180 00221F80*/ PPC::Runtime::ASM::bl(fn_80225194);
/*80225184 00221F84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80225188 00221F88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022518C 00221F8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80225190 00221F90*/ PPC::Runtime::ASM::blr();
}