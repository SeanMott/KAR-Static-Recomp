//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8031C2DC.hpp"
#include "fn_8031BF3C.hpp"
#include "fn_8031BFDC.hpp"
#include "fn_8031C144.hpp"
#include "fn_8031B474.hpp"
#include "fn_8031B474.hpp"



void fn_8031B474(PPC::Runtime::GCContext* context)
{
/*8031B474 00318274*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8031B478 00318278*/ PPC::Runtime::ASM::mflr(context->r0);
/*8031B47C 0031827C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8031B480 00318280*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8031B484 00318284*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8031B488 00318288*/ PPC::Runtime::ASM::lis(context->r5, 0x6666);
/*8031B48C 0031828C*/ PPC::Runtime::ASM::lbz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031B490 00318290*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8031B494 00318294*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8031B498 00318298*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x6667);
RUNTIME_PPC_JUMP_LABEL(.L_8031B49C, 0x8031B49C) //this is a jump label
/*8031B49C 0031829C*/ PPC::Runtime::ASM::subf(context->r0, context->r29, context->r30);
/*8031B4A0 003182A0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8031B4A4 003182A4*/ PPC::Runtime::ASM::addze(context->r6, context->r0);
/*8031B4A8 003182A8*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x1);
/*8031B4AC 003182AC*/ PPC::Runtime::ASM::ble(.L_8031B628);
/*8031B4B0 003182B0*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x14);
/*8031B4B4 003182B4*/ PPC::Runtime::ASM::bgt(.L_8031B4C8);
/*8031B4B8 003182B8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8031B4BC 003182BC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8031B4C0 003182C0*/ PPC::Runtime::ASM::bl(fn_8031C2DC);
/*8031B4C4 003182C4*/ PPC::Runtime::ASM::b(.L_8031B628);
RUNTIME_PPC_JUMP_LABEL(.L_8031B4C8, 0x8031B4C8) //this is a jump label
/*8031B4C8 003182C8*/ PPC::Runtime::ASM::lbz(context->r0, SkipAddress_61 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031B4CC 003182CC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8031B4D0 003182D0*/ PPC::Runtime::ASM::bne(.L_8031B4E4);
/*8031B4D4 003182D4*/ PPC::Runtime::ASM::li(context->r3, -0x4);
/*8031B4D8 003182D8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8031B4DC 003182DC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDC28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031B4E0 003182E0*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_61 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8031B4E4, 0x8031B4E4) //this is a jump label
/*8031B4E4 003182E4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDC28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031B4E8 003182E8*/ PPC::Runtime::ASM::srawi(context->r0, context->r6, 2);
/*8031B4EC 003182EC*/ PPC::Runtime::ASM::addze(context->r5, context->r0);
/* 8031B4F0 003182F0  7C 7F 20 96 */ mulhw context->r3 , context->r31 , context->r4
/*8031B4F4 003182F4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8031B4F8 003182F8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031B4FC 003182FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*8031B500 00318300*/ PPC::Runtime::ASM::srawi(context->r0, context->r3, 1);
/*8031B504 00318304*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8031B508 00318308*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8031B50C 0031830C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x5);
/*8031B510 00318310*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*8031B514 00318314*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*8031B518 00318318*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8031B51C 0031831C*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*8031B520 00318320*/ PPC::Runtime::ASM::blt(.L_8031B52C);
/*8031B524 00318324*/ PPC::Runtime::ASM::li(context->r0, -0x4);
/*8031B528 00318328*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8031B52C, 0x8031B52C) //this is a jump label
/*8031B52C 0031832C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDC28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031B530 00318330*/ PPC::Runtime::ASM::mulli(context->r6, context->r6, 0x3);
/*8031B534 00318334*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/* 8031B538 00318338  7C 9F 28 96 */ mulhw context->r4 , context->r31 , context->r5
/*8031B53C 0031833C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031B540 00318340*/ PPC::Runtime::ASM::srawi(context->r6, context->r6, 2);
/*8031B544 00318344*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*8031B548 00318348*/ PPC::Runtime::ASM::addze(context->r6, context->r6);
/*8031B54C 0031834C*/ PPC::Runtime::ASM::srawi(context->r0, context->r4, 1);
/*8031B550 00318350*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8031B554 00318354*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8031B558 00318358*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x5);
/*8031B55C 0031835C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*8031B560 00318360*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r0);
/*8031B564 00318364*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8031B568 00318368*/ PPC::Runtime::ASM::add(context->r4, context->r29, context->r0);
/*8031B56C 0031836C*/ PPC::Runtime::ASM::blt(.L_8031B578);
/*8031B570 00318370*/ PPC::Runtime::ASM::li(context->r0, -0x4);
/*8031B574 00318374*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8031B578, 0x8031B578) //this is a jump label
/*8031B578 00318378*/ PPC::Runtime::ASM::subi(context->r26, context->r30, 0x4);
/*8031B57C 0031837C*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*8031B580 00318380*/ PPC::Runtime::ASM::bl(fn_8031BF3C);
/*8031B584 00318384*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8031B588 00318388*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8031B58C 0031838C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8031B590 00318390*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8031B594 00318394*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031B598 00318398*/ PPC::Runtime::ASM::bl(fn_8031BFDC);
/*8031B59C 0031839C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8031B5A0 003183A0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r29);
/*8031B5A4 003183A4*/ PPC::Runtime::ASM::bne(.L_8031B5E4);
/*8031B5A8 003183A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8031B5AC 003183AC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8031B5B0 003183B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8031B5B4 003183B4*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x4);
/*8031B5B8 003183B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8031B5BC 003183BC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x18);
/*8031B5C0 003183C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8031B5C4 003183C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8031B5C8 003183C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031B5CC 003183CC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8031B5D0 003183D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8031B5D4 003183D4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8031B5D8 003183D8*/ PPC::Runtime::ASM::bl(fn_8031C144);
/*8031B5DC 003183DC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8031B5E0 003183E0*/ PPC::Runtime::ASM::b(.L_8031B49C);
RUNTIME_PPC_JUMP_LABEL(.L_8031B5E4, 0x8031B5E4) //this is a jump label
/*8031B5E4 003183E4*/ PPC::Runtime::ASM::subf(context->r4, context->r29, context->r27);
/*8031B5E8 003183E8*/ PPC::Runtime::ASM::subf(context->r0, context->r27, context->r30);
/*8031B5EC 003183EC*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 2);
/*8031B5F0 003183F0*/ PPC::Runtime::ASM::addze(context->r4, context->r4);
/*8031B5F4 003183F4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8031B5F8 003183F8*/ PPC::Runtime::ASM::addze(context->r0, context->r0);
/*8031B5FC 003183FC*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8031B600 00318400*/ PPC::Runtime::ASM::bge(.L_8031B618);
/*8031B604 00318404*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8031B608 00318408*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8031B60C 0031840C*/ PPC::Runtime::ASM::bl(fn_8031B474);
/*8031B610 00318410*/ PPC::Runtime::ASM::mr(context->r29, context->r27);
/*8031B614 00318414*/ PPC::Runtime::ASM::b(.L_8031B49C);
RUNTIME_PPC_JUMP_LABEL(.L_8031B618, 0x8031B618) //this is a jump label
/*8031B618 00318418*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8031B61C 0031841C*/ PPC::Runtime::ASM::bl(fn_8031B474);
/*8031B620 00318420*/ PPC::Runtime::ASM::mr(context->r30, context->r27);
/*8031B624 00318424*/ PPC::Runtime::ASM::b(.L_8031B49C);
RUNTIME_PPC_JUMP_LABEL(.L_8031B628, 0x8031B628) //this is a jump label
/*8031B628 00318428*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8031B62C 0031842C*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8031B630 00318430*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8031B634 00318434*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8031B638 00318438*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8031B63C 0031843C*/ PPC::Runtime::ASM::blr();
}