//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_startCharge.hpp"
#include "fn_801A8454.hpp"
#include "fn_8019970C.hpp"
#include "fn_801918BC.hpp"
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_ability_Plasma_DecreaseTimerByShot.hpp"
#include "fn_ability_Plasma_DecreaseTimerByShot.hpp"



void fn_801B331C(PPC::Runtime::GCContext* context)
{
/*801B331C 001B011C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801B3320 001B0120*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B3324 001B0124*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801B3328 001B0128*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801B332C 001B012C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801B3330 001B0130*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B3334 001B0134*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801B3338 001B0138*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801B333C 001B013C*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801B3340 001B0140*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B3344 001B0144*/ PPC::Runtime::ASM::beq(.L_801B3448);
/*801B3348 001B0148*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa17, context->r30));
/*801B334C 001B014C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*801B3350 001B0150*/ PPC::Runtime::ASM::bne(.L_801B3370);
/*801B3354 001B0154*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B3358 001B0158*/ PPC::Runtime::ASM::bl(fn_startCharge);
/*801B335C 001B015C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B3360 001B0160*/ PPC::Runtime::ASM::bne(.L_801B3448);
/*801B3364 001B0164*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B3368 001B0168*/ PPC::Runtime::ASM::bl(fn_801A8454);
/*801B336C 001B016C*/ PPC::Runtime::ASM::b(.L_801B3448);
RUNTIME_PPC_JUMP_LABEL(.L_801B3370, 0x801B3370) //this is a jump label
/*801B3370 001B0170*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r30));
/*801B3374 001B0174*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*801B3378 001B0178*/ PPC::Runtime::ASM::bne(.L_801B3388);
/*801B337C 001B017C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E15CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B3380 001B0180*/ PPC::Runtime::ASM::li(context->r31, 0xfb);
/*801B3384 001B0184*/ PPC::Runtime::ASM::b(.L_801B3414);
RUNTIME_PPC_JUMP_LABEL(.L_801B3388, 0x801B3388) //this is a jump label
/*801B3388 001B0188*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*801B338C 001B018C*/ PPC::Runtime::ASM::beq(.L_801B3398);
/*801B3390 001B0190*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*801B3394 001B0194*/ PPC::Runtime::ASM::bne(.L_801B33A4);
RUNTIME_PPC_JUMP_LABEL(.L_801B3398, 0x801B3398) //this is a jump label
/*801B3398 001B0198*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E15CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B339C 001B019C*/ PPC::Runtime::ASM::li(context->r31, 0xfa);
/*801B33A0 001B01A0*/ PPC::Runtime::ASM::b(.L_801B3414);
RUNTIME_PPC_JUMP_LABEL(.L_801B33A4, 0x801B33A4) //this is a jump label
/*801B33A4 001B01A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B33A8 001B01A8*/ PPC::Runtime::ASM::li(context->r31, 0xf9);
/*801B33AC 001B01AC*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*801B33B0 001B01B0*/ PPC::Runtime::ASM::bl(fn_8019970C);
/*801B33B4 001B01B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r30));
/*801B33B8 001B01B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*801B33BC 001B01BC*/ PPC::Runtime::ASM::bne(.L_801B33EC);
/*801B33C0 001B01C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r30));
/*801B33C4 001B01C4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801B33C8 001B01C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B33CC 001B01CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*801B33D0 001B01D0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E15E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B33D4 001B01D4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*801B33D8 001B01D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B33DC 001B01DC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B33E0 001B01E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801B33E4 001B01E4*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f0);
/*801B33E8 001B01E8*/ PPC::Runtime::ASM::b(.L_801B3414);
RUNTIME_PPC_JUMP_LABEL(.L_801B33EC, 0x801B33EC) //this is a jump label
/*801B33EC 001B01EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r30));
/*801B33F0 001B01F0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801B33F4 001B01F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B33F8 001B01F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*801B33FC 001B01FC*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E15E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B3400 001B0200*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*801B3404 001B0204*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B3408 001B0208*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B340C 001B020C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801B3410 001B0210*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801B3414, 0x801B3414) //this is a jump label
/*801B3414 001B0214*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B3418 001B0218*/ PPC::Runtime::ASM::bl(fn_801918BC);
/*801B341C 001B021C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E15C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B3420 001B0220*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*801B3424 001B0224*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B3428 001B0228*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*801B342C 001B022C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B3430 001B0230*/ PPC::Runtime::ASM::li(context->r4, 0x60);
/*801B3434 001B0234*/ PPC::Runtime::ASM::li(context->r6, 0x20);
/*801B3438 001B0238*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B343C 001B023C*/ PPC::Runtime::ASM::lis(context->r3, fn_ability_Plasma_DecreaseTimerByShot @ Get_MemoryOffset_HighBit);
/*801B3440 001B0240*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_ability_Plasma_DecreaseTimerByShot @ Get_MemoryOffset_LowBit);
/*801B3444 001B0244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801B3448, 0x801B3448) //this is a jump label
/*801B3448 001B0248*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801B344C 001B024C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801B3450 001B0250*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801B3454 001B0254*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B3458 001B0258*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801B345C 001B025C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B3460 001B0260*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801B3464 001B0264*/ PPC::Runtime::ASM::blr();
}