//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019C15C.hpp"
#include "fn_8019BFF8.hpp"



void fn_8019B6F0(PPC::Runtime::GCContext* context)
{
/*8019B6F0 001984F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019B6F4 001984F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019B6F8 001984F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B6FC 001984FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B700 00198500*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8019B704 00198504*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B708 00198508*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/* 8019B70C 0019850C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8019B710 00198510*/ PPC::Runtime::ASM::beq(.L_8019B71C);
/*8019B714 00198514*/ PPC::Runtime::ASM::bl(fn_8019C15C);
/*8019B718 00198518*/ PPC::Runtime::ASM::b(.L_8019B720);
RUNTIME_PPC_JUMP_LABEL(.L_8019B71C, 0x8019B71C) //this is a jump label
/*8019B71C 0019851C*/ PPC::Runtime::ASM::bl(fn_8019BFF8);
RUNTIME_PPC_JUMP_LABEL(.L_8019B720, 0x8019B720) //this is a jump label
/*8019B720 00198520*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B724 00198524*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8019B728 00198528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B72C 0019852C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B730 00198530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B734 00198534*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019B738 00198538*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019B73C 0019853C*/ PPC::Runtime::ASM::blr();
}