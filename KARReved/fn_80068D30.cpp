//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800BBFC4.hpp"



void fn_80068D30(PPC::Runtime::GCContext* context)
{
/*80068D30 00065B30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80068D34 00065B34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80068D38 00065B38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80068D3C 00065B3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80068D40 00065B40*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80068D44 00065B44*/ PPC::Runtime::ASM::bl(fn_800BBFC4);
/*80068D48 00065B48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80068D4C 00065B4C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*80068D50 00065B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80068D54 00065B54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80068D58 00065B58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80068D5C 00065B5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80068D60 00065B60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80068D64 00065B64*/ PPC::Runtime::ASM::blr();
}