//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "memset.hpp"



void fn_80046D48(PPC::Runtime::GCContext* context)
{
/*80046D48 00043B48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80046D4C 00043B4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80046D50 00043B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80046D54 00043B54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80046D58 00043B58*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80046D5C 00043B5C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x484);
/*80046D60 00043B60*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80046D64 00043B64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80046D68 00043B68*/ PPC::Runtime::ASM::li(context->r5, 0x128);
/*80046D6C 00043B6C*/ PPC::Runtime::ASM::bl(memset);
/*80046D70 00043B70*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80046D74 00043B74*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80046D78 00043B78*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80046D7C 00043B7C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80046D80 00043B80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80046D84 00043B84*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80046D88 00043B88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80046D8C 00043B8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80046D90 00043B90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80046D94 00043B94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80046D98 00043B98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80046D9C 00043B9C*/ PPC::Runtime::ASM::blr();
}