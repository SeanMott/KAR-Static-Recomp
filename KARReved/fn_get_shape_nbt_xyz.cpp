//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "memcpy.hpp"
#include "fn_HSD_Panic.hpp"



void fn_get_shape_nbt_xyz(PPC::Runtime::GCContext* context)
{
/*80406280 00403080*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80406284 00403084*/ PPC::Runtime::ASM::mflr(context->r0);
/*80406288 00403088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8040628C 0040308C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80406290 00403090*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80406294 00403094*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80406298 00403098*/ PPC::Runtime::ASM::lis(context->r8, lbl_80503488 @ Get_MemoryOffset_HighBit);
/*8040629C 0040309C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*804062A0 004030A0*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 2);
/*804062A4 004030A4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*804062A8 004030A8*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*804062AC 004030AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804062B0 004030B0*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*804062B4 004030B4*/ PPC::Runtime::ASM::lwzx(context->r28, context->r7, context->r4);
/*804062B8 004030B8*/ PPC::Runtime::ASM::addi(context->r29, context->r8, lbl_80503488 @ Get_MemoryOffset_LowBit);
/*804062BC 004030BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x19);
/*804062C0 004030C0*/ PPC::Runtime::ASM::beq(.L_804062D4);
/*804062C4 004030C4*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x184);
/*804062C8 004030C8*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_535 @ Get_MemoryOffset_SDA21);
/*804062CC 004030CC*/ PPC::Runtime::ASM::li(context->r4, 0x4b4);
/*804062D0 004030D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804062D4, 0x804062D4) //this is a jump label
/*804062D4 004030D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*804062D8 004030D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*804062DC 004030DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*804062E0 004030E0*/ PPC::Runtime::ASM::bne(.L_80406300);
/*804062E4 004030E4*/ PPC::Runtime::ASM::slwi(context->r0, context->r27, 1);
/*804062E8 004030E8*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*804062EC 004030EC*/ PPC::Runtime::ASM::lbzx(context->r5, context->r28, context->r0);
/*804062F0 004030F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*804062F4 004030F4*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 8);
/*804062F8 004030F8*/ PPC::Runtime::ASM::add(context->r28, context->r3, context->r0);
/*804062FC 004030FC*/ PPC::Runtime::ASM::b(.L_80406304);
RUNTIME_PPC_JUMP_LABEL(.L_80406300, 0x80406300) //this is a jump label
/*80406300 00403100*/ PPC::Runtime::ASM::lbzx(context->r28, context->r28, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_80406304, 0x80406304) //this is a jump label
/*80406304 00403104*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80406308 00403108*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8040630C 0040310C*/ PPC::Runtime::ASM::beq(.L_80406320);
/*80406310 00403110*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x13c);
/*80406314 00403114*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_535 @ Get_MemoryOffset_SDA21);
/*80406318 00403118*/ PPC::Runtime::ASM::li(context->r4, 0x4bd);
/*8040631C 0040311C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80406320, 0x80406320) //this is a jump label
/*80406320 00403120*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80406324 00403124*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r5));
/*80406328 00403128*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8040632C 0040312C*/ PPC::Runtime::ASM::mullw(context->r0, context->r28, context->r0);
/*80406330 00403130*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*80406334 00403134*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x4);
/*80406338 00403138*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*8040633C 0040313C*/ PPC::Runtime::ASM::bne(.L_80406350);
/*80406340 00403140*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80406344 00403144*/ PPC::Runtime::ASM::li(context->r5, 0x24);
/*80406348 00403148*/ PPC::Runtime::ASM::bl(memcpy);
/*8040634C 0040314C*/ PPC::Runtime::ASM::b(.L_80406670);
RUNTIME_PPC_JUMP_LABEL(.L_80406350, 0x80406350) //this is a jump label
/*80406350 00403150*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x2);
/*80406354 00403154*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*80406358 00403158*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8040635C 0040315C*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r0);
/*80406360 00403160*/ PPC::Runtime::ASM::beq(.L_804064F8);
/*80406364 00403164*/ PPC::Runtime::ASM::bge(.L_80406378);
/*80406368 00403168*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*8040636C 0040316C*/ PPC::Runtime::ASM::beq(.L_80406384);
/*80406370 00403170*/ PPC::Runtime::ASM::bge(.L_80406434);
/*80406374 00403174*/ PPC::Runtime::ASM::b(.L_80406660);
RUNTIME_PPC_JUMP_LABEL(.L_80406378, 0x80406378) //this is a jump label
/*80406378 00403178*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x4);
/*8040637C 0040317C*/ PPC::Runtime::ASM::bge(.L_80406660);
/*80406380 00403180*/ PPC::Runtime::ASM::b(.L_804065A8);
RUNTIME_PPC_JUMP_LABEL(.L_80406384, 0x80406384) //this is a jump label
/*80406384 00403184*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80406388 00403188*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*8040638C 0040318C*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80406390 00403190*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80406394 00403194*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80406398 00403198*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*8040639C 0040319C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804063A0, 0x804063A0) //this is a jump label
/*804063A0 004031A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804063A4 004031A4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804063A8 004031A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804063AC 004031AC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804063B0 004031B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804063B4 004031B4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f4);
/*804063B8 004031B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804063BC 004031BC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804063C0 004031C0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804063C4 004031C4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*804063C8 004031C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804063CC 004031CC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*804063D0 004031D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*804063D4 004031D4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*804063D8 004031D8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*804063DC 004031DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*804063E0 004031E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*804063E4 004031E4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*804063E8 004031E8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*804063EC 004031EC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*804063F0 004031F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*804063F4 004031F4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*804063F8 004031F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804063FC 004031FC*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80406400 00403200*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f4);
/*80406404 00403204*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80406408 00403208*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8040640C 0040320C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80406410 00403210*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x3);
/*80406414 00403214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80406418 00403218*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8040641C 0040321C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*80406420 00403220*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80406424 00403224*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80406428 00403228*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*8040642C 0040322C*/ PPC::Runtime::ASM::bdnz(.L_804063A0);
/*80406430 00403230*/ PPC::Runtime::ASM::b(.L_80406670);
RUNTIME_PPC_JUMP_LABEL(.L_80406434, 0x80406434) //this is a jump label
/*80406434 00403234*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80406438 00403238*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*8040643C 0040323C*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80406440 00403240*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80406444 00403244*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*80406448 00403248*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8040644C, 0x8040644C) //this is a jump label
/*8040644C 0040324C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80406450 00403250*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80406454 00403254*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80406458 00403258*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8040645C 0040325C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80406460 00403260*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80406464 00403264*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80406468 00403268*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8040646C 0040326C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80406470 00403270*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*80406474 00403274*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80406478 00403278*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8040647C 0040327C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80406480 00403280*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*80406484 00403284*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80406488 00403288*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8040648C 0040328C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80406490 00403290*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80406494 00403294*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80406498 00403298*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8040649C 0040329C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*804064A0 004032A0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804064A4 004032A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*804064A8 004032A8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*804064AC 004032AC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*804064B0 004032B0*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*804064B4 004032B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804064B8 004032B8*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*804064BC 004032BC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*804064C0 004032C0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*804064C4 004032C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*804064C8 004032C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*804064CC 004032CC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x3);
/*804064D0 004032D0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*804064D4 004032D4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*804064D8 004032D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804064DC 004032DC*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804064E0 004032E0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*804064E4 004032E4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*804064E8 004032E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*804064EC 004032EC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*804064F0 004032F0*/ PPC::Runtime::ASM::bdnz(.L_8040644C);
/*804064F4 004032F4*/ PPC::Runtime::ASM::b(.L_80406670);
RUNTIME_PPC_JUMP_LABEL(.L_804064F8, 0x804064F8) //this is a jump label
/*804064F8 004032F8*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*804064FC 004032FC*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*80406500 00403300*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80406504 00403304*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80406508 00403308*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040650C 0040330C*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*80406510 00403310*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80406514, 0x80406514) //this is a jump label
/*80406514 00403314*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80406518 00403318*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8040651C 0040331C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80406520 00403320*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80406524 00403324*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80406528 00403328*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f4);
/*8040652C 0040332C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80406530 00403330*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80406534 00403334*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80406538 00403338*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8040653C 0040333C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80406540 00403340*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*80406544 00403344*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80406548 00403348*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8040654C 0040334C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80406550 00403350*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80406554 00403354*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80406558 00403358*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8040655C 0040335C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*80406560 00403360*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80406564 00403364*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80406568 00403368*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8040656C 0040336C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80406570 00403370*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80406574 00403374*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f4);
/*80406578 00403378*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*8040657C 0040337C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80406580 00403380*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80406584 00403384*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x6);
/*80406588 00403388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8040658C 0040338C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80406590 00403390*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*80406594 00403394*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80406598 00403398*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8040659C 0040339C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*804065A0 004033A0*/ PPC::Runtime::ASM::bdnz(.L_80406514);
/*804065A4 004033A4*/ PPC::Runtime::ASM::b(.L_80406670);
RUNTIME_PPC_JUMP_LABEL(.L_804065A8, 0x804065A8) //this is a jump label
/*804065A8 004033A8*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*804065AC 004033AC*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*804065B0 004033B0*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*804065B4 004033B4*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804065B8 004033B8*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*804065BC 004033BC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804065C0, 0x804065C0) //this is a jump label
/*804065C0 004033C0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804065C4 004033C4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*804065C8 004033C8*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*804065CC 004033CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*804065D0 004033D0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*804065D4 004033D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*804065D8 004033D8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*804065DC 004033DC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*804065E0 004033E0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*804065E4 004033E4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*804065E8 004033E8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*804065EC 004033EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804065F0 004033F0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*804065F4 004033F4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804065F8 004033F8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804065FC 004033FC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80406600 00403400*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80406604 00403404*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80406608 00403408*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8040660C 0040340C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*80406610 00403410*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80406614 00403414*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80406618 00403418*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8040661C 0040341C*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80406620 00403420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80406624 00403424*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80406628 00403428*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*8040662C 0040342C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80406630 00403430*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80406634 00403434*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80406638 00403438*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x6);
/*8040663C 0040343C*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80406640 00403440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80406644 00403444*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80406648 00403448*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*8040664C 0040344C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80406650 00403450*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80406654 00403454*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*80406658 00403458*/ PPC::Runtime::ASM::bdnz(.L_804065C0);
/*8040665C 0040345C*/ PPC::Runtime::ASM::b(.L_80406670);
RUNTIME_PPC_JUMP_LABEL(.L_80406660, 0x80406660) //this is a jump label
/*80406660 00403460*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x16c);
/*80406664 00403464*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_535 @ Get_MemoryOffset_SDA21);
/*80406668 00403468*/ PPC::Runtime::ASM::li(context->r4, 0x4dc);
/*8040666C 0040346C*/ PPC::Runtime::ASM::bl(fn_HSD_Panic);
RUNTIME_PPC_JUMP_LABEL(.L_80406670, 0x80406670) //this is a jump label
/*80406670 00403470*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80406674 00403474*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80406678 00403478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8040667C 0040347C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80406680 00403480*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80406684 00403484*/ PPC::Runtime::ASM::blr();
}