//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80275FCC.hpp"
#include "fn_8026D6A0.hpp"
#include "fn_80276EA0.hpp"
#include "fn_801C7668.hpp"
#include "fn_8026D6A0.hpp"



void fn_802704C4(PPC::Runtime::GCContext* context)
{
/*802704C4 0026D2C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*802704C8 0026D2C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802704CC 0026D2CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802704D0 0026D2D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802704D4 0026D2D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802704D8 0026D2D8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802704DC 0026D2DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*802704E0 0026D2E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r30));
/*802704E4 0026D2E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802704E8 0026D2E8*/ PPC::Runtime::ASM::beq(.L_8027050C);
/*802704EC 0026D2EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802704F0 0026D2F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r5));
/*802704F4 0026D2F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r5));
/*802704F8 0026D2F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r5));
/*802704FC 0026D2FC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80270500 0026D300*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80270504 0026D304*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80270508 0026D308*/ PPC::Runtime::ASM::b(.L_80270524);
RUNTIME_PPC_JUMP_LABEL(.L_8027050C, 0x8027050C) //this is a jump label
/*8027050C 0026D30C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*80270510 0026D310*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*80270514 0026D314*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*80270518 0026D318*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8027051C 0026D31C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80270520 0026D320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80270524, 0x80270524) //this is a jump label
/*80270524 0026D324*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80270528 0026D328*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*8027052C 0026D32C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80270530 0026D330*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80270534 0026D334*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80270538 0026D338*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8027053C 0026D33C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80270540 0026D340*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270544 0026D344*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80270548 0026D348*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f1);
/*8027054C 0026D34C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E2FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270550 0026D350*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80270554 0026D354*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80270558 0026D358*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f4, context->f0);
/*8027055C 0026D35C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80270560 0026D360*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*80270564 0026D364*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80270568 0026D368*/ PPC::Runtime::ASM::fmuls(context->f4, context->f4, context->f0);
/*8027056C 0026D36C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f2);
/*80270570 0026D370*/ PPC::Runtime::ASM::fadds(context->f2, context->f3, context->f4);
/*80270574 0026D374*/ PPC::Runtime::ASM::fadds(context->f0, context->f5, context->f4);
/*80270578 0026D378*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8027057C 0026D37C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80270580 0026D380*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80270584 0026D384*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*80270588 0026D388*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027058C 0026D38C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270590 0026D390*/ PPC::Runtime::ASM::bge(.L_802705D8);
/*80270594 0026D394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*80270598 0026D398*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8027059C 0026D39C*/ PPC::Runtime::ASM::beq(.L_802705C0);
/*802705A0 0026D3A0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802705A4 0026D3A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r4));
/*802705A8 0026D3A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r4));
/*802705AC 0026D3AC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802705B0 0026D3B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802705B4 0026D3B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r4));
/*802705B8 0026D3B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802705BC 0026D3BC*/ PPC::Runtime::ASM::b(.L_802705D8);
RUNTIME_PPC_JUMP_LABEL(.L_802705C0, 0x802705C0) //this is a jump label
/*802705C0 0026D3C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*802705C4 0026D3C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*802705C8 0026D3C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802705CC 0026D3CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802705D0 0026D3D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*802705D4 0026D3D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802705D8, 0x802705D8) //this is a jump label
/*802705D8 0026D3D8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*802705DC 0026D3DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*802705E0 0026D3E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r30));
/*802705E4 0026D3E4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802705E8 0026D3E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802705EC 0026D3EC*/ PPC::Runtime::ASM::fsubs(context->f6, context->f2, context->f0);
/*802705F0 0026D3F0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802705F4 0026D3F4*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802705F8 0026D3F8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*802705FC 0026D3FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r30));
/*80270600 0026D400*/ PPC::Runtime::ASM::fsubs(context->f5, context->f3, context->f0);
/*80270604 0026D404*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80270608 0026D408*/ PPC::Runtime::ASM::fmuls(context->f0, context->f5, context->f1);
/*8027060C 0026D40C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*80270610 0026D410*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r30));
/*80270614 0026D414*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f2, context->f0);
/*80270618 0026D418*/ PPC::Runtime::ASM::fsubs(context->f3, context->f4, context->f3);
/*8027061C 0026D41C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f2, context->f0);
/*80270620 0026D420*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80270624 0026D424*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80270628 0026D428*/ PPC::Runtime::ASM::fmuls(context->f4, context->f2, context->f0);
/*8027062C 0026D42C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f5);
/*80270630 0026D430*/ PPC::Runtime::ASM::fadds(context->f2, context->f6, context->f4);
/*80270634 0026D434*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f4);
/*80270638 0026D438*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8027063C 0026D43C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80270640 0026D440*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80270644 0026D444*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*80270648 0026D448*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027064C 0026D44C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270650 0026D450*/ PPC::Runtime::ASM::bge(.L_8027066C);
/*80270654 0026D454*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80270658 0026D458*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8027065C 0026D45C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80270660 0026D460*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80270664 0026D464*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80270668 0026D468*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8027066C, 0x8027066C) //this is a jump label
/*8027066C 0026D46C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*80270670 0026D470*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*80270674 0026D474*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*80270678 0026D478*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3168 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027067C 0026D47C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270680 0026D480*/ PPC::Runtime::ASM::ble(.L_80270734);
/*80270684 0026D484*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r30));
/*80270688 0026D488*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8027068C 0026D48C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80270690 0026D490*/ PPC::Runtime::ASM::bl(fn_80275FCC);
/*80270694 0026D494*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*80270698 0026D498*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8027069C 0026D49C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r30));
/*802706A0 0026D4A0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802706A4 0026D4A4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802706A8 0026D4A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802706AC 0026D4AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*802706B0 0026D4B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r30));
/*802706B4 0026D4B4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802706B8 0026D4B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802706BC 0026D4BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*802706C0 0026D4C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r30));
/*802706C4 0026D4C4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802706C8 0026D4C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802706CC 0026D4CC*/ PPC::Runtime::ASM::bl(fn_8026D6A0);
/*802706D0 0026D4D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r31));
/* 802706D4 0026D4D4  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*802706D8 0026D4D8*/ PPC::Runtime::ASM::bne(.L_80270728);
/*802706DC 0026D4DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*802706E0 0026D4E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802706E4 0026D4E4*/ PPC::Runtime::ASM::beq(.L_8027071C);
/*802706E8 0026D4E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802706EC 0026D4EC*/ PPC::Runtime::ASM::bl(fn_80276EA0);
/*802706F0 0026D4F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802706F4 0026D4F4*/ PPC::Runtime::ASM::beq(.L_8027071C);
/*802706F8 0026D4F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*802706FC 0026D4FC*/ PPC::Runtime::ASM::bl(fn_801C7668);
/*80270700 0026D500*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80270704 0026D504*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270708 0026D508*/ PPC::Runtime::ASM::ble(.L_80270714);
/*8027070C 0026D50C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80270710 0026D510*/ PPC::Runtime::ASM::b(.L_80270720);
RUNTIME_PPC_JUMP_LABEL(.L_80270714, 0x80270714) //this is a jump label
/*80270714 0026D514*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80270718 0026D518*/ PPC::Runtime::ASM::b(.L_80270720);
RUNTIME_PPC_JUMP_LABEL(.L_8027071C, 0x8027071C) //this is a jump label
/*8027071C 0026D51C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80270720, 0x80270720) //this is a jump label
/*80270720 0026D520*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80270724 0026D524*/ PPC::Runtime::ASM::beq(.L_80270740);
RUNTIME_PPC_JUMP_LABEL(.L_80270728, 0x80270728) //this is a jump label
/*80270728 0026D528*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8027072C 0026D52C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80270730 0026D530*/ PPC::Runtime::ASM::b(.L_80270740);
RUNTIME_PPC_JUMP_LABEL(.L_80270734, 0x80270734) //this is a jump label
/*80270734 0026D534*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270738 0026D538*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*8027073C 0026D53C*/ PPC::Runtime::ASM::bl(fn_8026D6A0);
RUNTIME_PPC_JUMP_LABEL(.L_80270740, 0x80270740) //this is a jump label
/*80270740 0026D540*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80270744 0026D544*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80270748 0026D548*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8027074C 0026D54C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80270750 0026D550*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80270754 0026D554*/ PPC::Runtime::ASM::blr();
}