//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8020354C.hpp"



void fn_80215914(PPC::Runtime::GCContext* context)
{
/*80215914 00212714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215918 00212718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021591C 0021271C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215920 00212720*/ PPC::Runtime::ASM::bl(fn_8020354C);
/*80215924 00212724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215928 00212728*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021592C 0021272C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215930 00212730*/ PPC::Runtime::ASM::blr();
}