//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8015FEF0(PPC::Runtime::GCContext* context)
{
/*8015FEF0 0015CCF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015FEF4 0015CCF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015FEF8 0015CCF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015FEFC 0015CCFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015FF00 0015CD00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8015FF04 0015CD04*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015FF08 0015CD08*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8015FF0C 0015CD0C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015FF10 0015CD10*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*8015FF14 0015CD14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r31));
/*8015FF18 0015CD18*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015FF1C 0015CD1C*/ PPC::Runtime::ASM::beq(.L_8015FF2C);
/*8015FF20 0015CD20*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8015FF24 0015CD24*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8015FF28 0015CD28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8015FF2C, 0x8015FF2C) //this is a jump label
/*8015FF2C 0015CD2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015FF30 0015CD30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015FF34 0015CD34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015FF38 0015CD38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015FF3C 0015CD3C*/ PPC::Runtime::ASM::blr();
}