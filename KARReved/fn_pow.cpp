//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_pauseMain.hpp"



void fn_pow(PPC::Runtime::GCContext* context)
{
/*80012E64 0000FC64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80012E68 0000FC68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80012E6C 0000FC6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80012E70 0000FC70*/ PPC::Runtime::ASM::bl(fn_pauseMain);
/*80012E74 0000FC74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80012E78 0000FC78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80012E7C 0000FC7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80012E80 0000FC80*/ PPC::Runtime::ASM::blr();
}