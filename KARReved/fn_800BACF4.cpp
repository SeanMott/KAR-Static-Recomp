//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800670B4.hpp"



void fn_800BACF4(PPC::Runtime::GCContext* context)
{
/*800BACF4 000B7AF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800BACF8 000B7AF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BACFC 000B7AFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800BAD00 000B7B00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BAD04 000B7B04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BAD08 000B7B08*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BAD0C 000B7B0C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800BAD10 000B7B10*/ PPC::Runtime::ASM::blt(.L_800BAD1C);
/*800BAD14 000B7B14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*800BAD18 000B7B18*/ PPC::Runtime::ASM::blt(.L_800BAD24);
RUNTIME_PPC_JUMP_LABEL(.L_800BAD1C, 0x800BAD1C) //this is a jump label
/*800BAD1C 000B7B1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800BAD20 000B7B20*/ PPC::Runtime::ASM::b(.L_800BAD38);
RUNTIME_PPC_JUMP_LABEL(.L_800BAD24, 0x800BAD24) //this is a jump label
/*800BAD24 000B7B24*/ PPC::Runtime::ASM::lis(context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BAD28 000B7B28*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800BAD2C 000B7B2C*/ PPC::Runtime::ASM::addi(context->r3, context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BAD30 000B7B30*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800BAD34 000B7B34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800BAD38, 0x800BAD38) //this is a jump label
/*800BAD38 000B7B38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BAD3C 000B7B3C*/ PPC::Runtime::ASM::beq(.L_800BAD48);
/*800BAD40 000B7B40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800BAD44 000B7B44*/ PPC::Runtime::ASM::b(.L_800BAD4C);
RUNTIME_PPC_JUMP_LABEL(.L_800BAD48, 0x800BAD48) //this is a jump label
/*800BAD48 000B7B48*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BAD4C, 0x800BAD4C) //this is a jump label
/*800BAD4C 000B7B4C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800BAD50 000B7B50*/ PPC::Runtime::ASM::beq(.L_800BAD74);
/*800BAD54 000B7B54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800BAD58 000B7B58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BAD5C 000B7B5C*/ PPC::Runtime::ASM::beq(.L_800BAD74);
/*800BAD60 000B7B60*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800BAD64 000B7B64*/ PPC::Runtime::ASM::bl(fn_800670B4);
/*800BAD68 000B7B68*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*800BAD6C 000B7B6C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x71, context->r31));
/*800BAD70 000B7B70*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800BAD74, 0x800BAD74) //this is a jump label
/*800BAD74 000B7B74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BAD78 000B7B78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BAD7C 000B7B7C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BAD80 000B7B80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BAD84 000B7B84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800BAD88 000B7B88*/ PPC::Runtime::ASM::blr();
}