//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802282E0.hpp"



void fn_802281BC(PPC::Runtime::GCContext* context)
{
/*802281BC 00224FBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802281C0 00224FC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802281C4 00224FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802281C8 00224FC8*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*802281CC 00224FCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802281D0 00224FD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*802281D4 00224FD4*/ PPC::Runtime::ASM::bl(fn_802282E0);
/*802281D8 00224FD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802281DC 00224FDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802281E0 00224FE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802281E4 00224FE4*/ PPC::Runtime::ASM::blr();
}