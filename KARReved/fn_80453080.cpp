//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8045336C.hpp"
#include "fn_80453BF0.hpp"
#include "fn_80453D68.hpp"
#include "fn_80453E8C.hpp"
#include "fn_80452B5C.hpp"
#include "fn_80457668.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_80452848.hpp"
#include "fn_80457668.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_80457668.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"



void fn_80453080(PPC::Runtime::GCContext* context)
{
/*80453080 0044FE80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80453084 0044FE84*/ PPC::Runtime::ASM::mflr(context->r0);
/*80453088 0044FE88*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045308C 0044FE8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80453090 0044FE90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80453094 0044FE94*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80453098 0044FE98*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045309C 0044FE9C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*804530A0 0044FEA0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804530A4 0044FEA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*804530A8 0044FEA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r29));
/*804530AC 0044FEAC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*804530B0 0044FEB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804530B4 0044FEB4*/ PPC::Runtime::ASM::bl(fn_8045336C);
/*804530B8 0044FEB8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*804530BC 0044FEBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804530C0 0044FEC0*/ PPC::Runtime::ASM::bl(fn_80453BF0);
/*804530C4 0044FEC4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804530C8 0044FEC8*/ PPC::Runtime::ASM::beq(.L_804530D8);
/*804530CC 0044FECC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xa);
/*804530D0 0044FED0*/ PPC::Runtime::ASM::beq(.L_804530D8);
/*804530D4 0044FED4*/ PPC::Runtime::ASM::b(.L_804530F4);
RUNTIME_PPC_JUMP_LABEL(.L_804530D8, 0x804530D8) //this is a jump label
/*804530D8 0044FED8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804530DC 0044FEDC*/ PPC::Runtime::ASM::bl(fn_80453D68);
/*804530E0 0044FEE0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804530E4 0044FEE4*/ PPC::Runtime::ASM::beq(.L_804530EC);
/*804530E8 0044FEE8*/ PPC::Runtime::ASM::b(.L_804530F4);
RUNTIME_PPC_JUMP_LABEL(.L_804530EC, 0x804530EC) //this is a jump label
/*804530EC 0044FEEC*/ PPC::Runtime::ASM::bl(fn_80453E8C);
/*804530F0 0044FEF0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_804530F4, 0x804530F4) //this is a jump label
/*804530F4 0044FEF4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804530F8 0044FEF8*/ PPC::Runtime::ASM::beq(.L_80453100);
/*804530FC 0044FEFC*/ PPC::Runtime::ASM::b(.L_804532C4);
RUNTIME_PPC_JUMP_LABEL(.L_80453100, 0x80453100) //this is a jump label
/*80453100 0044FF00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54c, context->r29));
/*80453104 0044FF04*/ PPC::Runtime::ASM::divwu(context->r30, context->r0, context->r30);
/*80453108 0044FF08*/ PPC::Runtime::ASM::bl(fn_80452B5C);
/* 8045310C 0044FF0C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*80453110 0044FF10*/ PPC::Runtime::ASM::beq(.L_80453160);
/*80453114 0044FF14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453118 0044FF18*/ PPC::Runtime::ASM::bl(fn_80457668);
/*8045311C 0044FF1C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80453120 0044FF20*/ PPC::Runtime::ASM::bne(.L_80453158);
/*80453124 0044FF24*/ PPC::Runtime::ASM::slwi(context->r6, context->r31, 2);
/*80453128 0044FF28*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*8045312C 0044FF2C*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80453130 0044FF30*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80453134 0044FF34*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*80453138 0044FF38*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8045313C 0044FF3C*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80453140 0044FF40*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*80453144 0044FF44*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80453148 0044FF48*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045314C 0044FF4C*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80453150 0044FF50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453154 0044FF54*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
RUNTIME_PPC_JUMP_LABEL(.L_80453158, 0x80453158) //this is a jump label
/*80453158 0044FF58*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8045315C 0044FF5C*/ PPC::Runtime::ASM::b(.L_804532C4);
RUNTIME_PPC_JUMP_LABEL(.L_80453160, 0x80453160) //this is a jump label
/*80453160 0044FF60*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*80453164 0044FF64*/ PPC::Runtime::ASM::b(.L_804531C8);
RUNTIME_PPC_JUMP_LABEL(.L_80453168, 0x80453168) //this is a jump label
/*80453168 0044FF68*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8045316C 0044FF6C*/ PPC::Runtime::ASM::bl(fn_80452848);
/* 80453170 0044FF70  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*80453174 0044FF74*/ PPC::Runtime::ASM::beq(.L_804531C4);
/*80453178 0044FF78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8045317C 0044FF7C*/ PPC::Runtime::ASM::bl(fn_80457668);
/*80453180 0044FF80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80453184 0044FF84*/ PPC::Runtime::ASM::bne(.L_804531BC);
/*80453188 0044FF88*/ PPC::Runtime::ASM::slwi(context->r6, context->r31, 2);
/*8045318C 0044FF8C*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*80453190 0044FF90*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80453194 0044FF94*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80453198 0044FF98*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*8045319C 0044FF9C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*804531A0 0044FFA0*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*804531A4 0044FFA4*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*804531A8 0044FFA8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*804531AC 0044FFAC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*804531B0 0044FFB0*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*804531B4 0044FFB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804531B8 0044FFB8*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
RUNTIME_PPC_JUMP_LABEL(.L_804531BC, 0x804531BC) //this is a jump label
/*804531BC 0044FFBC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*804531C0 0044FFC0*/ PPC::Runtime::ASM::b(.L_804532C4);
RUNTIME_PPC_JUMP_LABEL(.L_804531C4, 0x804531C4) //this is a jump label
/*804531C4 0044FFC4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804531C8, 0x804531C8) //this is a jump label
/*804531C8 0044FFC8*/ PPC::Runtime::ASM::cmpw(context->r28, context->r30);
/*804531CC 0044FFCC*/ PPC::Runtime::ASM::blt(.L_80453168);
/*804531D0 0044FFD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804531D4 0044FFD4*/ PPC::Runtime::ASM::bl(fn_80457668);
/*804531D8 0044FFD8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804531DC 0044FFDC*/ PPC::Runtime::ASM::beq(.L_804531E4);
/*804531E0 0044FFE0*/ PPC::Runtime::ASM::b(.L_804532C4);
RUNTIME_PPC_JUMP_LABEL(.L_804531E4, 0x804531E4) //this is a jump label
/*804531E4 0044FFE4*/ PPC::Runtime::ASM::slwi(context->r6, context->r31, 2);
/*804531E8 0044FFE8*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*804531EC 0044FFEC*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*804531F0 0044FFF0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*804531F4 0044FFF4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*804531F8 0044FFF8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*804531FC 0044FFFC*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80453200 00450000*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*80453204 00450004*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80453208 00450008*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045320C 0045000C*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80453210 00450010*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453214 00450014*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*80453218 00450018*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*8045321C 0045001C*/ PPC::Runtime::ASM::beq(.L_804532A4);
/*80453220 00450020*/ PPC::Runtime::ASM::bge(.L_80453250);
/*80453224 00450024*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*80453228 00450028*/ PPC::Runtime::ASM::beq(.L_804532BC);
/*8045322C 0045002C*/ PPC::Runtime::ASM::bge(.L_8045323C);
/*80453230 00450030*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*80453234 00450034*/ PPC::Runtime::ASM::beq(.L_804532A4);
/*80453238 00450038*/ PPC::Runtime::ASM::b(.L_804532BC);
RUNTIME_PPC_JUMP_LABEL(.L_8045323C, 0x8045323C) //this is a jump label
/*8045323C 0045003C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*80453240 00450040*/ PPC::Runtime::ASM::bge(.L_804532B4);
/*80453244 00450044*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*80453248 00450048*/ PPC::Runtime::ASM::bge(.L_804532BC);
/*8045324C 0045004C*/ PPC::Runtime::ASM::b(.L_804532AC);
RUNTIME_PPC_JUMP_LABEL(.L_80453250, 0x80453250) //this is a jump label
/*80453250 00450050*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80453254 00450054*/ PPC::Runtime::ASM::beq(.L_8045327C);
/*80453258 00450058*/ PPC::Runtime::ASM::bge(.L_8045326C);
/*8045325C 0045005C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*80453260 00450060*/ PPC::Runtime::ASM::beq(.L_80453284);
/*80453264 00450064*/ PPC::Runtime::ASM::bge(.L_8045328C);
/*80453268 00450068*/ PPC::Runtime::ASM::b(.L_80453294);
RUNTIME_PPC_JUMP_LABEL(.L_8045326C, 0x8045326C) //this is a jump label
/*8045326C 0045006C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80453270 00450070*/ PPC::Runtime::ASM::beq(.L_804532BC);
/*80453274 00450074*/ PPC::Runtime::ASM::bge(.L_804532BC);
/*80453278 00450078*/ PPC::Runtime::ASM::b(.L_8045329C);
RUNTIME_PPC_JUMP_LABEL(.L_8045327C, 0x8045327C) //this is a jump label
/*8045327C 0045007C*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*80453280 00450080*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_80453284, 0x80453284) //this is a jump label
/*80453284 00450084*/ PPC::Runtime::ASM::li(context->r3, 0xe);
/*80453288 00450088*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_8045328C, 0x8045328C) //this is a jump label
/*8045328C 0045008C*/ PPC::Runtime::ASM::li(context->r3, 0xf);
/*80453290 00450090*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_80453294, 0x80453294) //this is a jump label
/*80453294 00450094*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*80453298 00450098*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_8045329C, 0x8045329C) //this is a jump label
/*8045329C 0045009C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804532A0 004500A0*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_804532A4, 0x804532A4) //this is a jump label
/*804532A4 004500A4*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*804532A8 004500A8*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_804532AC, 0x804532AC) //this is a jump label
/*804532AC 004500AC*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*804532B0 004500B0*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_804532B4, 0x804532B4) //this is a jump label
/*804532B4 004500B4*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*804532B8 004500B8*/ PPC::Runtime::ASM::b(.L_804532C0);
RUNTIME_PPC_JUMP_LABEL(.L_804532BC, 0x804532BC) //this is a jump label
/*804532BC 004500BC*/ PPC::Runtime::ASM::li(context->r3, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_804532C0, 0x804532C0) //this is a jump label
/*804532C0 004500C0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_804532C4, 0x804532C4) //this is a jump label
/*804532C4 004500C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804532C8 004500C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804532CC 004500CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804532D0 004500D0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804532D4 004500D4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804532D8 004500D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804532DC 004500DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804532E0 004500E0*/ PPC::Runtime::ASM::blr();
}