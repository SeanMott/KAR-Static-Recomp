//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_803124F0.hpp"



void fn_8036EDD8(PPC::Runtime::GCContext* context)
{
/*8036EDD8 0036BBD8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*8036EDDC 0036BBDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036EDE0 0036BBE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8036EDE4 0036BBE4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8036EDE8 0036BBE8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8036EDEC 0036BBEC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8036EDF0 0036BBF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*8036EDF4 0036BBF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8036EDF8 0036BBF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*8036EDFC 0036BBFC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036EE00 0036BC00*/ PPC::Runtime::ASM::bctrl();
/*8036EE04 0036BC04*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8036EE08 0036BC08*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036EE0C 0036BC0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4924 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036EE10 0036BC10*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8036EE14 0036BC14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8036EE18 0036BC18*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*8036EE1C 0036BC1C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8036EE20 0036BC20*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8c);
/*8036EE24 0036BC24*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8036EE28 0036BC28*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8036EE2C 0036BC2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8036EE30 0036BC30*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8036EE34 0036BC34  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8036EE38 0036BC38*/ PPC::Runtime::ASM::bne(.L_8036EE4C);
/*8036EE3C 0036BC3C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB940 @ Get_MemoryOffset_SDA21);
/*8036EE40 0036BC40*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8036EE44 0036BC44*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB948 @ Get_MemoryOffset_SDA21);
/*8036EE48 0036BC48*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036EE4C, 0x8036EE4C) //this is a jump label
/*8036EE4C 0036BC4C*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x48);
/*8036EE50 0036BC50*/ PPC::Runtime::ASM::bne(.L_8036EE68);
/*8036EE54 0036BC54*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F08D0 @ Get_MemoryOffset_HighBit);
/*8036EE58 0036BC58*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB940 @ Get_MemoryOffset_SDA21);
/*8036EE5C 0036BC5C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804F08D0 @ Get_MemoryOffset_LowBit);
/*8036EE60 0036BC60*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*8036EE64 0036BC64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036EE68, 0x8036EE68) //this is a jump label
/*8036EE68 0036BC68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8036EE6C 0036BC6C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8036EE70 0036BC70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8036EE74 0036BC74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8036EE78 0036BC78*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8036EE7C 0036BC7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8036EE80 0036BC80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8036EE84 0036BC84*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8036EE88 0036BC88*/ PPC::Runtime::ASM::bne(.L_8036EED4);
/*8036EE8C 0036BC8C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8036EE90 0036BC90*/ PPC::Runtime::ASM::beq(.L_8036EED4);
/*8036EE94 0036BC94*/ PPC::Runtime::ASM::bne(.L_8036EEA8);
/*8036EE98 0036BC98*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB940 @ Get_MemoryOffset_SDA21);
/*8036EE9C 0036BC9C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8036EEA0 0036BCA0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB948 @ Get_MemoryOffset_SDA21);
/*8036EEA4 0036BCA4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036EEA8, 0x8036EEA8) //this is a jump label
/*8036EEA8 0036BCA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8036EEAC 0036BCAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8036EEB0 0036BCB0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8036EEB4 0036BCB4*/ PPC::Runtime::ASM::bne(.L_8036EEC4);
/*8036EEB8 0036BCB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8036EEBC 0036BCBC*/ PPC::Runtime::ASM::beq(.L_8036EEC4);
/*8036EEC0 0036BCC0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8036EEC4, 0x8036EEC4) //this is a jump label
/* 8036EEC4 0036BCC4  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8036EEC8 0036BCC8*/ PPC::Runtime::ASM::bne(.L_8036EED4);
/*8036EECC 0036BCCC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8036EED0 0036BCD0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8036EED4, 0x8036EED4) //this is a jump label
/*8036EED4 0036BCD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4924 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036EED8 0036BCD8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8036EEDC 0036BCDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8036EEE0 0036BCE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8036EEE4 0036BCE4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036EEE8 0036BCE8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x548, context->r3));
/*8036EEEC 0036BCEC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*8036EEF0 0036BCF0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8036EEF4 0036BCF4*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*8036EEF8 0036BCF8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8c);
/*8036EEFC 0036BCFC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036EF00 0036BD00*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8036EF04 0036BD04  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8036EF08 0036BD08*/ PPC::Runtime::ASM::bne(.L_8036EF1C);
/*8036EF0C 0036BD0C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB940 @ Get_MemoryOffset_SDA21);
/*8036EF10 0036BD10*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*8036EF14 0036BD14*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB948 @ Get_MemoryOffset_SDA21);
/*8036EF18 0036BD18*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036EF1C, 0x8036EF1C) //this is a jump label
/*8036EF1C 0036BD1C*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x3c);
/*8036EF20 0036BD20*/ PPC::Runtime::ASM::bne(.L_8036EF34);
/*8036EF24 0036BD24*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB940 @ Get_MemoryOffset_SDA21);
/*8036EF28 0036BD28*/ PPC::Runtime::ASM::li(context->r4, 0x317);
/*8036EF2C 0036BD2C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB950 @ Get_MemoryOffset_SDA21);
/*8036EF30 0036BD30*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036EF34, 0x8036EF34) //this is a jump label
/*8036EF34 0036BD34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8036EF38 0036BD38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8036EF3C 0036BD3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8036EF40 0036BD40*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8036EF44 0036BD44*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8036EF48 0036BD48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8036EF4C 0036BD4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8036EF50 0036BD50*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8036EF54 0036BD54*/ PPC::Runtime::ASM::bne(.L_8036EFA0);
/*8036EF58 0036BD58*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8036EF5C 0036BD5C*/ PPC::Runtime::ASM::beq(.L_8036EFA0);
/*8036EF60 0036BD60*/ PPC::Runtime::ASM::bne(.L_8036EF74);
/*8036EF64 0036BD64*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB940 @ Get_MemoryOffset_SDA21);
/*8036EF68 0036BD68*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8036EF6C 0036BD6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB948 @ Get_MemoryOffset_SDA21);
/*8036EF70 0036BD70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036EF74, 0x8036EF74) //this is a jump label
/*8036EF74 0036BD74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8036EF78 0036BD78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8036EF7C 0036BD7C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8036EF80 0036BD80*/ PPC::Runtime::ASM::bne(.L_8036EF90);
/*8036EF84 0036BD84*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8036EF88 0036BD88*/ PPC::Runtime::ASM::beq(.L_8036EF90);
/*8036EF8C 0036BD8C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8036EF90, 0x8036EF90) //this is a jump label
/* 8036EF90 0036BD90  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8036EF94 0036BD94*/ PPC::Runtime::ASM::bne(.L_8036EFA0);
/*8036EF98 0036BD98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8036EF9C 0036BD9C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8036EFA0, 0x8036EFA0) //this is a jump label
/*8036EFA0 0036BDA0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036EFA4 0036BDA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*8036EFA8 0036BDA8*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036EFAC 0036BDAC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53c, context->r3));
/*8036EFB0 0036BDB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036EFB4 0036BDB4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4928 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036EFB8 0036BDB8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036EFBC 0036BDBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4920 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036EFC0 0036BDC0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB938 @ Get_MemoryOffset_SDA21);
/*8036EFC4 0036BDC4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*8036EFC8 0036BDC8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB930 @ Get_MemoryOffset_SDA21);
/*8036EFCC 0036BDCC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8036EFD0 0036BDD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8036EFD4 0036BDD4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r31));
/*8036EFD8 0036BDD8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r31));
/*8036EFDC 0036BDDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*8036EFE0 0036BDE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8036EFE4 0036BDE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*8036EFE8 0036BDE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8036EFEC 0036BDEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*8036EFF0 0036BDF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8036EFF4 0036BDF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*8036EFF8 0036BDF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*8036EFFC 0036BDFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*8036F000 0036BE00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*8036F004 0036BE04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*8036F008 0036BE08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*8036F00C 0036BE0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8036F010 0036BE10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
/*8036F014 0036BE14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r31));
/*8036F018 0036BE18*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*8036F01C 0036BE1C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036F020 0036BE20*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8036F024 0036BE24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*8036F028 0036BE28*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x58);
/*8036F02C 0036BE2C*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x64);
/*8036F030 0036BE30*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8036F034 0036BE34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*8036F038 0036BE38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8036F03C 0036BE3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8036F040 0036BE40*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8036F044 0036BE44*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8036F048 0036BE48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8036F04C 0036BE4C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8036F050 0036BE50*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8036F054 0036BE54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8036F058 0036BE58*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8036F05C 0036BE5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*8036F060 0036BE60*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*8036F064 0036BE64*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036F068 0036BE68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8036F06C 0036BE6C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036F070 0036BE70*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8036F074 0036BE74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8036F078 0036BE78*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*8036F07C 0036BE7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8036F080 0036BE80*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036F084 0036BE84*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f0);
/*8036F088 0036BE88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4920 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036F08C 0036BE8C*/ PPC::Runtime::ASM::fmadds(context->f4, context->f2, context->f2, context->f1);
/*8036F090 0036BE90*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*8036F094 0036BE94*/ PPC::Runtime::ASM::ble(.L_8036F0E4);
/*8036F098 0036BE98*/ PPC::Runtime::ASM::frsqrte(context->f1, context->f4);
/*8036F09C 0036BE9C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E4930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036F0A0 0036BEA0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E4938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036F0A4 0036BEA4*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8036F0A8 0036BEA8*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8036F0AC 0036BEAC*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f4, context->f0, context->f2);
/*8036F0B0 0036BEB0*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8036F0B4 0036BEB4*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8036F0B8 0036BEB8*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8036F0BC 0036BEBC*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f4, context->f0, context->f2);
/*8036F0C0 0036BEC0*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8036F0C4 0036BEC4*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8036F0C8 0036BEC8*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8036F0CC 0036BECC*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f4, context->f0, context->f2);
/*8036F0D0 0036BED0*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*8036F0D4 0036BED4*/ PPC::Runtime::ASM::fmul(context->f0, context->f4, context->f0);
/*8036F0D8 0036BED8*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*8036F0DC 0036BEDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036F0E0 0036BEE0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8036F0E4, 0x8036F0E4) //this is a jump label
/*8036F0E4 0036BEE4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4940 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036F0E8 0036BEE8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*8036F0EC 0036BEEC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4920 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036F0F0 0036BEF0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8036F0F4 0036BEF4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f4);
/*8036F0F8 0036BEF8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036F0FC 0036BEFC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8036F100 0036BF00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r31));
/*8036F104 0036BF04*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8036F108 0036BF08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8036F10C 0036BF0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8036F110 0036BF10*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8036F114 0036BF14*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8036F118 0036BF18*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036F11C 0036BF1C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8036F120 0036BF20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036F124 0036BF24*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*8036F128 0036BF28*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036F12C 0036BF2C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*8036F130 0036BF30*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8036F134 0036BF34*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8036F138 0036BF38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036F13C 0036BF3C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8036F140 0036BF40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4940 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036F144 0036BF44*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8036F148 0036BF48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036F14C 0036BF4C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*8036F150 0036BF50*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8036F154 0036BF54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8036F158 0036BF58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036F15C 0036BF5C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8036F160 0036BF60*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r31));
/*8036F164 0036BF64*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
/*8036F168 0036BF68*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8036F16C 0036BF6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8036F170 0036BF70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*8036F174 0036BF74*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036F178 0036BF78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x558, context->r3));
/*8036F17C 0036BF7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*8036F180 0036BF80*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*8036F184 0036BF84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*8036F188 0036BF88*/ PPC::Runtime::ASM::bl(fn_803124F0);
/*8036F18C 0036BF8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8036F190 0036BF90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*8036F194 0036BF94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8036F198 0036BF98*/ PPC::Runtime::ASM::bge(.L_8036F1A0);
/*8036F19C 0036BF9C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036F1A0, 0x8036F1A0) //this is a jump label
/*8036F1A0 0036BFA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8036F1A4 0036BFA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8036F1A8 0036BFA8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8036F1AC 0036BFAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036F1B0 0036BFB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*8036F1B4 0036BFB4*/ PPC::Runtime::ASM::blr();
}