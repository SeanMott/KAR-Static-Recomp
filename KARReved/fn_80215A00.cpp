//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802042FC.hpp"



void fn_80215A00(PPC::Runtime::GCContext* context)
{
/*80215A00 00212800*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215A04 00212804*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215A08 00212808*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215A0C 0021280C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80215A10 00212810*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*80215A14 00212814*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215A18 00212818*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215A1C 0021281C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215A20 00212820*/ PPC::Runtime::ASM::blr();
}