//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE1E0.hpp"



void fn_802183E8(PPC::Runtime::GCContext* context)
{
/*802183E8 002151E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802183EC 002151EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802183F0 002151F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802183F4 002151F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*802183F8 002151F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802183FC 002151FC*/ PPC::Runtime::ASM::bl(fn_801FE1E0);
/*80218400 00215200*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218404 00215204*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80218408 00215208*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021840C 0021520C*/ PPC::Runtime::ASM::blr();
}