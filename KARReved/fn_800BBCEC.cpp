//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800721D4.hpp"
#include "fn_80072458.hpp"



void fn_800BBCEC(PPC::Runtime::GCContext* context)
{
/*800BBCEC 000B8AEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800BBCF0 000B8AF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BBCF4 000B8AF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BBCF8 000B8AF8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800BBCFC 000B8AFC*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800BBD00 000B8B00*/ PPC::Runtime::ASM::lis(context->r6, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BBD04 000B8B04*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800BBD08 000B8B08*/ PPC::Runtime::ASM::addi(context->r31, context->r6, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BBD0C 000B8B0C*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*800BBD10 000B8B10*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*800BBD14 000B8B14*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*800BBD18 000B8B18*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BBD1C, 0x800BBD1C) //this is a jump label
/*800BBD1C 000B8B1C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800BBD20 000B8B20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r26));
/*800BBD24 000B8B24*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r30);
/*800BBD28 000B8B28*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*800BBD2C 000B8B2C*/ PPC::Runtime::ASM::beq(.L_800BBDE0);
/*800BBD30 000B8B30*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*800BBD34 000B8B34*/ PPC::Runtime::ASM::blt(.L_800BBD40);
/*800BBD38 000B8B38*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x20);
/*800BBD3C 000B8B3C*/ PPC::Runtime::ASM::blt(.L_800BBD48);
RUNTIME_PPC_JUMP_LABEL(.L_800BBD40, 0x800BBD40) //this is a jump label
/*800BBD40 000B8B40*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800BBD44 000B8B44*/ PPC::Runtime::ASM::b(.L_800BBD4C);
RUNTIME_PPC_JUMP_LABEL(.L_800BBD48, 0x800BBD48) //this is a jump label
/*800BBD48 000B8B48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800BBD4C, 0x800BBD4C) //this is a jump label
/*800BBD4C 000B8B4C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BBD50 000B8B50*/ PPC::Runtime::ASM::beq(.L_800BBD5C);
/*800BBD54 000B8B54*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800BBD58 000B8B58*/ PPC::Runtime::ASM::b(.L_800BBD60);
RUNTIME_PPC_JUMP_LABEL(.L_800BBD5C, 0x800BBD5C) //this is a jump label
/*800BBD5C 000B8B5C*/ PPC::Runtime::ASM::li(context->r24, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BBD60, 0x800BBD60) //this is a jump label
/*800BBD60 000B8B60*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*800BBD64 000B8B64*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*800BBD68 000B8B68*/ PPC::Runtime::ASM::beq(.L_800BBDD4);
/*800BBD6C 000B8B6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*800BBD70 000B8B70*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800BBD74 000B8B74*/ PPC::Runtime::ASM::bne(.L_800BBDB8);
/*800BBD78 000B8B78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*800BBD7C 000B8B7C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800BBD80 000B8B80*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BBD84 000B8B84*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800BBD88 000B8B88*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BBD8C 000B8B8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BBD90 000B8B90*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BBD94 000B8B94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BBD98 000B8B98*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BBD9C 000B8B9C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BBDA0 000B8BA0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BBDA4 000B8BA4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BBDA8 000B8BA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BBDAC 000B8BAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BBDB0 000B8BB0*/ PPC::Runtime::ASM::bl(fn_800721D4);
/*800BBDB4 000B8BB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_800BBDB8, 0x800BBDB8) //this is a jump label
/*800BBDB8 000B8BB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*800BBDBC 000B8BBC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BBDC0 000B8BC0*/ PPC::Runtime::ASM::beq(.L_800BBDD4);
/*800BBDC4 000B8BC4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800BBDC8 000B8BC8*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*800BBDCC 000B8BCC*/ PPC::Runtime::ASM::bl(fn_80072458);
/*800BBDD0 000B8BD0*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800BBDD4, 0x800BBDD4) //this is a jump label
/*800BBDD4 000B8BD4*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*800BBDD8 000B8BD8*/ PPC::Runtime::ASM::bne(.L_800BBDE0);
/*800BBDDC 000B8BDC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BBDE0, 0x800BBDE0) //this is a jump label
/*800BBDE0 000B8BE0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*800BBDE4 000B8BE4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*800BBDE8 000B8BE8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x20);
/*800BBDEC 000B8BEC*/ PPC::Runtime::ASM::blt(.L_800BBD1C);
/*800BBDF0 000B8BF0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800BBDF4 000B8BF4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800BBDF8 000B8BF8*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800BBDFC 000B8BFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BBE00 000B8C00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BBE04 000B8C04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800BBE08 000B8C08*/ PPC::Runtime::ASM::blr();
}