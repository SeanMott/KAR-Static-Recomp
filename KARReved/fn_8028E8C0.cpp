//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028E940.hpp"



void fn_8028E8C0(PPC::Runtime::GCContext* context)
{
/*8028E8C0 0028B6C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028E8C4 0028B6C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028E8C8 0028B6C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028E8CC 0028B6CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028E8D0 0028B6D0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028E8D4 0028B6D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028E8D8 0028B6D8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028E8DC 0028B6DC*/ PPC::Runtime::ASM::beq(.L_8028E924);
/*8028E8E0 0028B6E0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD4E4 @ Get_MemoryOffset_HighBit);
/*8028E8E4 0028B6E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4);
/*8028E8E8 0028B6E8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD4E4 @ Get_MemoryOffset_LowBit);
/*8028E8EC 0028B6EC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028E8F0 0028B6F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028E8F4 0028B6F4*/ PPC::Runtime::ASM::bl(fn_8028E940);
/*8028E8F8 0028B6F8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028E8FC 0028B6FC*/ PPC::Runtime::ASM::beq(.L_8028E914);
/*8028E900 0028B700*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD4C0 @ Get_MemoryOffset_HighBit);
/*8028E904 0028B704*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028E908 0028B708*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BD4C0 @ Get_MemoryOffset_LowBit);
/*8028E90C 0028B70C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028E910 0028B710*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028E914, 0x8028E914) //this is a jump label
/*8028E914 0028B714*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028E918 0028B718*/ PPC::Runtime::ASM::ble(.L_8028E924);
/*8028E91C 0028B71C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028E920 0028B720*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028E924, 0x8028E924) //this is a jump label
/*8028E924 0028B724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028E928 0028B728*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028E92C 0028B72C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028E930 0028B730*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028E934 0028B734*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028E938 0028B738*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028E93C 0028B73C*/ PPC::Runtime::ASM::blr();
}