//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800642EC.hpp"



void fn_8037F018(PPC::Runtime::GCContext* context)
{
/*8037F018 0037BE18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8037F01C 0037BE1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037F020 0037BE20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8037F024 0037BE24*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037F028 0037BE28*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8037F02C 0037BE2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8037F030 0037BE30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8037F034 0037BE34*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8037F038 0037BE38*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8037F03C 0037BE3C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037F040 0037BE40*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8037F044 0037BE44*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8037F048 0037BE48*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyeVector?);
/*8037F04C 0037BE4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8037F050 0037BE50*/ PPC::Runtime::ASM::beq(.L_8037F150);
/*8037F054 0037BE54*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8037F058 0037BE58*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8037F05C 0037BE5C*/ PPC::Runtime::ASM::bl(fn_804020D0);
/*8037F060 0037BE60*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8037F064 0037BE64*/ PPC::Runtime::ASM::beq(.L_8037F150);
/*8037F068 0037BE68*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8037F06C 0037BE6C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8037F070 0037BE70*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8037F074 0037BE74*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037F078 0037BE78*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8037F07C 0037BE7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037F080 0037BE80*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8037F084 0037BE84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037F088 0037BE88*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*8037F08C 0037BE8C*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*8037F090 0037BE90*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8037F094 0037BE94*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*8037F098 0037BE98*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037F09C 0037BE9C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037F0A0 0037BEA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037F0A4 0037BEA4*/ PPC::Runtime::ASM::bl(fn_800642EC);
/*8037F0A8 0037BEA8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8037F0AC 0037BEAC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8037F0B0 0037BEB0*/ PPC::Runtime::ASM::bne(.L_8037F0C4);
/*8037F0B4 0037BEB4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F0B8 0037BEB8*/ PPC::Runtime::ASM::li(context->r4, 0x290);
/*8037F0BC 0037BEBC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F0C0 0037BEC0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F0C4, 0x8037F0C4) //this is a jump label
/*8037F0C4 0037BEC4*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x8);
/*8037F0C8 0037BEC8*/ PPC::Runtime::ASM::bne(.L_8037F0DC);
/*8037F0CC 0037BECC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F0D0 0037BED0*/ PPC::Runtime::ASM::li(context->r4, 0x291);
/*8037F0D4 0037BED4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDA0 @ Get_MemoryOffset_SDA21);
/*8037F0D8 0037BED8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F0DC, 0x8037F0DC) //this is a jump label
/*8037F0DC 0037BEDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037F0E0 0037BEE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8037F0E4 0037BEE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037F0E8 0037BEE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8037F0EC 0037BEEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037F0F0 0037BEF0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8037F0F4 0037BEF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037F0F8 0037BEF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8037F0FC 0037BEFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8037F100 0037BF00*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8037F104 0037BF04*/ PPC::Runtime::ASM::bne(.L_8037F150);
/*8037F108 0037BF08*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8037F10C 0037BF0C*/ PPC::Runtime::ASM::beq(.L_8037F150);
/*8037F110 0037BF10*/ PPC::Runtime::ASM::bne(.L_8037F124);
/*8037F114 0037BF14*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F118 0037BF18*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8037F11C 0037BF1C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F120 0037BF20*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F124, 0x8037F124) //this is a jump label
/*8037F124 0037BF24*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8037F128 0037BF28*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037F12C 0037BF2C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8037F130 0037BF30*/ PPC::Runtime::ASM::bne(.L_8037F140);
/*8037F134 0037BF34*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8037F138 0037BF38*/ PPC::Runtime::ASM::beq(.L_8037F140);
/*8037F13C 0037BF3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8037F140, 0x8037F140) //this is a jump label
/* 8037F140 0037BF40  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8037F144 0037BF44*/ PPC::Runtime::ASM::bne(.L_8037F150);
/*8037F148 0037BF48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8037F14C 0037BF4C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8037F150, 0x8037F150) //this is a jump label
/*8037F150 0037BF50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8037F154 0037BF54*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8037F158 0037BF58*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8037F15C 0037BF5C*/ PPC::Runtime::ASM::bne(.L_8037F170);
/*8037F160 0037BF60*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F164 0037BF64*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8037F168 0037BF68*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F16C 0037BF6C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F170, 0x8037F170) //this is a jump label
/*8037F170 0037BF70*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8037F174 0037BF74*/ PPC::Runtime::ASM::bne(.L_8037F18C);
/*8037F178 0037BF78*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F3700 @ Get_MemoryOffset_HighBit);
/*8037F17C 0037BF7C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F180 0037BF80*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804F3700 @ Get_MemoryOffset_LowBit);
/*8037F184 0037BF84*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*8037F188 0037BF88*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F18C, 0x8037F18C) //this is a jump label
/*8037F18C 0037BF8C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8037F190 0037BF90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8037F194 0037BF94*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8037F198 0037BF98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8037F19C 0037BF9C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8037F1A0 0037BFA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8037F1A4 0037BFA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8037F1A8 0037BFA8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8037F1AC 0037BFAC*/ PPC::Runtime::ASM::bne(.L_8037F1F8);
/*8037F1B0 0037BFB0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8037F1B4 0037BFB4*/ PPC::Runtime::ASM::beq(.L_8037F1F8);
/*8037F1B8 0037BFB8*/ PPC::Runtime::ASM::bne(.L_8037F1CC);
/*8037F1BC 0037BFBC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F1C0 0037BFC0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8037F1C4 0037BFC4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F1C8 0037BFC8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F1CC, 0x8037F1CC) //this is a jump label
/*8037F1CC 0037BFCC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8037F1D0 0037BFD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037F1D4 0037BFD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8037F1D8 0037BFD8*/ PPC::Runtime::ASM::bne(.L_8037F1E8);
/*8037F1DC 0037BFDC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8037F1E0 0037BFE0*/ PPC::Runtime::ASM::beq(.L_8037F1E8);
/*8037F1E4 0037BFE4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8037F1E8, 0x8037F1E8) //this is a jump label
/* 8037F1E8 0037BFE8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8037F1EC 0037BFEC*/ PPC::Runtime::ASM::bne(.L_8037F1F8);
/*8037F1F0 0037BFF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8037F1F4 0037BFF4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8037F1F8, 0x8037F1F8) //this is a jump label
/*8037F1F8 0037BFF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8037F1FC 0037BFFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8037F200 0037C000*/ PPC::Runtime::ASM::beq(.L_8037F248);
/*8037F204 0037C004*/ PPC::Runtime::ASM::bge(.L_8037F214);
/*8037F208 0037C008*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8037F20C 0037C00C*/ PPC::Runtime::ASM::bge(.L_8037F220);
/*8037F210 0037C010*/ PPC::Runtime::ASM::b(.L_8037F280);
RUNTIME_PPC_JUMP_LABEL(.L_8037F214, 0x8037F214) //this is a jump label
/*8037F214 0037C014*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8037F218 0037C018*/ PPC::Runtime::ASM::bge(.L_8037F280);
/*8037F21C 0037C01C*/ PPC::Runtime::ASM::b(.L_8037F250);
RUNTIME_PPC_JUMP_LABEL(.L_8037F220, 0x8037F220) //this is a jump label
/*8037F220 0037C020*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8037F224 0037C024*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8037F228 0037C028*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037F22C 0037C02C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E4C88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F230 0037C030*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037F234 0037C034*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F238 0037C038*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037F23C 0037C03C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*8037F240 0037C040*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*8037F244 0037C044*/ PPC::Runtime::ASM::b(.L_8037F284);
RUNTIME_PPC_JUMP_LABEL(.L_8037F248, 0x8037F248) //this is a jump label
/*8037F248 0037C048*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4C7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F24C 0037C04C*/ PPC::Runtime::ASM::b(.L_8037F284);
RUNTIME_PPC_JUMP_LABEL(.L_8037F250, 0x8037F250) //this is a jump label
/*8037F250 0037C050*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8037F254 0037C054*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8037F258 0037C058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037F25C 0037C05C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E4C88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F260 0037C060*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037F264 0037C064*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F268 0037C068*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037F26C 0037C06C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4C80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F270 0037C070*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*8037F274 0037C074*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8037F278 0037C078*/ PPC::Runtime::ASM::fsubs(context->f1, context->f3, context->f0);
/*8037F27C 0037C07C*/ PPC::Runtime::ASM::b(.L_8037F284);
RUNTIME_PPC_JUMP_LABEL(.L_8037F280, 0x8037F280) //this is a jump label
/*8037F280 0037C080*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4C80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8037F284, 0x8037F284) //this is a jump label
/*8037F284 0037C084*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F288 0037C088*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8037F28C 0037C08C*/ PPC::Runtime::ASM::ble(.L_8037F298);
/*8037F290 0037C090*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*8037F294 0037C094*/ PPC::Runtime::ASM::b(.L_8037F2A8);
RUNTIME_PPC_JUMP_LABEL(.L_8037F298, 0x8037F298) //this is a jump label
/*8037F298 0037C098*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F29C 0037C09C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8037F2A0 0037C0A0*/ PPC::Runtime::ASM::bge(.L_8037F2A8);
/*8037F2A4 0037C0A4*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8037F2A8, 0x8037F2A8) //this is a jump label
/*8037F2A8 0037C0A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037F2AC 0037C0AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8037F2B0 0037C0B0*/ PPC::Runtime::ASM::fsubs(context->f31, context->f0, context->f1);
/*8037F2B4 0037C0B4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8037F2B8 0037C0B8*/ PPC::Runtime::ASM::bne(.L_8037F2CC);
/*8037F2BC 0037C0BC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F2C0 0037C0C0*/ PPC::Runtime::ASM::li(context->r4, 0x325);
/*8037F2C4 0037C0C4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F2C8 0037C0C8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F2CC, 0x8037F2CC) //this is a jump label
/*8037F2CC 0037C0CC*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8037F2D0 0037C0D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8037F2D4 0037C0D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8037F2D8 0037C0D8*/ PPC::Runtime::ASM::bne(.L_8037F324);
/*8037F2DC 0037C0DC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8037F2E0 0037C0E0*/ PPC::Runtime::ASM::beq(.L_8037F324);
/*8037F2E4 0037C0E4*/ PPC::Runtime::ASM::bne(.L_8037F2F8);
/*8037F2E8 0037C0E8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F2EC 0037C0EC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8037F2F0 0037C0F0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F2F4 0037C0F4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F2F8, 0x8037F2F8) //this is a jump label
/*8037F2F8 0037C0F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8037F2FC 0037C0FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037F300 0037C100*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8037F304 0037C104*/ PPC::Runtime::ASM::bne(.L_8037F314);
/*8037F308 0037C108*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8037F30C 0037C10C*/ PPC::Runtime::ASM::beq(.L_8037F314);
/*8037F310 0037C110*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8037F314, 0x8037F314) //this is a jump label
/* 8037F314 0037C114  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8037F318 0037C118*/ PPC::Runtime::ASM::bne(.L_8037F324);
/*8037F31C 0037C11C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8037F320 0037C120*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8037F324, 0x8037F324) //this is a jump label
/*8037F324 0037C124*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8037F328 0037C128*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8037F32C 0037C12C*/ PPC::Runtime::ASM::bne(.L_8037F340);
/*8037F330 0037C130*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F334 0037C134*/ PPC::Runtime::ASM::li(context->r4, 0x333);
/*8037F338 0037C138*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F33C 0037C13C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F340, 0x8037F340) //this is a jump label
/*8037F340 0037C140*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8037F344 0037C144*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8037F348 0037C148*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8037F34C 0037C14C*/ PPC::Runtime::ASM::bne(.L_8037F398);
/*8037F350 0037C150*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8037F354 0037C154*/ PPC::Runtime::ASM::beq(.L_8037F398);
/*8037F358 0037C158*/ PPC::Runtime::ASM::bne(.L_8037F36C);
/*8037F35C 0037C15C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBD90 @ Get_MemoryOffset_SDA21);
/*8037F360 0037C160*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8037F364 0037C164*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBD98 @ Get_MemoryOffset_SDA21);
/*8037F368 0037C168*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8037F36C, 0x8037F36C) //this is a jump label
/*8037F36C 0037C16C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8037F370 0037C170*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037F374 0037C174*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8037F378 0037C178*/ PPC::Runtime::ASM::bne(.L_8037F388);
/*8037F37C 0037C17C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8037F380 0037C180*/ PPC::Runtime::ASM::beq(.L_8037F388);
/*8037F384 0037C184*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8037F388, 0x8037F388) //this is a jump label
/* 8037F388 0037C188  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8037F38C 0037C18C*/ PPC::Runtime::ASM::bne(.L_8037F398);
/*8037F390 0037C190*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8037F394 0037C194*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8037F398, 0x8037F398) //this is a jump label
/*8037F398 0037C198*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8037F39C 0037C19C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8037F3A0 0037C1A0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037F3A4 0037C1A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8037F3A8 0037C1A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8037F3AC 0037C1AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8037F3B0 0037C1B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037F3B4 0037C1B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8037F3B8 0037C1B8*/ PPC::Runtime::ASM::blr();
}