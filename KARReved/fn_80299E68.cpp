//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80299E68(PPC::Runtime::GCContext* context)
{
/*80299E68 00296C68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80299E6C 00296C6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80299E70 00296C70*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*80299E74 00296C74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80299E78 00296C78*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80299E7C 00296C7C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80299E80 00296C80*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80299E84 00296C84*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80299E88 00296C88*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80299E8C 00296C8C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*80299E90 00296C90*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80299E94 00296C94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80299E98 00296C98*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80299E9C 00296C9C*/ PPC::Runtime::ASM::bctrl();
/*80299EA0 00296CA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80299EA4 00296CA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80299EA8 00296CA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80299EAC 00296CAC*/ PPC::Runtime::ASM::blr();
}