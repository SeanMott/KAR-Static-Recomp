//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800CECD4(PPC::Runtime::GCContext* context)
{
/*800CECD4 000CBAD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800CECD8 000CBAD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CECDC 000CBADC*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 6);
/*800CECE0 000CBAE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CECE4 000CBAE4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CECE8 000CBAE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CECEC 000CBAEC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CECF0 000CBAF0*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CECF4 000CBAF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r5));
/*800CECF8 000CBAF8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800CECFC 000CBAFC*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*800CED00 000CBB00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*800CED04 000CBB04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/* 800CED08 000CBB08  54 7E F7 7F */ extrwi. context->r30 , context->r3 , 3 , 27
/*800CED0C 000CBB0C*/ PPC::Runtime::ASM::blt(.L_800CED1C);
/*800CED10 000CBB10*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x8);
/*800CED14 000CBB14*/ PPC::Runtime::ASM::bge(.L_800CED1C);
/*800CED18 000CBB18*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800CED1C, 0x800CED1C) //this is a jump label
/*800CED1C 000CBB1C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800CED20 000CBB20*/ PPC::Runtime::ASM::bne(.L_800CED38);
/*800CED24 000CBB24*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_898 @ Get_MemoryOffset_HighBit);
/*800CED28 000CBB28*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800CED2C 000CBB2C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_898 @ Get_MemoryOffset_LowBit);
/*800CED30 000CBB30*/ PPC::Runtime::ASM::li(context->r4, 0x10b);
/*800CED34 000CBB34*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800CED38, 0x800CED38) //this is a jump label
/*800CED38 000CBB38*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800CED3C 000CBB3C*/ PPC::Runtime::ASM::beq(.L_800CED50);
/*800CED40 000CBB40*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*800CED44 000CBB44*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*800CED48 000CBB48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800CED4C 000CBB4C*/ PPC::Runtime::ASM::b(.L_800CED54);
RUNTIME_PPC_JUMP_LABEL(.L_800CED50, 0x800CED50) //this is a jump label
/*800CED50 000CBB50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF5E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800CED54, 0x800CED54) //this is a jump label
/*800CED54 000CBB54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CED58 000CBB58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CED5C 000CBB5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CED60 000CBB60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CED64 000CBB64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800CED68 000CBB68*/ PPC::Runtime::ASM::blr();
}