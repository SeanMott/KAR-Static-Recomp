//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80184B98(PPC::Runtime::GCContext* context)
{
/*80184B98 00181998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80184B9C 0018199C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80184BA0 001819A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184BA4 001819A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80184BA8 001819A8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80184BAC 001819AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80184BB0 001819B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1170, context->r3));
/*80184BB4 001819B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80184BB8 001819B8*/ PPC::Runtime::ASM::beq(.L_80184BC8);
/*80184BBC 001819BC*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80184BC0 001819C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80184BC4 001819C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1170, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80184BC8, 0x80184BC8) //this is a jump label
/*80184BC8 001819C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184BCC 001819CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80184BD0 001819D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80184BD4 001819D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80184BD8 001819D8*/ PPC::Runtime::ASM::blr();
}