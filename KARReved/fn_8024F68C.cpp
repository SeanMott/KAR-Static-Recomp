//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80252E18.hpp"
#include "fn_8018D850.hpp"
#include "fn_80254134.hpp"



void fn_8024F68C(PPC::Runtime::GCContext* context)
{
/*8024F68C 0024C48C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024F690 0024C490*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024F694 0024C494*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024F698 0024C498*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024F69C 0024C49C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8024F6A0 0024C4A0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/* 8024F6A4 0024C4A4  54 80 DF FF */ extrwi. context->r0 , context->r4 , 1 , 26
/*8024F6A8 0024C4A8*/ PPC::Runtime::ASM::bne(.L_8024F6DC);
/*8024F6AC 0024C4AC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r4, 1, 25);
/*8024F6B0 0024C4B0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8024F6B4 0024C4B4*/ PPC::Runtime::ASM::bne(.L_8024F6DC);
/*8024F6B8 0024C4B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r31));
/*8024F6BC 0024C4BC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8024F6C0 0024C4C0*/ PPC::Runtime::ASM::beq(.L_8024F6DC);
/*8024F6C4 0024C4C4*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8024F6C8 0024C4C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r31));
/*8024F6CC 0024C4CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r31));
/*8024F6D0 0024C4D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024F6D4 0024C4D4*/ PPC::Runtime::ASM::bne(.L_8024F6DC);
/*8024F6D8 0024C4D8*/ PPC::Runtime::ASM::bl(fn_80252E18);
RUNTIME_PPC_JUMP_LABEL(.L_8024F6DC, 0x8024F6DC) //this is a jump label
/*8024F6DC 0024C4DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r31));
/*8024F6E0 0024C4E0*/ PPC::Runtime::ASM::bl(fn_8018D850);
/*8024F6E4 0024C4E4*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8024F6E8 0024C4E8*/ PPC::Runtime::ASM::bl(fn_80254134);
/*8024F6EC 0024C4EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8024F6F0 0024C4F0*/ PPC::Runtime::ASM::bne(.L_8024F708);
/*8024F6F4 0024C4F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8024F6F8 0024C4F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024F6FC 0024C4FC*/ PPC::Runtime::ASM::beq(.L_8024F708);
/*8024F700 0024C500*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8024F704 0024C504*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8024F708, 0x8024F708) //this is a jump label
/*8024F708 0024C508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024F70C 0024C50C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024F710 0024C510*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024F714 0024C514*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8024F718 0024C518*/ PPC::Runtime::ASM::blr();
}