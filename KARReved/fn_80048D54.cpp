//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"



void fn_80048D54(PPC::Runtime::GCContext* context)
{
/*80048D54 00045B54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048D58 00045B58*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048D5C 00045B5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048D60 00045B60*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80048D64 00045B64*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80048D68 00045B68*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*80048D6C 00045B6C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80048D70 00045B70*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80048D74 00045B74*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80048D78 00045B78*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80048D7C 00045B7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048D80 00045B80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048D84 00045B84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048D88 00045B88*/ PPC::Runtime::ASM::blr();
}