//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016A810(PPC::Runtime::GCContext* context)
{
/*8016A810 00167610*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016A814 00167614*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016A818 00167618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016A81C 0016761C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016A820 00167620*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8016A824 00167624*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016A828 00167628*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016A82C 0016762C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016A830 00167630*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8016A834 00167634*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016A838 00167638*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8016A83C 0016763C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac8, context->r3));
/*8016A840 00167640*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016A844 00167644*/ PPC::Runtime::ASM::beq(.L_8016A864);
/*8016A848 00167648*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016A84C 0016764C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8016A850 00167650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8016A854 00167654*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8016A858 00167658*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8016A85C 0016765C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8016A860 00167660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8016A864, 0x8016A864) //this is a jump label
/*8016A864 00167664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016A868 00167668*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016A86C 0016766C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016A870 00167670*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016A874 00167674*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016A878 00167678*/ PPC::Runtime::ASM::blr();
}