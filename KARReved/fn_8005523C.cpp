//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80053758.hpp"
#include "fn_80053758.hpp"
#include "fn_80053758.hpp"
#include "fn_8005523C.hpp"
#include "fn_80053740.hpp"
#include "fn_80053740.hpp"
#include "fn_8005523C.hpp"
#include "fn_800551A8.hpp"
#include "fn_80053740.hpp"
#include "fn_80053758.hpp"
#include "fn_80053758.hpp"
#include "fn_8005523C.hpp"
#include "fn_80053740.hpp"
#include "fn_80053740.hpp"
#include "fn_8005523C.hpp"
#include "fn_800551A8.hpp"
#include "fn_80053758.hpp"
#include "fn_80053758.hpp"
#include "fn_80053758.hpp"
#include "fn_8005523C.hpp"
#include "fn_80053740.hpp"
#include "fn_80053740.hpp"
#include "fn_8005523C.hpp"
#include "fn_800551A8.hpp"
#include "fn_80053740.hpp"
#include "fn_80053758.hpp"
#include "fn_80053758.hpp"
#include "fn_8005523C.hpp"
#include "fn_80053740.hpp"
#include "fn_80053740.hpp"
#include "fn_8005523C.hpp"
#include "fn_800551A8.hpp"



void fn_8005523C(PPC::Runtime::GCContext* context)
{
/*8005523C 0005203C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80055240 00052040*/ PPC::Runtime::ASM::mflr(context->r0);
/*80055244 00052044*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80055248 00052048*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8005524C 0005204C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/* 80055250 00052050  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80055254 00052054*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80055258 00052058*/ PPC::Runtime::ASM::beq(.L_80055640);
/*8005525C 0005205C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80055260 00052060*/ PPC::Runtime::ASM::bne(.L_80055268);
/*80055264 00052064*/ PPC::Runtime::ASM::b(.L_80055640);
RUNTIME_PPC_JUMP_LABEL(.L_80055268, 0x80055268) //this is a jump label
/*80055268 00052068*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8005526C 0005206C*/ PPC::Runtime::ASM::bne(.L_80055278);
/*80055270 00052070*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80055274 00052074*/ PPC::Runtime::ASM::b(.L_8005527C);
RUNTIME_PPC_JUMP_LABEL(.L_80055278, 0x80055278) //this is a jump label
/*80055278 00052078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8005527C, 0x8005527C) //this is a jump label
/*8005527C 0005207C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80055280 00052080*/ PPC::Runtime::ASM::beq(.L_8005541C);
/*80055284 00052084*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80055288 00052088*/ PPC::Runtime::ASM::bne(.L_80055294);
/*8005528C 0005208C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80055290 00052090*/ PPC::Runtime::ASM::b(.L_80055298);
RUNTIME_PPC_JUMP_LABEL(.L_80055294, 0x80055294) //this is a jump label
/*80055294 00052094*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80055298, 0x80055298) //this is a jump label
/*80055298 00052098*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8005529C 0005209C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800552A0 000520A0*/ PPC::Runtime::ASM::beq(.L_8005541C);
/*800552A4 000520A4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800552A8 000520A8*/ PPC::Runtime::ASM::beq(.L_8005541C);
/*800552AC 000520AC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800552B0 000520B0*/ PPC::Runtime::ASM::bne(.L_800552BC);
/*800552B4 000520B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800552B8 000520B8*/ PPC::Runtime::ASM::b(.L_800552C0);
RUNTIME_PPC_JUMP_LABEL(.L_800552BC, 0x800552BC) //this is a jump label
/*800552BC 000520BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800552C0, 0x800552C0) //this is a jump label
/*800552C0 000520C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800552C4 000520C4*/ PPC::Runtime::ASM::beq(.L_8005532C);
/*800552C8 000520C8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800552CC 000520CC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800552D0 000520D0*/ PPC::Runtime::ASM::bl(fn_80053758);
/* 800552D4 000520D4  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*800552D8 000520D8*/ PPC::Runtime::ASM::beq(.L_8005532C);
/*800552DC 000520DC*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*800552E0 000520E0*/ PPC::Runtime::ASM::beq(.L_8005532C);
/*800552E4 000520E4*/ PPC::Runtime::ASM::bl(fn_80053758);
/*800552E8 000520E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800552EC 000520EC*/ PPC::Runtime::ASM::beq(.L_80055300);
/*800552F0 000520F0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800552F4 000520F4*/ PPC::Runtime::ASM::bl(fn_80053758);
/*800552F8 000520F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800552FC 000520FC*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_80055300, 0x80055300) //this is a jump label
/*80055300 00052100*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80055304 00052104*/ PPC::Runtime::ASM::bl(fn_80053740);
/*80055308 00052108*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8005530C 0005210C*/ PPC::Runtime::ASM::beq(.L_80055320);
/*80055310 00052110*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80055314 00052114*/ PPC::Runtime::ASM::bl(fn_80053740);
/*80055318 00052118*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8005531C 0005211C*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_80055320, 0x80055320) //this is a jump label
/*80055320 00052120*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80055324 00052124*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80055328 00052128*/ PPC::Runtime::ASM::bl(fn_800551A8);
RUNTIME_PPC_JUMP_LABEL(.L_8005532C, 0x8005532C) //this is a jump label
/*8005532C 0005212C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80055330 00052130*/ PPC::Runtime::ASM::bne(.L_8005533C);
/*80055334 00052134*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80055338 00052138*/ PPC::Runtime::ASM::b(.L_80055340);
RUNTIME_PPC_JUMP_LABEL(.L_8005533C, 0x8005533C) //this is a jump label
/*8005533C 0005213C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80055340, 0x80055340) //this is a jump label
/*80055340 00052140*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80055344 00052144*/ PPC::Runtime::ASM::beq(.L_800553AC);
/*80055348 00052148*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8005534C 0005214C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80055350 00052150*/ PPC::Runtime::ASM::bl(fn_80053740);
/* 80055354 00052154  7C 7A 1B 79 */ mr. context->r26 , context->r3
/*80055358 00052158*/ PPC::Runtime::ASM::beq(.L_800553AC);
/*8005535C 0005215C*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80055360 00052160*/ PPC::Runtime::ASM::beq(.L_800553AC);
/*80055364 00052164*/ PPC::Runtime::ASM::bl(fn_80053758);
/*80055368 00052168*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8005536C 0005216C*/ PPC::Runtime::ASM::beq(.L_80055380);
/*80055370 00052170*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80055374 00052174*/ PPC::Runtime::ASM::bl(fn_80053758);
/*80055378 00052178*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8005537C 0005217C*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_80055380, 0x80055380) //this is a jump label
/*80055380 00052180*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80055384 00052184*/ PPC::Runtime::ASM::bl(fn_80053740);
/*80055388 00052188*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8005538C 0005218C*/ PPC::Runtime::ASM::beq(.L_800553A0);
/*80055390 00052190*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80055394 00052194*/ PPC::Runtime::ASM::bl(fn_80053740);
/*80055398 00052198*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8005539C 0005219C*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_800553A0, 0x800553A0) //this is a jump label
/*800553A0 000521A0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800553A4 000521A4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800553A8 000521A8*/ PPC::Runtime::ASM::bl(fn_800551A8);
RUNTIME_PPC_JUMP_LABEL(.L_800553AC, 0x800553AC) //this is a jump label
/*800553AC 000521AC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800553B0 000521B0*/ PPC::Runtime::ASM::beq(.L_8005541C);
/*800553B4 000521B4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800553B8 000521B8*/ PPC::Runtime::ASM::beq(.L_8005541C);
/*800553BC 000521BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*800553C0 000521C0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800553C4 000521C4*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*800553C8 000521C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*800553CC 000521CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*800553D0 000521D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*800553D4 000521D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*800553D8 000521D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*800553DC 000521DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800553E0 000521E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*800553E4 000521E4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800553E8 000521E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*800553EC 000521EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800553F0 000521F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800553F4 000521F4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800553F8 000521F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*800553FC 000521FC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80055400 00052200*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80055404 00052204*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*80055408 00052208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8005540C 0005220C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?2);
/*80055410 00052210*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80055414 00052214*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*80055418 00052218*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?);
RUNTIME_PPC_JUMP_LABEL(.L_8005541C, 0x8005541C) //this is a jump label
/*8005541C 0005221C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80055420 00052220*/ PPC::Runtime::ASM::bne(.L_8005542C);
/*80055424 00052224*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80055428 00052228*/ PPC::Runtime::ASM::b(.L_80055430);
RUNTIME_PPC_JUMP_LABEL(.L_8005542C, 0x8005542C) //this is a jump label
/*8005542C 0005222C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80055430, 0x80055430) //this is a jump label
/*80055430 00052230*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80055434 00052234*/ PPC::Runtime::ASM::beq(.L_800555D0);
/*80055438 00052238*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8005543C 0005223C*/ PPC::Runtime::ASM::bne(.L_80055448);
/*80055440 00052240*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80055444 00052244*/ PPC::Runtime::ASM::b(.L_8005544C);
RUNTIME_PPC_JUMP_LABEL(.L_80055448, 0x80055448) //this is a jump label
/*80055448 00052248*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8005544C, 0x8005544C) //this is a jump label
/*8005544C 0005224C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80055450 00052250*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80055454 00052254*/ PPC::Runtime::ASM::beq(.L_800555D0);
/*80055458 00052258*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8005545C 0005225C*/ PPC::Runtime::ASM::beq(.L_800555D0);
/*80055460 00052260*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80055464 00052264*/ PPC::Runtime::ASM::bne(.L_80055470);
/*80055468 00052268*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8005546C 0005226C*/ PPC::Runtime::ASM::b(.L_80055474);
RUNTIME_PPC_JUMP_LABEL(.L_80055470, 0x80055470) //this is a jump label
/*80055470 00052270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80055474, 0x80055474) //this is a jump label
/*80055474 00052274*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80055478 00052278*/ PPC::Runtime::ASM::beq(.L_800554E0);
/*8005547C 0005227C*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80055480 00052280*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80055484 00052284*/ PPC::Runtime::ASM::bl(fn_80053758);
/* 80055488 00052288  7C 7A 1B 79 */ mr. context->r26 , context->r3
/*8005548C 0005228C*/ PPC::Runtime::ASM::beq(.L_800554E0);
/*80055490 00052290*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80055494 00052294*/ PPC::Runtime::ASM::beq(.L_800554E0);
/*80055498 00052298*/ PPC::Runtime::ASM::bl(fn_80053758);
/*8005549C 0005229C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800554A0 000522A0*/ PPC::Runtime::ASM::beq(.L_800554B4);
/*800554A4 000522A4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800554A8 000522A8*/ PPC::Runtime::ASM::bl(fn_80053758);
/*800554AC 000522AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800554B0 000522B0*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_800554B4, 0x800554B4) //this is a jump label
/*800554B4 000522B4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800554B8 000522B8*/ PPC::Runtime::ASM::bl(fn_80053740);
/*800554BC 000522BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800554C0 000522C0*/ PPC::Runtime::ASM::beq(.L_800554D4);
/*800554C4 000522C4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800554C8 000522C8*/ PPC::Runtime::ASM::bl(fn_80053740);
/*800554CC 000522CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800554D0 000522D0*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_800554D4, 0x800554D4) //this is a jump label
/*800554D4 000522D4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800554D8 000522D8*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800554DC 000522DC*/ PPC::Runtime::ASM::bl(fn_800551A8);
RUNTIME_PPC_JUMP_LABEL(.L_800554E0, 0x800554E0) //this is a jump label
/*800554E0 000522E0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800554E4 000522E4*/ PPC::Runtime::ASM::bne(.L_800554F0);
/*800554E8 000522E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800554EC 000522EC*/ PPC::Runtime::ASM::b(.L_800554F4);
RUNTIME_PPC_JUMP_LABEL(.L_800554F0, 0x800554F0) //this is a jump label
/*800554F0 000522F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800554F4, 0x800554F4) //this is a jump label
/*800554F4 000522F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800554F8 000522F8*/ PPC::Runtime::ASM::beq(.L_80055560);
/*800554FC 000522FC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*80055500 00052300*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80055504 00052304*/ PPC::Runtime::ASM::bl(fn_80053740);
/* 80055508 00052308  7C 7A 1B 79 */ mr. context->r26 , context->r3
/*8005550C 0005230C*/ PPC::Runtime::ASM::beq(.L_80055560);
/*80055510 00052310*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80055514 00052314*/ PPC::Runtime::ASM::beq(.L_80055560);
/*80055518 00052318*/ PPC::Runtime::ASM::bl(fn_80053758);
/*8005551C 0005231C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80055520 00052320*/ PPC::Runtime::ASM::beq(.L_80055534);
/*80055524 00052324*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80055528 00052328*/ PPC::Runtime::ASM::bl(fn_80053758);
/*8005552C 0005232C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80055530 00052330*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_80055534, 0x80055534) //this is a jump label
/*80055534 00052334*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80055538 00052338*/ PPC::Runtime::ASM::bl(fn_80053740);
/*8005553C 0005233C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80055540 00052340*/ PPC::Runtime::ASM::beq(.L_80055554);
/*80055544 00052344*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80055548 00052348*/ PPC::Runtime::ASM::bl(fn_80053740);
/*8005554C 0005234C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80055550 00052350*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_80055554, 0x80055554) //this is a jump label
/*80055554 00052354*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80055558 00052358*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8005555C 0005235C*/ PPC::Runtime::ASM::bl(fn_800551A8);
RUNTIME_PPC_JUMP_LABEL(.L_80055560, 0x80055560) //this is a jump label
/*80055560 00052360*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80055564 00052364*/ PPC::Runtime::ASM::beq(.L_800555D0);
/*80055568 00052368*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8005556C 0005236C*/ PPC::Runtime::ASM::beq(.L_800555D0);
/*80055570 00052370*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80055574 00052374*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80055578 00052378*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8005557C 0005237C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80055580 00052380*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*80055584 00052384*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80055588 00052388*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*8005558C 0005238C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80055590 00052390*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*80055594 00052394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*80055598 00052398*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8005559C 0005239C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*800555A0 000523A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800555A4 000523A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800555A8 000523A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800555AC 000523AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*800555B0 000523B0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*800555B4 000523B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*800555B8 000523B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*800555BC 000523BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*800555C0 000523C0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?2);
/*800555C4 000523C4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800555C8 000523C8*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*800555CC 000523CC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?);
RUNTIME_PPC_JUMP_LABEL(.L_800555D0, 0x800555D0) //this is a jump label
/*800555D0 000523D0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800555D4 000523D4*/ PPC::Runtime::ASM::beq(.L_80055640);
/*800555D8 000523D8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800555DC 000523DC*/ PPC::Runtime::ASM::beq(.L_80055640);
/*800555E0 000523E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800555E4 000523E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800555E8 000523E8*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*800555EC 000523EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*800555F0 000523F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800555F4 000523F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*800555F8 000523F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800555FC 000523FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80055600 00052400*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80055604 00052404*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80055608 00052408*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8005560C 0005240C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80055610 00052410*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80055614 00052414*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*80055618 00052418*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8005561C 0005241C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80055620 00052420*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80055624 00052424*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*80055628 00052428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8005562C 0005242C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*80055630 00052430*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?2);
/*80055634 00052434*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80055638 00052438*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*8005563C 0005243C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?);
RUNTIME_PPC_JUMP_LABEL(.L_80055640, 0x80055640) //this is a jump label
/*80055640 00052440*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80055644 00052444*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80055648 00052448*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8005564C 0005244C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80055650 00052450*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80055654 00052454*/ PPC::Runtime::ASM::blr();
}