//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80164804(PPC::Runtime::GCContext* context)
{
/*80164804 00161604*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80164808 00161608*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016480C 0016160C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80164810 00161610*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80164814 00161614*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80164818 00161618*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8016481C 0016161C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80164820 00161620*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80164824 00161624*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80164828 00161628*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*8016482C 0016162C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80164830 00161630*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c4, context->r3));
/*80164834 00161634*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80164838 00161638*/ PPC::Runtime::ASM::beq(.L_8016485C);
/*8016483C 0016163C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80164840 00161640*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80164844 00161644*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62, context->r3));
/*80164848 00161648*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*8016484C 0016164C*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r3));
/*80164850 00161650*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r3));
/*80164854 00161654*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*80164858 00161658*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8016485C, 0x8016485C) //this is a jump label
/*8016485C 0016165C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80164860 00161660*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80164864 00161664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80164868 00161668*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016486C 0016166C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80164870 00161670*/ PPC::Runtime::ASM::blr();
}