//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193004.hpp"



void fn_8019FC80(PPC::Runtime::GCContext* context)
{
/*8019FC80 0019CA80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019FC84 0019CA84*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019FC88 0019CA88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FC8C 0019CA8C*/ PPC::Runtime::ASM::bl(fn_80193004);
/*8019FC90 0019CA90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FC94 0019CA94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019FC98 0019CA98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019FC9C 0019CA9C*/ PPC::Runtime::ASM::blr();
}