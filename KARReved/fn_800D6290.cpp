//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D6290(PPC::Runtime::GCContext* context)
{
/*800D6290 000D3090*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800D6294 000D3094*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D6298 000D3098*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800D629C 000D309C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800D62A0 000D30A0*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*800D62A4 000D30A4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800D62A8 000D30A8*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800D62AC 000D30AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D62B0 000D30B0*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_921 @ Get_MemoryOffset_HighBit);
/*800D62B4 000D30B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800D62B8 000D30B8*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_921 @ Get_MemoryOffset_LowBit);
/*800D62BC 000D30BC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800D62C0 000D30C0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800D62C4 000D30C4*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800D62C8 000D30C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*800D62CC 000D30CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800D62D0 000D30D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800D62D4 000D30D4*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800D62D8 000D30D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800D62DC 000D30DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*800D62E0 000D30E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*800D62E4 000D30E4*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800D62E8 000D30E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*800D62EC 000D30EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*800D62F0 000D30F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*800D62F4 000D30F4*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800D62F8 000D30F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*800D62FC 000D30FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*800D6300 000D3100*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800D6304 000D3104*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800D6308 000D3108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*800D630C 000D310C*/ PPC::Runtime::ASM::b(.L_800D63A0);
RUNTIME_PPC_JUMP_LABEL(.L_800D6310, 0x800D6310) //this is a jump label
/*800D6310 000D3110*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*800D6314 000D3114*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*800D6318 000D3118*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800D631C 000D311C*/ PPC::Runtime::ASM::add(context->r24, context->r0, context->r30);
/*800D6320 000D3120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*800D6324 000D3124*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*800D6328 000D3128*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D632C 000D312C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800D6330 000D3130*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800D6334 000D3134*/ PPC::Runtime::ASM::extrwi(context->r26, context->r0, 1, 26);
/*800D6338 000D3138*/ PPC::Runtime::ASM::b(.L_800D6378);
RUNTIME_PPC_JUMP_LABEL(.L_800D633C, 0x800D633C) //this is a jump label
/*800D633C 000D313C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r25));
/*800D6340 000D3140*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 26);
/*800D6344 000D3144*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*800D6348 000D3148*/ PPC::Runtime::ASM::beq(.L_800D6370);
/*800D634C 000D314C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800D6350 000D3150*/ PPC::Runtime::ASM::mr(context->r5, context->r23);
/*800D6354 000D3154*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800D6358 000D3158*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800D635C 000D315C*/ PPC::Runtime::ASM::bl(OSReport);
/*800D6360 000D3160*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x24);
/*800D6364 000D3164*/ PPC::Runtime::ASM::li(context->r4, 0x50);
/*800D6368 000D3168*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60B0 @ Get_MemoryOffset_SDA21);
/*800D636C 000D316C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D6370, 0x800D6370) //this is a jump label
/*800D6370 000D3170*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x14);
/*800D6374 000D3174*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D6378, 0x800D6378) //this is a jump label
/*800D6378 000D3178*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r24));
/*800D637C 000D317C*/ PPC::Runtime::ASM::cmpw(context->r23, context->r0);
/*800D6380 000D3180*/ PPC::Runtime::ASM::blt(.L_800D633C);
/*800D6384 000D3184*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*800D6388 000D3188*/ PPC::Runtime::ASM::beq(.L_800D6398);
/*800D638C 000D318C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*800D6390 000D3190*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800D6394 000D3194*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_800D6398, 0x800D6398) //this is a jump label
/*800D6398 000D3198*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1c);
/*800D639C 000D319C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D63A0, 0x800D63A0) //this is a jump label
/*800D63A0 000D31A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*800D63A4 000D31A4*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800D63A8 000D31A8*/ PPC::Runtime::ASM::blt(.L_800D6310);
/*800D63AC 000D31AC*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*800D63B0 000D31B0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800D63B4 000D31B4*/ PPC::Runtime::ASM::b(.L_800D6440);
RUNTIME_PPC_JUMP_LABEL(.L_800D63B8, 0x800D63B8) //this is a jump label
/*800D63B8 000D31B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800D63BC 000D31BC*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0xc);
/*800D63C0 000D31C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800D63C4 000D31C4*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*800D63C8 000D31C8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800D63CC 000D31CC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*800D63D0 000D31D0*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800D63D4 000D31D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800D63D8 000D31D8*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800D63DC 000D31DC*/ PPC::Runtime::ASM::extrwi(context->r26, context->r0, 1, 26);
RUNTIME_PPC_JUMP_LABEL(.L_800D63E0, 0x800D63E0) //this is a jump label
/*800D63E0 000D31E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r25));
/*800D63E4 000D31E4*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 26);
/*800D63E8 000D31E8*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*800D63EC 000D31EC*/ PPC::Runtime::ASM::beq(.L_800D6414);
/*800D63F0 000D31F0*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*800D63F4 000D31F4*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*800D63F8 000D31F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*800D63FC 000D31FC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800D6400 000D3200*/ PPC::Runtime::ASM::bl(OSReport);
/*800D6404 000D3204*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x24);
/*800D6408 000D3208*/ PPC::Runtime::ASM::li(context->r4, 0x68);
/*800D640C 000D320C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60B0 @ Get_MemoryOffset_SDA21);
/*800D6410 000D3210*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D6414, 0x800D6414) //this is a jump label
/*800D6414 000D3214*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*800D6418 000D3218*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x18);
/*800D641C 000D321C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0xc);
/*800D6420 000D3220*/ PPC::Runtime::ASM::blt(.L_800D63E0);
/*800D6424 000D3224*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*800D6428 000D3228*/ PPC::Runtime::ASM::beq(.L_800D6438);
/*800D642C 000D322C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*800D6430 000D3230*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800D6434 000D3234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_800D6438, 0x800D6438) //this is a jump label
/*800D6438 000D3238*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4c);
/*800D643C 000D323C*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D6440, 0x800D6440) //this is a jump label
/*800D6440 000D3240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800D6444 000D3244*/ PPC::Runtime::ASM::cmpw(context->r23, context->r0);
/*800D6448 000D3248*/ PPC::Runtime::ASM::blt(.L_800D63B8);
/*800D644C 000D324C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800D6450 000D3250*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800D6454 000D3254*/ PPC::Runtime::ASM::b(.L_800D6494);
RUNTIME_PPC_JUMP_LABEL(.L_800D6458, 0x800D6458) //this is a jump label
/*800D6458 000D3258*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/* 800D645C 000D325C  54 00 07 BF */ clrlwi. context->r0 , context->r0 , 30
/*800D6460 000D3260*/ PPC::Runtime::ASM::beq(.L_800D648C);
/*800D6464 000D3264*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*800D6468 000D3268*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800D646C 000D326C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*800D6470 000D3270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800D6474 000D3274*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 26, 26);
/*800D6478 000D3278*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x20);
/*800D647C 000D327C*/ PPC::Runtime::ASM::bne(.L_800D648C);
/*800D6480 000D3280*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*800D6484 000D3284*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800D6488 000D3288*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_800D648C, 0x800D648C) //this is a jump label
/*800D648C 000D328C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*800D6490 000D3290*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D6494, 0x800D6494) //this is a jump label
/*800D6494 000D3294*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800D6498 000D3298*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*800D649C 000D329C*/ PPC::Runtime::ASM::blt(.L_800D6458);
/*800D64A0 000D32A0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800D64A4 000D32A4*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*800D64A8 000D32A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800D64AC 000D32AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D64B0 000D32B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800D64B4 000D32B4*/ PPC::Runtime::ASM::blr();
}