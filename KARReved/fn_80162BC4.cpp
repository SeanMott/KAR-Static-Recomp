//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80162BC4(PPC::Runtime::GCContext* context)
{
/*80162BC4 0015F9C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80162BC8 0015F9C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80162BCC 0015F9CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162BD0 0015F9D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80162BD4 0015F9D4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80162BD8 0015F9D8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80162BDC 0015F9DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x954, context->r3));
/*80162BE0 0015F9E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80162BE4 0015F9E4*/ PPC::Runtime::ASM::beq(.L_80162BF4);
/*80162BE8 0015F9E8*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80162BEC 0015F9EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80162BF0 0015F9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x954, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80162BF4, 0x80162BF4) //this is a jump label
/*80162BF4 0015F9F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162BF8 0015F9F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80162BFC 0015F9FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80162C00 0015FA00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80162C04 0015FA04*/ PPC::Runtime::ASM::blr();
}