//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FEA60.hpp"
#include "fn_801FEB30.hpp"
#include "fn_801FE4F4.hpp"
#include "fn_80210888.hpp"
#include "fn_801FEB30.hpp"
#include "fn_801FEB30.hpp"
#include "fn_80210888.hpp"
#include "fn_80210888.hpp"
#include "fn_8020B490.hpp"



void fn_80210498(PPC::Runtime::GCContext* context)
{
/*80210498 0020D298*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8021049C 0020D29C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802104A0 0020D2A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802104A4 0020D2A4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802104A8 0020D2A8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802104AC 0020D2AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802104B0 0020D2B0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802104B4 0020D2B4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802104B8 0020D2B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r3));
/*802104BC 0020D2BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802104C0 0020D2C0*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802104C4 0020D2C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*802104C8 0020D2C8*/ PPC::Runtime::ASM::beq(.L_802107E0);
/*802104CC 0020D2CC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*802104D0 0020D2D0*/ PPC::Runtime::ASM::bl(fn_801FEA60);
/*802104D4 0020D2D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*802104D8 0020D2D8*/ PPC::Runtime::ASM::beq(.L_8021059C);
/*802104DC 0020D2DC*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*802104E0 0020D2E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802104E4 0020D2E4*/ PPC::Runtime::ASM::bge(.L_802104EC);
/*802104E8 0020D2E8*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_802104EC, 0x802104EC) //this is a jump label
/*802104EC 0020D2EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802104F0 0020D2F0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r30));
/*802104F4 0020D2F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*802104F8 0020D2F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802104FC 0020D2FC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80210500 0020D300*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210504 0020D304*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210508 0020D308*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021050C 0020D30C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80210510 0020D310*/ PPC::Runtime::ASM::ble(.L_80210518);
/*80210514 0020D314*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80210518, 0x80210518) //this is a jump label
/*80210518 0020D318*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x860, context->r30));
/*8021051C 0020D31C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210520 0020D320*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80210524 0020D324*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80210528 0020D328*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E252C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021052C 0020D32C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80210530 0020D330*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r30));
/*80210534 0020D334*/ PPC::Runtime::ASM::fdivs(context->f31, context->f2, context->f0);
/*80210538 0020D338*/ PPC::Runtime::ASM::bl(fn_801FEB30);
/*8021053C 0020D33C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*80210540 0020D340*/ PPC::Runtime::ASM::beq(.L_80210578);
/*80210544 0020D344*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*80210548 0020D348*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8021054C 0020D34C*/ PPC::Runtime::ASM::bge(.L_80210554);
/*80210550 0020D350*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_80210554, 0x80210554) //this is a jump label
/*80210554 0020D354*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210558 0020D358*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2538 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021055C 0020D35C*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80210560 0020D360*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210564 0020D364*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210568 0020D368*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021056C 0020D36C*/ PPC::Runtime::ASM::ble(.L_802107E8);
/*80210570 0020D370*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210574 0020D374*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_80210578, 0x80210578) //this is a jump label
/*80210578 0020D378*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*8021057C 0020D37C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E253C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210580 0020D380*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f31);
/*80210584 0020D384*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210588 0020D388*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*8021058C 0020D38C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210590 0020D390*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*80210594 0020D394*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210598 0020D398*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_8021059C, 0x8021059C) //this is a jump label
/*8021059C 0020D39C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r30));
/*802105A0 0020D3A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2f8);
/*802105A4 0020D3A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2540 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802105A8 0020D3A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802105AC 0020D3AC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802105B0 0020D3B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802105B4 0020D3B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r30));
/*802105B8 0020D3B8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802105BC 0020D3BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802105C0 0020D3C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r30));
/*802105C4 0020D3C4*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802105C8 0020D3C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802105CC 0020D3CC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r30));
/*802105D0 0020D3D0*/ PPC::Runtime::ASM::bl(fn_801FE4F4);
/*802105D4 0020D3D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802105D8 0020D3D8*/ PPC::Runtime::ASM::beq(.L_802106A0);
/*802105DC 0020D3DC*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r30));
/*802105E0 0020D3E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*802105E4 0020D3E4*/ PPC::Runtime::ASM::beq(.L_8021064C);
/*802105E8 0020D3E8*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*802105EC 0020D3EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802105F0 0020D3F0*/ PPC::Runtime::ASM::bge(.L_802105F8);
/*802105F4 0020D3F4*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_802105F8, 0x802105F8) //this is a jump label
/*802105F8 0020D3F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802105FC 0020D3FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210600 0020D400*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210604 0020D404*/ PPC::Runtime::ASM::bge(.L_8021060C);
/*80210608 0020D408*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8021060C, 0x8021060C) //this is a jump label
/*8021060C 0020D40C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80210610 0020D410*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210614 0020D414*/ PPC::Runtime::ASM::ble(.L_80210624);
/*80210618 0020D418*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8021061C 0020D41C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r30));
/*80210620 0020D420*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_80210624, 0x80210624) //this is a jump label
/*80210624 0020D424*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210628 0020D428*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8021062C 0020D42C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80210630 0020D430*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210634 0020D434*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210638 0020D438*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021063C 0020D43C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80210640 0020D440*/ PPC::Runtime::ASM::ble(.L_802107E8);
/*80210644 0020D444*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210648 0020D448*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_8021064C, 0x8021064C) //this is a jump label
/*8021064C 0020D44C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80210650 0020D450*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210654 0020D454*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210658 0020D458*/ PPC::Runtime::ASM::bge(.L_80210660);
/*8021065C 0020D45C*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80210660, 0x80210660) //this is a jump label
/*80210660 0020D460*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80210664 0020D464*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210668 0020D468*/ PPC::Runtime::ASM::ble(.L_80210694);
/*8021066C 0020D46C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210670 0020D470*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80210674 0020D474*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E252C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210678 0020D478*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*8021067C 0020D47C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210680 0020D480*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210684 0020D484*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210688 0020D488*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*8021068C 0020D48C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*80210690 0020D490*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_80210694, 0x80210694) //this is a jump label
/*80210694 0020D494*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210698 0020D498*/ PPC::Runtime::ASM::bl(fn_80210888);
/*8021069C 0020D49C*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_802106A0, 0x802106A0) //this is a jump label
/*802106A0 0020D4A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802106A4 0020D4A4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r30));
/*802106A8 0020D4A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*802106AC 0020D4AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802106B0 0020D4B0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802106B4 0020D4B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*802106B8 0020D4B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
/*802106BC 0020D4BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802106C0 0020D4C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*802106C4 0020D4C4*/ PPC::Runtime::ASM::ble(.L_802106CC);
/*802106C8 0020D4C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802106CC, 0x802106CC) //this is a jump label
/*802106CC 0020D4CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x860, context->r30));
/*802106D0 0020D4D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802106D4 0020D4D4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E252C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802106D8 0020D4D8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*802106DC 0020D4DC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802106E0 0020D4E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802106E4 0020D4E4*/ PPC::Runtime::ASM::fdivs(context->f31, context->f2, context->f1);
/*802106E8 0020D4E8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802106EC 0020D4EC*/ PPC::Runtime::ASM::bge(.L_802106F4);
/*802106F0 0020D4F0*/ PPC::Runtime::ASM::fneg(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_802106F4, 0x802106F4) //this is a jump label
/*802106F4 0020D4F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802106F8 0020D4F8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802106FC 0020D4FC*/ PPC::Runtime::ASM::bge(.L_80210770);
/*80210700 0020D500*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r30));
/*80210704 0020D504*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210708 0020D508*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021070C 0020D50C*/ PPC::Runtime::ASM::bl(fn_801FEB30);
/*80210710 0020D510*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*80210714 0020D514*/ PPC::Runtime::ASM::beq(.L_8021074C);
/*80210718 0020D518*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*8021071C 0020D51C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*80210720 0020D520*/ PPC::Runtime::ASM::bge(.L_80210728);
/*80210724 0020D524*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_80210728, 0x80210728) //this is a jump label
/*80210728 0020D528*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*8021072C 0020D52C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2538 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210730 0020D530*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80210734 0020D534*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210738 0020D538*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*8021073C 0020D53C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210740 0020D540*/ PPC::Runtime::ASM::ble(.L_802107E8);
/*80210744 0020D544*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210748 0020D548*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_8021074C, 0x8021074C) //this is a jump label
/*8021074C 0020D54C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210750 0020D550*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E253C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80210754 0020D554*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f31);
/*80210758 0020D558*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*8021075C 0020D55C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*80210760 0020D560*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80210764 0020D564*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*80210768 0020D568*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*8021076C 0020D56C*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_80210770, 0x80210770) //this is a jump label
/*80210770 0020D570*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r30));
/*80210774 0020D574*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210778 0020D578*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021077C 0020D57C*/ PPC::Runtime::ASM::bl(fn_801FEB30);
/*80210780 0020D580*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*80210784 0020D584*/ PPC::Runtime::ASM::beq(.L_80210798);
/*80210788 0020D588*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*8021078C 0020D58C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*80210790 0020D590*/ PPC::Runtime::ASM::bge(.L_802107BC);
/*80210794 0020D594*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_80210798, 0x80210798) //this is a jump label
/*80210798 0020D598*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*8021079C 0020D59C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2538 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802107A0 0020D5A0*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*802107A4 0020D5A4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*802107A8 0020D5A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*802107AC 0020D5AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802107B0 0020D5B0*/ PPC::Runtime::ASM::ble(.L_802107E8);
/*802107B4 0020D5B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*802107B8 0020D5B8*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_802107BC, 0x802107BC) //this is a jump label
/*802107BC 0020D5BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*802107C0 0020D5C0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E253C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802107C4 0020D5C4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f31);
/*802107C8 0020D5C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*802107CC 0020D5CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*802107D0 0020D5D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802107D4 0020D5D4*/ PPC::Runtime::ASM::bge(.L_802107E8);
/*802107D8 0020D5D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x868, context->r30));
/*802107DC 0020D5DC*/ PPC::Runtime::ASM::b(.L_802107E8);
RUNTIME_PPC_JUMP_LABEL(.L_802107E0, 0x802107E0) //this is a jump label
/*802107E0 0020D5E0*/ PPC::Runtime::ASM::bl(fn_80210888);
/*802107E4 0020D5E4*/ PPC::Runtime::ASM::b(.L_80210818);
RUNTIME_PPC_JUMP_LABEL(.L_802107E8, 0x802107E8) //this is a jump label
/*802107E8 0020D5E8*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r30));
/*802107EC 0020D5EC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802107F0 0020D5F0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r30));
/*802107F4 0020D5F4*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r30));
/*802107F8 0020D5F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802107FC 0020D5FC*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80210800 0020D600*/ PPC::Runtime::ASM::ble(.L_80210810);
/*80210804 0020D604*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210808 0020D608*/ PPC::Runtime::ASM::bl(fn_80210888);
/*8021080C 0020D60C*/ PPC::Runtime::ASM::b(.L_80210818);
RUNTIME_PPC_JUMP_LABEL(.L_80210810, 0x80210810) //this is a jump label
/*80210810 0020D610*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80210814 0020D614*/ PPC::Runtime::ASM::bl(fn_8020B490);
RUNTIME_PPC_JUMP_LABEL(.L_80210818, 0x80210818) //this is a jump label
/*80210818 0020D618*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8021081C 0020D61C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80210820 0020D620*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80210824 0020D624*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80210828 0020D628*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021082C 0020D62C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80210830 0020D630*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80210834 0020D634*/ PPC::Runtime::ASM::blr();
}