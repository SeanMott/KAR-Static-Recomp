//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80168BCC(PPC::Runtime::GCContext* context)
{
/*80168BCC 001659CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80168BD0 001659D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80168BD4 001659D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80168BD8 001659D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80168BDC 001659DC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80168BE0 001659E0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80168BE4 001659E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa70, context->r3));
/*80168BE8 001659E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80168BEC 001659EC*/ PPC::Runtime::ASM::beq(.L_80168BFC);
/*80168BF0 001659F0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80168BF4 001659F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80168BF8 001659F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa70, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80168BFC, 0x80168BFC) //this is a jump label
/*80168BFC 001659FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80168C00 00165A00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80168C04 00165A04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80168C08 00165A08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80168C0C 00165A0C*/ PPC::Runtime::ASM::blr();
}