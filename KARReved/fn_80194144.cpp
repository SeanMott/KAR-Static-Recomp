//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C852C.hpp"



void fn_80194144(PPC::Runtime::GCContext* context)
{
/*80194144 00190F44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80194148 00190F48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019414C 00190F4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80194150 00190F50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*80194154 00190F54*/ PPC::Runtime::ASM::bl(fn_801C852C);
/*80194158 00190F58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019415C 00190F5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80194160 00190F60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80194164 00190F64*/ PPC::Runtime::ASM::blr();
}