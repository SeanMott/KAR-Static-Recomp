//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "SIGetType.hpp"



void fn_UpdateOrigin(PPC::Runtime::GCContext* context)
{
/*803DBC6C 003D8A6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DBC70 003D8A70*/ PPC::Runtime::ASM::lis(context->r5, lbl_8056E360 @ Get_MemoryOffset_HighBit);
/*803DBC74 003D8A74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DBC78 003D8A78*/ PPC::Runtime::ASM::mulli(context->r6, context->r3, 0xc);
/*803DBC7C 003D8A7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803DBC80 003D8A80*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_8056E360 @ Get_MemoryOffset_LowBit);
/*803DBC84 003D8A84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DBC88 003D8A88*/ PPC::Runtime::ASM::add(context->r31, context->r5, context->r6);
/*803DBC8C 003D8A8C*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_31 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DBC90 003D8A90*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r0, 0, 21, 23);
/*803DBC94 003D8A94*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x400);
/*803DBC98 003D8A98*/ PPC::Runtime::ASM::lis(context->r0, 0x8000);
/*803DBC9C 003D8A9C*/ PPC::Runtime::ASM::srw(context->r0, context->r0, context->r3);
/*803DBCA0 003D8AA0*/ PPC::Runtime::ASM::beq(.L_803DBD94);
/*803DBCA4 003D8AA4*/ PPC::Runtime::ASM::bge(.L_803DBCD8);
/*803DBCA8 003D8AA8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x200);
/*803DBCAC 003D8AAC*/ PPC::Runtime::ASM::beq(.L_803DBD64);
/*803DBCB0 003D8AB0*/ PPC::Runtime::ASM::bge(.L_803DBCCC);
/*803DBCB4 003D8AB4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x100);
/*803DBCB8 003D8AB8*/ PPC::Runtime::ASM::beq(.L_803DBD30);
/*803DBCBC 003D8ABC*/ PPC::Runtime::ASM::bge(.L_803DBD94);
/*803DBCC0 003D8AC0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803DBCC4 003D8AC4*/ PPC::Runtime::ASM::beq(.L_803DBCFC);
/*803DBCC8 003D8AC8*/ PPC::Runtime::ASM::b(.L_803DBD94);
RUNTIME_PPC_JUMP_LABEL(.L_803DBCCC, 0x803DBCCC) //this is a jump label
/*803DBCCC 003D8ACC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x300);
/*803DBCD0 003D8AD0*/ PPC::Runtime::ASM::beq(.L_803DBD94);
/*803DBCD4 003D8AD4*/ PPC::Runtime::ASM::b(.L_803DBD94);
RUNTIME_PPC_JUMP_LABEL(.L_803DBCD8, 0x803DBCD8) //this is a jump label
/*803DBCD8 003D8AD8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x600);
/*803DBCDC 003D8ADC*/ PPC::Runtime::ASM::beq(.L_803DBCFC);
/*803DBCE0 003D8AE0*/ PPC::Runtime::ASM::bge(.L_803DBCF0);
/*803DBCE4 003D8AE4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x500);
/*803DBCE8 003D8AE8*/ PPC::Runtime::ASM::beq(.L_803DBCFC);
/*803DBCEC 003D8AEC*/ PPC::Runtime::ASM::b(.L_803DBD94);
RUNTIME_PPC_JUMP_LABEL(.L_803DBCF0, 0x803DBCF0) //this is a jump label
/*803DBCF0 003D8AF0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x700);
/*803DBCF4 003D8AF4*/ PPC::Runtime::ASM::beq(.L_803DBCFC);
/*803DBCF8 003D8AF8*/ PPC::Runtime::ASM::b(.L_803DBD94);
RUNTIME_PPC_JUMP_LABEL(.L_803DBCFC, 0x803DBCFC) //this is a jump label
/*803DBCFC 003D8AFC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*803DBD00 003D8B00*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD04 003D8B04*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*803DBD08 003D8B08*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*803DBD0C 003D8B0C*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD10 003D8B10*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*803DBD14 003D8B14*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803DBD18 003D8B18*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD1C 003D8B1C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803DBD20 003D8B20*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*803DBD24 003D8B24*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD28 003D8B28*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*803DBD2C 003D8B2C*/ PPC::Runtime::ASM::b(.L_803DBD94);
RUNTIME_PPC_JUMP_LABEL(.L_803DBD30, 0x803DBD30) //this is a jump label
/*803DBD30 003D8B30*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803DBD34 003D8B34*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD38 003D8B38*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803DBD3C 003D8B3C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803DBD40 003D8B40*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD44 003D8B44*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803DBD48 003D8B48*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803DBD4C 003D8B4C*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD50 003D8B50*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803DBD54 003D8B54*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*803DBD58 003D8B58*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD5C 003D8B5C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*803DBD60 003D8B60*/ PPC::Runtime::ASM::b(.L_803DBD94);
RUNTIME_PPC_JUMP_LABEL(.L_803DBD64, 0x803DBD64) //this is a jump label
/*803DBD64 003D8B64*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803DBD68 003D8B68*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD6C 003D8B6C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803DBD70 003D8B70*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803DBD74 003D8B74*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD78 003D8B78*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803DBD7C 003D8B7C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*803DBD80 003D8B80*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD84 003D8B84*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*803DBD88 003D8B88*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*803DBD8C 003D8B8C*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 4);
/*803DBD90 003D8B90*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803DBD94, 0x803DBD94) //this is a jump label
/*803DBD94 003D8B94*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*803DBD98 003D8B98*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x80);
/*803DBD9C 003D8B9C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*803DBDA0 003D8BA0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*803DBDA4 003D8BA4*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x80);
/*803DBDA8 003D8BA8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*803DBDAC 003D8BAC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803DBDB0 003D8BB0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x80);
/*803DBDB4 003D8BB4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803DBDB8 003D8BB8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803DBDBC 003D8BBC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x80);
/*803DBDC0 003D8BC0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803DBDC4 003D8BC4*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_32 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DBDC8 003D8BC8*/ PPC::Runtime::ASM::and.(context->r0, context->r4, context->r0);
/*803DBDCC 003D8BCC*/ PPC::Runtime::ASM::beq(.L_803DBDFC);
/*803DBDD0 003D8BD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*803DBDD4 003D8BD4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*803DBDD8 003D8BD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x40);
/*803DBDDC 003D8BDC*/ PPC::Runtime::ASM::ble(.L_803DBDFC);
/*803DBDE0 003D8BE0*/ PPC::Runtime::ASM::bl(SIGetType);
/*803DBDE4 003D8BE4*/ PPC::Runtime::ASM::clrrwi(context->r3, context->r3, 16);
/*803DBDE8 003D8BE8*/ PPC::Runtime::ASM::subis(context->r0, context->r3, 0x900);
/*803DBDEC 003D8BEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803DBDF0 003D8BF0*/ PPC::Runtime::ASM::bne(.L_803DBDFC);
/*803DBDF4 003D8BF4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803DBDF8 003D8BF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803DBDFC, 0x803DBDFC) //this is a jump label
/*803DBDFC 003D8BFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DBE00 003D8C00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DBE04 003D8C04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803DBE08 003D8C08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DBE0C 003D8C0C*/ PPC::Runtime::ASM::blr();
}