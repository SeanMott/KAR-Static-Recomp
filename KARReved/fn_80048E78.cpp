//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"



void fn_80048E78(PPC::Runtime::GCContext* context)
{
/*80048E78 00045C78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048E7C 00045C7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048E80 00045C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048E84 00045C84*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80048E88 00045C88*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80048E8C 00045C8C*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*80048E90 00045C90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80048E94 00045C94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80048E98 00045C98*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80048E9C 00045C9C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80048EA0 00045CA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048EA4 00045CA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048EA8 00045CA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048EAC 00045CAC*/ PPC::Runtime::ASM::blr();
}