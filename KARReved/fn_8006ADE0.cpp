//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8006ADE0(PPC::Runtime::GCContext* context)
{
/*8006ADE0 00067BE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8006ADE4 00067BE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006ADE8 00067BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006ADEC 00067BEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006ADF0 00067BF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r3));
/*8006ADF4 00067BF4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8006ADF8 00067BF8*/ PPC::Runtime::ASM::beq(.L_8006AE68);
/*8006ADFC 00067BFC*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8006AE00 00067C00*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8006AE04 00067C04*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8006AE08 00067C08*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*8006AE0C 00067C0C*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8006AE10 00067C10*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 8006AE14 00067C14  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*8006AE18 00067C18*/ PPC::Runtime::ASM::beq(.L_8006AE20);
/*8006AE1C 00067C1C*/ PPC::Runtime::ASM::b(.L_8006AE30);
RUNTIME_PPC_JUMP_LABEL(.L_8006AE20, 0x8006AE20) //this is a jump label
/*8006AE20 00067C20*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
/*8006AE24 00067C24*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r4);
/*8006AE28 00067C28*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8006AE2C 00067C2C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_8006AE30, 0x8006AE30) //this is a jump label
/*8006AE30 00067C30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006AE34 00067C34*/ PPC::Runtime::ASM::beq(.L_8006AE68);
/*8006AE38 00067C38*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8006AE3C 00067C3C*/ PPC::Runtime::ASM::beq(.L_8006AE68);
/*8006AE40 00067C40*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8006AE44 00067C44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8006AE48 00067C48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*8006AE4C 00067C4C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8006AE50 00067C50*/ PPC::Runtime::ASM::bctrl();
/*8006AE54 00067C54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8006AE58 00067C58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8006AE5C 00067C5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*8006AE60 00067C60*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8006AE64 00067C64*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8006AE68, 0x8006AE68) //this is a jump label
/*8006AE68 00067C68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006AE6C 00067C6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006AE70 00067C70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006AE74 00067C74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8006AE78 00067C78*/ PPC::Runtime::ASM::blr();
}