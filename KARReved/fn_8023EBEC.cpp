//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8023EBEC(PPC::Runtime::GCContext* context)
{
/*8023EBEC 0023B9EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023EBF0 0023B9F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023EBF4 0023B9F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023EBF8 0023B9F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023EBFC 0023B9FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023EC00 0023BA00*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8023EC04 0023BA04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023EC08 0023BA08*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8023EC0C 0023BA0C*/ PPC::Runtime::ASM::bne(.L_8023EC20);
/*8023EC10 0023BA10*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72EC @ Get_MemoryOffset_SDA21);
/*8023EC14 0023BA14*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8023EC18 0023BA18*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72F4 @ Get_MemoryOffset_SDA21);
/*8023EC1C 0023BA1C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023EC20, 0x8023EC20) //this is a jump label
/*8023EC20 0023BA20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8023EC24 0023BA24*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8023EC28 0023BA28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8023EC2C 0023BA2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8023EC30 0023BA30*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023EC34 0023BA34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8023EC38 0023BA38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023EC3C 0023BA3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023EC40 0023BA40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8023EC44 0023BA44*/ PPC::Runtime::ASM::fadds(context->f4, context->f1, context->f0);
/*8023EC48 0023BA48*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023EC4C 0023BA4C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8023EC50 0023BA50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8023EC54 0023BA54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8023EC58 0023BA58*/ PPC::Runtime::ASM::fadds(context->f2, context->f3, context->f2);
/*8023EC5C 0023BA5C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023EC60 0023BA60*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8023EC64 0023BA64*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023EC68 0023BA68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8023EC6C 0023BA6C*/ PPC::Runtime::ASM::bne(.L_8023EC80);
/*8023EC70 0023BA70*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72EC @ Get_MemoryOffset_SDA21);
/*8023EC74 0023BA74*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8023EC78 0023BA78*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72F4 @ Get_MemoryOffset_SDA21);
/*8023EC7C 0023BA7C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023EC80, 0x8023EC80) //this is a jump label
/*8023EC80 0023BA80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023EC84 0023BA84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023EC88 0023BA88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8023EC8C 0023BA8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8023EC90 0023BA90*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8023EC94 0023BA94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8023EC98 0023BA98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8023EC9C 0023BA9C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8023ECA0 0023BAA0*/ PPC::Runtime::ASM::bne(.L_8023ECEC);
/*8023ECA4 0023BAA4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8023ECA8 0023BAA8*/ PPC::Runtime::ASM::beq(.L_8023ECEC);
/*8023ECAC 0023BAAC*/ PPC::Runtime::ASM::bne(.L_8023ECC0);
/*8023ECB0 0023BAB0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72EC @ Get_MemoryOffset_SDA21);
/*8023ECB4 0023BAB4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8023ECB8 0023BAB8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72F4 @ Get_MemoryOffset_SDA21);
/*8023ECBC 0023BABC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023ECC0, 0x8023ECC0) //this is a jump label
/*8023ECC0 0023BAC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8023ECC4 0023BAC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023ECC8 0023BAC8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8023ECCC 0023BACC*/ PPC::Runtime::ASM::bne(.L_8023ECDC);
/*8023ECD0 0023BAD0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8023ECD4 0023BAD4*/ PPC::Runtime::ASM::beq(.L_8023ECDC);
/*8023ECD8 0023BAD8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8023ECDC, 0x8023ECDC) //this is a jump label
/*8023ECDC 0023BADC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023ECE0 0023BAE0*/ PPC::Runtime::ASM::bne(.L_8023ECEC);
/*8023ECE4 0023BAE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8023ECE8 0023BAE8*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8023ECEC, 0x8023ECEC) //this is a jump label
/*8023ECEC 0023BAEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8023ECF0 0023BAF0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023ECF4 0023BAF4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8023ECF8 0023BAF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8023ECFC 0023BAFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8023ED00 0023BB00*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8023ED04 0023BB04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8023ED08 0023BB08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8023ED0C 0023BB0C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8023ED10 0023BB10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8023ED14 0023BB14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023ED18 0023BB18*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023ED1C 0023BB1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023ED20 0023BB20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023ED24 0023BB24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8023ED28 0023BB28*/ PPC::Runtime::ASM::blr();
}