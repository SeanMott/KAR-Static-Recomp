//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800C3510.hpp"



void fn_800C3B58(PPC::Runtime::GCContext* context)
{
/*800C3B58 000C0958*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800C3B5C 000C095C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C3B60 000C0960*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_25 @ Get_MemoryOffset_HighBit);
/*800C3B64 000C0964*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C3B68 000C0968*/ PPC::Runtime::ASM::addi(context->r7, context->r5, MemoryOffset_25 @ Get_MemoryOffset_LowBit);
/*800C3B6C 000C096C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C3B70 000C0970*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C3B74 000C0974*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r4));
/*800C3B78 000C0978*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800C3B7C 000C097C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/* 800C3B80 000C0980  54 00 07 BF */ clrlwi. context->r0 , context->r0 , 30
/*800C3B84 000C0984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800C3B88 000C0988*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C3B8C 000C098C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C3B90 000C0990*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C3B94 000C0994*/ PPC::Runtime::ASM::bne(.L_800C3BA4);
/*800C3B98 000C0998*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800C3B9C 000C099C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C3BA0 000C09A0*/ PPC::Runtime::ASM::b(.L_800C3BC0);
RUNTIME_PPC_JUMP_LABEL(.L_800C3BA4, 0x800C3BA4) //this is a jump label
/*800C3BA4 000C09A4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800C3BA8 000C09A8*/ PPC::Runtime::ASM::bl(fn_800C3510);
/*800C3BAC 000C09AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*800C3BB0 000C09B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C3BB4 000C09B4*/ PPC::Runtime::ASM::bne(.L_800C3BC0);
/*800C3BB8 000C09B8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800C3BBC 000C09BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C3BC0, 0x800C3BC0) //this is a jump label
/*800C3BC0 000C09C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C3BC4 000C09C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C3BC8 000C09C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C3BCC 000C09CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C3BD0 000C09D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C3BD4 000C09D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C3BD8 000C09D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C3BDC 000C09DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C3BE0 000C09E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C3BE4 000C09E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800C3BE8 000C09E8*/ PPC::Runtime::ASM::blr();
}