//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"



void fn_800FB810(PPC::Runtime::GCContext* context)
{
/*800FB810 000F8610*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FB814 000F8614*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FB818 000F8618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FB81C 000F861C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FB820 000F8620*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FB824 000F8624*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FB828 000F8628*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r5));
/*800FB82C 000F862C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800FB830 000F8630*/ PPC::Runtime::ASM::ble(.L_800FB83C);
/*800FB834 000F8634*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*800FB838 000F8638*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_800FB83C, 0x800FB83C) //this is a jump label
/*800FB83C 000F863C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r5));
/* 800FB840 000F8640  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800FB844 000F8644*/ PPC::Runtime::ASM::beq(.L_800FB854);
/*800FB848 000F8648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r5));
/*800FB84C 000F864C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FB850 000F8650*/ PPC::Runtime::ASM::ble(.L_800FB860);
RUNTIME_PPC_JUMP_LABEL(.L_800FB854, 0x800FB854) //this is a jump label
/*800FB854 000F8654*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r5));
/* 800FB858 000F8658  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*800FB85C 000F865C*/ PPC::Runtime::ASM::beq(.L_800FB8C4);
RUNTIME_PPC_JUMP_LABEL(.L_800FB860, 0x800FB860) //this is a jump label
/*800FB860 000F8660*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FB864 000F8664*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800FB868 000F8668*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800FB86C 000F866C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FB870 000F8670*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FB874 000F8674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800FB878 000F8678*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*800FB87C 000F867C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
/*800FB880 000F8680*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*800FB884 000F8684*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
/*800FB888 000F8688*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*800FB88C 000F868C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FB890 000F8690*/ PPC::Runtime::ASM::ble(.L_800FB8A0);
/*800FB894 000F8694*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*800FB898 000F8698*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FB89C 000F869C*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FB8A0, 0x800FB8A0) //this is a jump label
/*800FB8A0 000F86A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB8A4 000F86A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FB8A8 000F86A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800FB8AC 000F86AC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FB8B0 000F86B0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FB8B4 000F86B4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FB8B8 000F86B8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF8E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB8BC 000F86BC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FB8C0 000F86C0*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_800FB8C4, 0x800FB8C4) //this is a jump label
/*800FB8C4 000F86C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FB8C8 000F86C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FB8CC 000F86CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FB8D0 000F86D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FB8D4 000F86D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FB8D8 000F86D8*/ PPC::Runtime::ASM::blr();
}