//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_8021614C(PPC::Runtime::GCContext* context)
{
/*8021614C 00212F4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216150 00212F50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216154 00212F54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216158 00212F58*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*8021615C 00212F5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216160 00212F60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80216164 00212F64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80216168 00212F68*/ PPC::Runtime::ASM::blr();
}