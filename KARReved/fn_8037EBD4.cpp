//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028B2CC.hpp"



void fn_8037EBD4(PPC::Runtime::GCContext* context)
{
/*8037EBD4 0037B9D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*8037EBD8 0037B9D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037EBDC 0037B9DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8037EBE0 0037B9E0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8037EBE4 0037B9E4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8037EBE8 0037B9E8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8037EBEC 0037B9EC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8037EBF0 0037B9F0*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037EBF4 0037B9F4*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8037EBF8 0037B9F8*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037EBFC 0037B9FC*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8037EC00 0037BA00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8037EC04 0037BA04*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8037EC08 0037BA08*/ PPC::Runtime::ASM::lfs(context->f29, STRUCT_FLOAT_COUNT_1805E4C60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037EC0C 0037BA0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037EC10 0037BA10*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037EC14 0037BA14*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8037EC18 0037BA18*/ PPC::Runtime::ASM::fmr(context->f28, context->f29);
/*8037EC1C 0037BA1C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037EC20 0037BA20*/ PPC::Runtime::ASM::fmr(context->f31, context->f29);
/*8037EC24 0037BA24*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD68 @ Get_MemoryOffset_SDA21);
/*8037EC28 0037BA28*/ PPC::Runtime::ASM::fmr(context->f30, context->f29);
/*8037EC2C 0037BA2C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBD60 @ Get_MemoryOffset_SDA21);
/*8037EC30 0037BA30*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037EC34 0037BA34*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8037EC38 0037BA38*/ PPC::Runtime::ASM::b(.L_8037ECEC);
RUNTIME_PPC_JUMP_LABEL(.L_8037EC3C, 0x8037EC3C) //this is a jump label
/*8037EC3C 0037BA3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8037EC40 0037BA40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8037EC44 0037BA44*/ PPC::Runtime::ASM::bne(.L_8037EC54);
/*8037EC48 0037BA48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8037EC4C 0037BA4C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8037EC50 0037BA50*/ PPC::Runtime::ASM::beq(.L_8037EC5C);
RUNTIME_PPC_JUMP_LABEL(.L_8037EC54, 0x8037EC54) //this is a jump label
/*8037EC54 0037BA54*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8037EC58 0037BA58*/ PPC::Runtime::ASM::b(.L_8037EC60);
RUNTIME_PPC_JUMP_LABEL(.L_8037EC5C, 0x8037EC5C) //this is a jump label
/*8037EC5C 0037BA5C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8037EC60, 0x8037EC60) //this is a jump label
/* 8037EC60 0037BA60  54 00 06 3F */ clrlwi. context->r0 , context->r0 , 24
/*8037EC64 0037BA64*/ PPC::Runtime::ASM::beq(.L_8037ECDC);
/*8037EC68 0037BA68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r3));
/*8037EC6C 0037BA6C*/ PPC::Runtime::ASM::lis(context->r6, 0x4330);
/*8037EC70 0037BA70*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037EC74 0037BA74*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8037EC78 0037BA78*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E4C68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037EC7C 0037BA7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037EC80 0037BA80*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037EC84 0037BA84*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r1));
/*8037EC88 0037BA88*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037EC8C 0037BA8C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
/*8037EC90 0037BA90*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037EC94 0037BA94*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037EC98 0037BA98*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8037EC9C 0037BA9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r1));
/*8037ECA0 0037BAA0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037ECA4 0037BAA4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037ECA8 0037BAA8*/ PPC::Runtime::ASM::fadds(context->f29, context->f29, context->f1);
/*8037ECAC 0037BAAC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8037ECB0 0037BAB0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8037ECB4 0037BAB4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037ECB8 0037BAB8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037ECBC 0037BABC*/ PPC::Runtime::ASM::fadds(context->f28, context->f28, context->f1);
/*8037ECC0 0037BAC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037ECC4 0037BAC4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8037ECC8 0037BAC8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037ECCC 0037BACC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037ECD0 0037BAD0*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f1);
/*8037ECD4 0037BAD4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8037ECD8 0037BAD8*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8037ECDC, 0x8037ECDC) //this is a jump label
/*8037ECDC 0037BADC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037ECE0 0037BAE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8037ECE4 0037BAE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037ECE8 0037BAE8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8037ECEC, 0x8037ECEC) //this is a jump label
/*8037ECEC 0037BAEC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037ECF0 0037BAF0*/ PPC::Runtime::ASM::bne(.L_8037EC3C);
/*8037ECF4 0037BAF4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8037ECF8 0037BAF8*/ PPC::Runtime::ASM::beq(.L_8037EEC4);
/*8037ECFC 0037BAFC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8037ED00 0037BB00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037ED04 0037BB04*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4C68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037ED08 0037BB08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037ED0C 0037BB0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4C64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037ED10 0037BB10*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037ED14 0037BB14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8037ED18 0037BB18*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8037ED1C 0037BB1C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8037ED20 0037BB20*/ PPC::Runtime::ASM::fmuls(context->f3, context->f29, context->f0);
/*8037ED24 0037BB24*/ PPC::Runtime::ASM::fmuls(context->f2, context->f28, context->f0);
/*8037ED28 0037BB28*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f0);
/*8037ED2C 0037BB2C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*8037ED30 0037BB30*/ PPC::Runtime::ASM::fctiwz(context->f3, context->f3);
/*8037ED34 0037BB34*/ PPC::Runtime::ASM::fctiwz(context->f2, context->f2);
/*8037ED38 0037BB38*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*8037ED3C 0037BB3C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8037ED40 0037BB40*/ PPC::Runtime::ASM::stfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037ED44 0037BB44*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037ED48 0037BB48*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8037ED4C 0037BB4C*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037ED50 0037BB50*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037ED54 0037BB54*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8037ED58 0037BB58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037ED5C 0037BB5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8037ED60 0037BB60*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037ED64 0037BB64*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*8037ED68 0037BB68*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*8037ED6C 0037BB6C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r1));
/*8037ED70 0037BB70*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetCurrent?);
/*8037ED74 0037BB74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8037ED78 0037BB78*/ PPC::Runtime::ASM::beq(.L_8037EEC4);
/*8037ED7C 0037BB7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8037ED80 0037BB80*/ PPC::Runtime::ASM::bl(fn_8028B2CC);
/*8037ED84 0037BB84*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*8037ED88 0037BB88*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8037ED8C 0037BB8C*/ PPC::Runtime::ASM::bl(fn_GXSetCullMode);
/*8037ED90 0037BB90*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037ED94 0037BB94*/ PPC::Runtime::ASM::bl(fn_GXSetNumTexGens);
/*8037ED98 0037BB98*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037ED9C 0037BB9C*/ PPC::Runtime::ASM::bl(fn_GXSetNumTevStages);
/*8037EDA0 0037BBA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037EDA4 0037BBA4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8037EDA8 0037BBA8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037EDAC 0037BBAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037EDB0 0037BBB0*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*8037EDB4 0037BBB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037EDB8 0037BBB8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8037EDBC 0037BBBC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037EDC0 0037BBC0*/ PPC::Runtime::ASM::bl(fn_GXSetZMode);
/*8037EDC4 0037BBC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037EDC8 0037BBC8*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8037EDCC 0037BBCC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037EDD0 0037BBD0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8037EDD4 0037BBD4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037EDD8 0037BBD8*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*8037EDDC 0037BBDC*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*8037EDE0 0037BBE0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037EDE4 0037BBE4*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*8037EDE8 0037BBE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037EDEC 0037BBEC*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*8037EDF0 0037BBF0*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8037EDF4 0037BBF4*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8037EDF8 0037BBF8*/ PPC::Runtime::ASM::bl(fn_GXSetTevOrder);
/*8037EDFC 0037BBFC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037EE00 0037BC00*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8037EE04 0037BC04*/ PPC::Runtime::ASM::li(context->r5, 0xf);
/*8037EE08 0037BC08*/ PPC::Runtime::ASM::li(context->r6, 0xc);
/*8037EE0C 0037BC0C*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*8037EE10 0037BC10*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorIn);
/*8037EE14 0037BC14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037EE18 0037BC18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037EE1C 0037BC1C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037EE20 0037BC20*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037EE24 0037BC24*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8037EE28 0037BC28*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037EE2C 0037BC2C*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorOp);
/*8037EE30 0037BC30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037EE34 0037BC34*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8037EE38 0037BC38*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*8037EE3C 0037BC3C*/ PPC::Runtime::ASM::li(context->r6, 0x6);
/*8037EE40 0037BC40*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8037EE44 0037BC44*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaIn);
/*8037EE48 0037BC48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037EE4C 0037BC4C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037EE50 0037BC50*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037EE54 0037BC54*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037EE58 0037BC58*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8037EE5C 0037BC5C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037EE60 0037BC60*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaOp);
/*8037EE64 0037BC64*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037EE68 0037BC68*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8037EE6C 0037BC6C*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8037EE70 0037BC70*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037EE74 0037BC74*/ PPC::Runtime::ASM::bl(fn_GXSetBlendMode);
/*8037EE78 0037BC78*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*8037EE7C 0037BC7C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037EE80 0037BC80*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8037EE84 0037BC84*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8037EE88 0037BC88*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4C60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037EE8C 0037BC8C*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*8037EE90 0037BC90*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037EE94 0037BC94*/ PPC::Runtime::ASM::fneg(context->f3, context->f2);
/*8037EE98 0037BC98*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EE9C 0037BC9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4C70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037EEA0 0037BCA0*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*8037EEA4 0037BCA4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EEA8 0037BCA8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EEAC 0037BCAC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EEB0 0037BCB0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EEB4 0037BCB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EEB8 0037BCB8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EEBC 0037BCBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8037EEC0 0037BCC0*/ PPC::Runtime::ASM::bl(fn_HSD_CObjEndCurrent);
RUNTIME_PPC_JUMP_LABEL(.L_8037EEC4, 0x8037EEC4) //this is a jump label
/*8037EEC4 0037BCC4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8037EEC8 0037BCC8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8037EECC 0037BCCC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8037EED0 0037BCD0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8037EED4 0037BCD4*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8037EED8 0037BCD8*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037EEDC 0037BCDC*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8037EEE0 0037BCE0*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037EEE4 0037BCE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8037EEE8 0037BCE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8037EEEC 0037BCEC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8037EEF0 0037BCF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037EEF4 0037BCF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*8037EEF8 0037BCF8*/ PPC::Runtime::ASM::blr();
}