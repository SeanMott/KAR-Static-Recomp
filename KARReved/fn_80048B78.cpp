//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"



void fn_80048B78(PPC::Runtime::GCContext* context)
{
/*80048B78 00045978*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048B7C 0004597C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048B80 00045980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048B84 00045984*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80048B88 00045988*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80048B8C 0004598C*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*80048B90 00045990*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80048B94 00045994*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80048B98 00045998*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80048B9C 0004599C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048BA0 000459A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048BA4 000459A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048BA8 000459A8*/ PPC::Runtime::ASM::blr();
}