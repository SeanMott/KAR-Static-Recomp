//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006B438.hpp"



void fn_8006B438(PPC::Runtime::GCContext* context)
{
/*8006B438 00068238*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*8006B43C 0006823C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006B440 00068240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8006B444 00068244*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8006B448 00068248*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8006B44C 0006824C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8006B450 00068250*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8006B454 00068254*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8006B458 00068258*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8006B45C 0006825C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8006B460 00068260*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8006B464 00068264*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805DEC10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B468 00068268*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8006B46C 0006826C*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8006B470 00068270*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8006B474 00068274*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8006B478 00068278*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8006B47C 0006827C*/ PPC::Runtime::ASM::ble(.L_8006B648);
/*8006B480 00068280*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B484 00068284*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8006B488 00068288*/ PPC::Runtime::ASM::fmuls(context->f31, context->f0, context->f2);
/*8006B48C 0006828C*/ PPC::Runtime::ASM::fadds(context->f1, context->f30, context->f31);
/*8006B490 00068290*/ PPC::Runtime::ASM::fsubs(context->f0, context->f30, context->f31);
/*8006B494 00068294*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006B498 00068298*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006B49C 0006829C*/ PPC::Runtime::ASM::beq(.L_8006B534);
/*8006B4A0 000682A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEC00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B4A4 000682A4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8006B4A8 000682A8*/ PPC::Runtime::ASM::bge(.L_8006B4B8);
/*8006B4AC 000682AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B4B0 000682B0*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*8006B4B4 000682B4*/ PPC::Runtime::ASM::b(.L_8006B4C8);
RUNTIME_PPC_JUMP_LABEL(.L_8006B4B8, 0x8006B4B8) //this is a jump label
/*8006B4B8 000682B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B4BC 000682BC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8006B4C0 000682C0*/ PPC::Runtime::ASM::ble(.L_8006B4C8);
/*8006B4C4 000682C4*/ PPC::Runtime::ASM::fsubs(context->f30, context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8006B4C8, 0x8006B4C8) //this is a jump label
/*8006B4C8 000682C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006B4CC 000682CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEC00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B4D0 000682D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B4D4 000682D4*/ PPC::Runtime::ASM::bge(.L_8006B4E8);
/*8006B4D8 000682D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B4DC 000682DC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8006B4E0 000682E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006B4E4 000682E4*/ PPC::Runtime::ASM::b(.L_8006B4FC);
RUNTIME_PPC_JUMP_LABEL(.L_8006B4E8, 0x8006B4E8) //this is a jump label
/*8006B4E8 000682E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B4EC 000682EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B4F0 000682F0*/ PPC::Runtime::ASM::ble(.L_8006B4FC);
/*8006B4F4 000682F4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8006B4F8 000682F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006B4FC, 0x8006B4FC) //this is a jump label
/*8006B4FC 000682FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006B500 00068300*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEC00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B504 00068304*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B508 00068308*/ PPC::Runtime::ASM::bge(.L_8006B51C);
/*8006B50C 0006830C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B510 00068310*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8006B514 00068314*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006B518 00068318*/ PPC::Runtime::ASM::b(.L_8006B5A8);
RUNTIME_PPC_JUMP_LABEL(.L_8006B51C, 0x8006B51C) //this is a jump label
/*8006B51C 0006831C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B520 00068320*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B524 00068324*/ PPC::Runtime::ASM::ble(.L_8006B5A8);
/*8006B528 00068328*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8006B52C 0006832C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006B530 00068330*/ PPC::Runtime::ASM::b(.L_8006B5A8);
RUNTIME_PPC_JUMP_LABEL(.L_8006B534, 0x8006B534) //this is a jump label
/*8006B534 00068334*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEC00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B538 00068338*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8006B53C 0006833C*/ PPC::Runtime::ASM::bge(.L_8006B548);
/*8006B540 00068340*/ PPC::Runtime::ASM::fmr(context->f30, context->f0);
/*8006B544 00068344*/ PPC::Runtime::ASM::b(.L_8006B558);
RUNTIME_PPC_JUMP_LABEL(.L_8006B548, 0x8006B548) //this is a jump label
/*8006B548 00068348*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B54C 0006834C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8006B550 00068350*/ PPC::Runtime::ASM::ble(.L_8006B558);
/*8006B554 00068354*/ PPC::Runtime::ASM::fmr(context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8006B558, 0x8006B558) //this is a jump label
/*8006B558 00068358*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006B55C 0006835C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEC00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B560 00068360*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B564 00068364*/ PPC::Runtime::ASM::bge(.L_8006B570);
/*8006B568 00068368*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006B56C 0006836C*/ PPC::Runtime::ASM::b(.L_8006B580);
RUNTIME_PPC_JUMP_LABEL(.L_8006B570, 0x8006B570) //this is a jump label
/*8006B570 00068370*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B574 00068374*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B578 00068378*/ PPC::Runtime::ASM::ble(.L_8006B580);
/*8006B57C 0006837C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006B580, 0x8006B580) //this is a jump label
/*8006B580 00068380*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006B584 00068384*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEC00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B588 00068388*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B58C 0006838C*/ PPC::Runtime::ASM::bge(.L_8006B598);
/*8006B590 00068390*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006B594 00068394*/ PPC::Runtime::ASM::b(.L_8006B5A8);
RUNTIME_PPC_JUMP_LABEL(.L_8006B598, 0x8006B598) //this is a jump label
/*8006B598 00068398*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEBF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006B59C 0006839C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8006B5A0 000683A0*/ PPC::Runtime::ASM::ble(.L_8006B5A8);
/*8006B5A4 000683A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006B5A8, 0x8006B5A8) //this is a jump label
/*8006B5A8 000683A8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8006B5AC 000683AC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8006B5B0 000683B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*8006B5B4 000683B4*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*8006B5B8 000683B8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8006B5BC 000683BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*8006B5C0 000683C0*/ PPC::Runtime::ASM::bl(fn_803D22CC);
/*8006B5C4 000683C4*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*8006B5C8 000683C8*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x10);
/*8006B5CC 000683CC*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x8);
/*8006B5D0 000683D0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006B5D4, 0x8006B5D4) //this is a jump label
/*8006B5D4 000683D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8006B5D8 000683D8*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8006B5DC 000683DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*8006B5E0 000683E0*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*8006B5E4 000683E4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8006B5E8 000683E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*8006B5EC 000683EC*/ PPC::Runtime::ASM::bl(fn_803D22CC);
/*8006B5F0 000683F0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8006B5F4 000683F4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8006B5F8 000683F8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8006B5FC 000683FC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8006B600 00068400*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*8006B604 00068404*/ PPC::Runtime::ASM::blt(.L_8006B5D4);
/*8006B608 00068408*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006B60C 0006840C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*8006B610 00068410*/ PPC::Runtime::ASM::ble(.L_8006B61C);
/*8006B614 00068414*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006B618 00068418*/ PPC::Runtime::ASM::fmr(context->f29, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8006B61C, 0x8006B61C) //this is a jump label
/*8006B61C 0006841C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006B620 00068420*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*8006B624 00068424*/ PPC::Runtime::ASM::ble(.L_8006B62C);
/*8006B628 00068428*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006B62C, 0x8006B62C) //this is a jump label
/*8006B62C 0006842C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8006B630 00068430*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8006B634 00068434*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*8006B638 00068438*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8006B63C 0006843C*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8006B640 00068440*/ PPC::Runtime::ASM::bl(fn_8006B438);
/*8006B644 00068444*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8006B648, 0x8006B648) //this is a jump label
/*8006B648 00068448*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8006B64C 0006844C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8006B650 00068450*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8006B654 00068454*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8006B658 00068458*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8006B65C 0006845C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8006B660 00068460*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8006B664 00068464*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8006B668 00068468*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8006B66C 0006846C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8006B670 00068470*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006B674 00068474*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*8006B678 00068478*/ PPC::Runtime::ASM::blr();
}