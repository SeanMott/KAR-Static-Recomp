//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_801461DC(PPC::Runtime::GCContext* context)
{
/*801461DC 00142FDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801461E0 00142FE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801461E4 00142FE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801461E8 00142FE8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801461EC 00142FEC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801461F0 00142FF0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801461F4 00142FF4*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*801461F8 00142FF8*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*801461FC 00142FFC*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*80146200 00143000*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*80146204 00143004*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*80146208 00143008*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*8014620C 0014300C*/ PPC::Runtime::ASM::mr(context->r30, context->r8);
/*80146210 00143010*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80146214 00143014*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*80146218 00143018*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805E6364 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014621C 0014301C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x28);
/*80146220 00143020*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80146224 00143024*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80146228 00143028*/ PPC::Runtime::ASM::add(context->r26, context->r31, context->r0);
/*8014622C 0014302C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
/*80146230 00143030*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80146234 00143034*/ PPC::Runtime::ASM::beq(.L_80146244);
/*80146238 00143038*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8014623C 0014303C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80146240 00143040*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80146244, 0x80146244) //this is a jump label
/*80146244 00143044*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80146248 00143048*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8014624C 0014304C*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*80146250 00143050*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80146254 00143054*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146258 00143058*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
/*8014625C 0014305C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80146260 00143060*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146264 00143064*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80146268 00143068*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014626C 0014306C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80146270 00143070*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80146274 00143074*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80146278 00143078*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8014627C 0014307C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80146280 00143080*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*80146284 00143084*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80146288 00143088*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014628C 0014308C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80146290 00143090*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80146294 00143094*/ PPC::Runtime::ASM::beq(.L_801462AC);
/*80146298 00143098*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014629C 0014309C*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*801462A0 001430A0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*801462A4 001430A4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801462A8 001430A8*/ PPC::Runtime::ASM::bl(fn_800644AC);
RUNTIME_PPC_JUMP_LABEL(.L_801462AC, 0x801462AC) //this is a jump label
/*801462AC 001430AC*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*801462B0 001430B0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801462B4 001430B4*/ PPC::Runtime::ASM::subfic(context->r3, context->r3, 0x4);
/*801462B8 001430B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801462BC 001430BC*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*801462C0 001430C0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801462C4 001430C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801462C8 001430C8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r29);
/*801462CC 001430CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E04D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801462D0 001430D0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E01B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801462D4 001430D4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801462D8 001430D8*/ PPC::Runtime::ASM::fadds(context->f4, context->f3, context->f2);
/*801462DC 001430DC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801462E0 001430E0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E04B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801462E4 001430E4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801462E8 001430E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E04D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801462EC 001430EC*/ PPC::Runtime::ASM::fadds(context->f2, context->f3, context->f2);
/*801462F0 001430F0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801462F4 001430F4*/ PPC::Runtime::ASM::fmadds(context->f31, context->f1, context->f0, context->f4);
/*801462F8 001430F8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801462FC 001430FC*/ PPC::Runtime::ASM::bne(.L_80146308);
/*80146300 00143100*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0204 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146304 00143104*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80146308, 0x80146308) //this is a jump label
/*80146308 00143108*/ PPC::Runtime::ASM::extsb.(context->r0, context->r30);
/*8014630C 0014310C*/ PPC::Runtime::ASM::bne(.L_80146548);
/*80146310 00143110*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80146314 00143114*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80146318 00143118*/ PPC::Runtime::ASM::blt(.L_801463A0);
/*8014631C 0014311C*/ PPC::Runtime::ASM::extsh(context->r7, context->r27);
/*80146320 00143120*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x3e8);
/*80146324 00143124*/ PPC::Runtime::ASM::blt(.L_8014637C);
/*80146328 00143128*/ PPC::Runtime::ASM::lis(context->r4, 0x68dc);
/*8014632C 0014312C*/ PPC::Runtime::ASM::lis(context->r3, 0x1062);
/*80146330 00143130*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7453);
/*80146334 00143134*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80146338 00143138  7C 00 38 96 */ mulhw context->r0 , context->r0 , context->r7
/*8014633C 0014313C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x4dd3);
/*80146340 00143140*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146344 00143144*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146348 00143148*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8014634C 0014314C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 12);
/*80146350 00143150*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80146354 00143154*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80146358 00143158*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x2710);
/*8014635C 0014315C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 80146360 00143160  7C 06 00 96 */ mulhw context->r0 , context->r6 , context->r0
/*80146364 00143164*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*80146368 00143168*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8014636C 0014316C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80146370 00143170  4C C6 32 42 */ crset context->cr1eq
/*80146374 00143174*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80146378 00143178*/ PPC::Runtime::ASM::b(.L_80146394);
RUNTIME_PPC_JUMP_LABEL(.L_8014637C, 0x8014637C) //this is a jump label
/*8014637C 0014317C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80146380 00143180*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146384 00143184*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146388 00143188*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 8014638C 0014318C  4C C6 32 42 */ crset context->cr1eq
/*80146390 00143190*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80146394, 0x80146394) //this is a jump label
/*80146394 00143194*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146398 00143198*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*8014639C 0014319C*/ PPC::Runtime::ASM::b(.L_801463B8);
RUNTIME_PPC_JUMP_LABEL(.L_801463A0, 0x801463A0) //this is a jump label
/*801463A0 001431A0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801463A4 001431A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801463A8 001431A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801463AC 001431AC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 801463B0 001431B0  4C C6 32 42 */ crset context->cr1eq
/*801463B4 001431B4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_801463B8, 0x801463B8) //this is a jump label
/*801463B8 001431B8*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*801463BC 001431BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*801463C0 001431C0*/ PPC::Runtime::ASM::blt(.L_80146448);
/*801463C4 001431C4*/ PPC::Runtime::ASM::extsh(context->r7, context->r27);
/*801463C8 001431C8*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x64);
/*801463CC 001431CC*/ PPC::Runtime::ASM::blt(.L_80146424);
/*801463D0 001431D0*/ PPC::Runtime::ASM::lis(context->r4, 0x1062);
/*801463D4 001431D4*/ PPC::Runtime::ASM::lis(context->r3, 0x51ec);
/*801463D8 001431D8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4dd3);
/*801463DC 001431DC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 801463E0 001431E0  7C 00 38 96 */ mulhw context->r0 , context->r0 , context->r7
/*801463E4 001431E4*/ PPC::Runtime::ASM::subi(context->r6, context->r3, 0x7ae1);
/*801463E8 001431E8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801463EC 001431EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801463F0 001431F0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*801463F4 001431F4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*801463F8 001431F8*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801463FC 001431FC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80146400 00143200*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3e8);
/*80146404 00143204*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 80146408 00143208  7C 06 00 96 */ mulhw context->r0 , context->r6 , context->r0
/*8014640C 0014320C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80146410 00143210*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80146414 00143214*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80146418 00143218  4C C6 32 42 */ crset context->cr1eq
/*8014641C 0014321C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80146420 00143220*/ PPC::Runtime::ASM::b(.L_8014643C);
RUNTIME_PPC_JUMP_LABEL(.L_80146424, 0x80146424) //this is a jump label
/*80146424 00143224*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80146428 00143228*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014642C 0014322C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146430 00143230*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 80146434 00143234  4C C6 32 42 */ crset context->cr1eq
/*80146438 00143238*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8014643C, 0x8014643C) //this is a jump label
/*8014643C 0014323C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146440 00143240*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*80146444 00143244*/ PPC::Runtime::ASM::b(.L_80146460);
RUNTIME_PPC_JUMP_LABEL(.L_80146448, 0x80146448) //this is a jump label
/*80146448 00143248*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8014644C 0014324C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146450 00143250*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146454 00143254*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 80146458 00143258  4C C6 32 42 */ crset context->cr1eq
/*8014645C 0014325C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80146460, 0x80146460) //this is a jump label
/*80146460 00143260*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80146464 00143264*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80146468 00143268*/ PPC::Runtime::ASM::blt(.L_801464F0);
/*8014646C 0014326C*/ PPC::Runtime::ASM::extsh(context->r7, context->r27);
/*80146470 00143270*/ PPC::Runtime::ASM::cmpwi(context->r7, 0xa);
/*80146474 00143274*/ PPC::Runtime::ASM::blt(.L_801464CC);
/*80146478 00143278*/ PPC::Runtime::ASM::lis(context->r4, 0x51ec);
/*8014647C 0014327C*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80146480 00143280*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7ae1);
/*80146484 00143284*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80146488 00143288  7C 00 38 96 */ mulhw context->r0 , context->r0 , context->r7
/*8014648C 0014328C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x6667);
/*80146490 00143290*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146494 00143294*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146498 00143298*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8014649C 0014329C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*801464A0 001432A0*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801464A4 001432A4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*801464A8 001432A8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x64);
/*801464AC 001432AC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 801464B0 001432B0  7C 06 00 96 */ mulhw context->r0 , context->r6 , context->r0
/*801464B4 001432B4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*801464B8 001432B8*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801464BC 001432BC*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 801464C0 001432C0  4C C6 32 42 */ crset context->cr1eq
/*801464C4 001432C4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801464C8 001432C8*/ PPC::Runtime::ASM::b(.L_801464E4);
RUNTIME_PPC_JUMP_LABEL(.L_801464CC, 0x801464CC) //this is a jump label
/*801464CC 001432CC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801464D0 001432D0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801464D4 001432D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801464D8 001432D8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 801464DC 001432DC  4C C6 32 42 */ crset context->cr1eq
/*801464E0 001432E0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_801464E4, 0x801464E4) //this is a jump label
/*801464E4 001432E4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801464E8 001432E8*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*801464EC 001432EC*/ PPC::Runtime::ASM::b(.L_80146508);
RUNTIME_PPC_JUMP_LABEL(.L_801464F0, 0x801464F0) //this is a jump label
/*801464F0 001432F0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801464F4 001432F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801464F8 001432F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801464FC 001432FC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 80146500 00143300  4C C6 32 42 */ crset context->cr1eq
/*80146504 00143304*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80146508, 0x80146508) //this is a jump label
/*80146508 00143308*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8014650C 0014330C*/ PPC::Runtime::ASM::extsh(context->r6, context->r27);
/*80146510 00143310*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*80146514 00143314*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80146518 00143318  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*8014651C 0014331C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146520 00143320*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146524 00143324*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80146528 00143328*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8014652C 0014332C*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80146530 00143330*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80146534 00143334*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*80146538 00143338*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r6);
/* 8014653C 0014333C  4C C6 32 42 */ crset context->cr1eq
/*80146540 00143340*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80146544 00143344*/ PPC::Runtime::ASM::b(.L_80146638);
RUNTIME_PPC_JUMP_LABEL(.L_80146548, 0x80146548) //this is a jump label
/*80146548 00143348*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8014654C 0014334C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80146550 00143350*/ PPC::Runtime::ASM::blt(.L_80146578);
/*80146554 00143354*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80146558 00143358*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014655C 0014335C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146560 00143360*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/* 80146564 00143364  4C C6 32 42 */ crset context->cr1eq
/*80146568 00143368*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8014656C 0014336C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146570 00143370*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*80146574 00143374*/ PPC::Runtime::ASM::b(.L_80146590);
RUNTIME_PPC_JUMP_LABEL(.L_80146578, 0x80146578) //this is a jump label
/*80146578 00143378*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8014657C 0014337C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146580 00143380*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146584 00143384*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 80146588 00143388  4C C6 32 42 */ crset context->cr1eq
/*8014658C 0014338C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80146590, 0x80146590) //this is a jump label
/*80146590 00143390*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80146594 00143394*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80146598 00143398*/ PPC::Runtime::ASM::blt(.L_801465C0);
/*8014659C 0014339C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801465A0 001433A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801465A4 001433A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801465A8 001433A8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/* 801465AC 001433AC  4C C6 32 42 */ crset context->cr1eq
/*801465B0 001433B0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801465B4 001433B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801465B8 001433B8*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*801465BC 001433BC*/ PPC::Runtime::ASM::b(.L_801465D8);
RUNTIME_PPC_JUMP_LABEL(.L_801465C0, 0x801465C0) //this is a jump label
/*801465C0 001433C0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801465C4 001433C4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801465C8 001433C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801465CC 001433CC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 801465D0 001433D0  4C C6 32 42 */ crset context->cr1eq
/*801465D4 001433D4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_801465D8, 0x801465D8) //this is a jump label
/*801465D8 001433D8*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*801465DC 001433DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801465E0 001433E0*/ PPC::Runtime::ASM::blt(.L_80146608);
/*801465E4 001433E4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801465E8 001433E8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801465EC 001433EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801465F0 001433F0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/* 801465F4 001433F4  4C C6 32 42 */ crset context->cr1eq
/*801465F8 001433F8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801465FC 001433FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146600 00143400*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*80146604 00143404*/ PPC::Runtime::ASM::b(.L_80146620);
RUNTIME_PPC_JUMP_LABEL(.L_80146608, 0x80146608) //this is a jump label
/*80146608 00143408*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8014660C 0014340C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146610 00143410*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146614 00143414*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 80146618 00143418  4C C6 32 42 */ crset context->cr1eq
/*8014661C 0014341C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80146620, 0x80146620) //this is a jump label
/*80146620 00143420*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80146624 00143424*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80146628 00143428*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014662C 0014342C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/* 80146630 00143430  4C C6 32 42 */ crset context->cr1eq
/*80146634 00143434*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80146638, 0x80146638) //this is a jump label
/*80146638 00143438*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014663C 0014343C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146640 00143440*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146644 00143444*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80146648 00143448*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8014664C 0014344C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146650 00143450*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146654 00143454*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146658 00143458*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8014665C 0014345C*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80146660 00143460*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146664 00143464*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80146668 00143468*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014666C 0014346C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80146670 00143470*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80146674 00143474*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146678 00143478*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014667C 0014347C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146680 00143480*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80146684 00143484*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80146688 00143488*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8014668C 0014348C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80146690 00143490*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80146694 00143494*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80146698 00143498*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8014669C 0014349C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801466A0 001434A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801466A4 001434A4*/ PPC::Runtime::ASM::blr();
}