//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80038D1C(PPC::Runtime::GCContext* context)
{
/*80038D1C 00035B1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80038D20 00035B20*/ PPC::Runtime::ASM::mflr(context->r0);
/*80038D24 00035B24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80038D28 00035B28*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80038D2C 00035B2C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80038D30 00035B30*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25b, context->r3));
/*80038D34 00035B34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80038D38 00035B38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80038D3C 00035B3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80038D40 00035B40*/ PPC::Runtime::ASM::blr();
}