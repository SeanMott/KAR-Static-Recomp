//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_isRuleKirbyMelee.hpp"
#include "fn_80191960.hpp"
#include "fn_801914E8.hpp"
#include "fn_randomAbility_changeModel.hpp"
#include "fn_80195588.hpp"
#include "fn_801AE6D8.hpp"
#include "fn_801AE6D8.hpp"
#include "fn_randomAbility_checkIfaPress.hpp"
#include "fn_801AE9B8.hpp"
#include "fn_randomAbility_checkIfaPress.hpp"
#include "fn_801AE92C.hpp"
#include "fn_801AE9B8.hpp"
#include "fn_801AE92C.hpp"
#include "fn_8019BFB4.hpp"
#include "fn_80191798.hpp"
#include "fn_801AE92C.hpp"
#include "fn_8027A674.hpp"
#include "fn_801A8454.hpp"



void fn_801AE550(PPC::Runtime::GCContext* context)
{
/*801AE550 001AB350*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AE554 001AB354*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AE558 001AB358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE55C 001AB35C*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*801AE560 001AB360*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AE564 001AB364*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801AE568 001AB368*/ PPC::Runtime::ASM::divwu(context->r0, context->r31, context->r0);
/*801AE56C 001AB36C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AE570 001AB370*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801AE574 001AB374*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801AE578 001AB378*/ PPC::Runtime::ASM::cmpwi(context->r31, 0xb);
/*801AE57C 001AB37C*/ PPC::Runtime::ASM::blt(.L_801AE588);
RUNTIME_PPC_JUMP_LABEL(.L_801AE580, 0x801AE580) //this is a jump label
/*801AE580 001AB380*/ PPC::Runtime::ASM::subi(context->r31, context->r31, 0xb);
/*801AE584 001AB384*/ PPC::Runtime::ASM::bdnz(.L_801AE580);
RUNTIME_PPC_JUMP_LABEL(.L_801AE588, 0x801AE588) //this is a jump label
/*801AE588 001AB388*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r30));
/*801AE58C 001AB38C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801AE590 001AB390*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r30));
/*801AE594 001AB394*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*801AE598 001AB398*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r30));
/*801AE59C 001AB39C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r30));
/*801AE5A0 001AB3A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r3));
/*801AE5A4 001AB3A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r30));
/*801AE5A8 001AB3A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r30));
/*801AE5AC 001AB3AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r3));
/*801AE5B0 001AB3B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a4, context->r30));
/*801AE5B4 001AB3B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r30));
/*801AE5B8 001AB3B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*801AE5BC 001AB3BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a8, context->r30));
/*801AE5C0 001AB3C0*/ PPC::Runtime::ASM::bl(fn_isRuleKirbyMelee);
/*801AE5C4 001AB3C4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AE5C8 001AB3C8*/ PPC::Runtime::ASM::bne(.L_801AE5E8);
/*801AE5CC 001AB3CC*/ PPC::Runtime::ASM::bl(fn_80191960);
/*801AE5D0 001AB3D0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AE5D4 001AB3D4*/ PPC::Runtime::ASM::beq(.L_801AE604);
/*801AE5D8 001AB3D8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE5DC 001AB3DC*/ PPC::Runtime::ASM::bl(fn_801914E8);
/*801AE5E0 001AB3E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AE5E4 001AB3E4*/ PPC::Runtime::ASM::bne(.L_801AE604);
RUNTIME_PPC_JUMP_LABEL(.L_801AE5E8, 0x801AE5E8) //this is a jump label
/*801AE5E8 001AB3E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AF730 @ Get_MemoryOffset_HighBit);
/*801AE5EC 001AB3EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804AF730 @ Get_MemoryOffset_LowBit);
/*801AE5F0 001AB3F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801AE5F4 001AB3F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9ac, context->r30));
/*801AE5F8 001AB3F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801AE5FC 001AB3FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b0, context->r30));
/*801AE600 001AB400*/ PPC::Runtime::ASM::b(.L_801AE618);
RUNTIME_PPC_JUMP_LABEL(.L_801AE604, 0x801AE604) //this is a jump label
/*801AE604 001AB404*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AF730 @ Get_MemoryOffset_HighBit);
/*801AE608 001AB408*/ PPC::Runtime::ASM::lwzu(context->r0, lbl_804AF730 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*801AE60C 001AB40C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9ac, context->r30));
/*801AE610 001AB410*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801AE614 001AB414*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801AE618, 0x801AE618) //this is a jump label
/*801AE618 001AB418*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b0, context->r30));
/*801AE61C 001AB41C*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801AE620 001AB420*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE624 001AB424*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801AE628 001AB428*/ PPC::Runtime::ASM::bl(fn_randomAbility_changeModel);
/*801AE62C 001AB42C*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*801AE630 001AB430*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1470 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801AE634 001AB434*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE638 001AB438*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4b);
/*801AE63C 001AB43C*/ PPC::Runtime::ASM::bl(fn_80195588);
/*801AE640 001AB440*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801AE644 001AB444*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801AE648 001AB448*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*801AE64C 001AB44C*/ PPC::Runtime::ASM::lis(context->r3, fn_801AE6D8 @ Get_MemoryOffset_HighBit);
/*801AE650 001AB450*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801AE654 001AB454*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801AE6D8 @ Get_MemoryOffset_LowBit);
/*801AE658 001AB458*/ PPC::Runtime::ASM::lis(context->r3, fn_randomAbility_checkIfaPress @ Get_MemoryOffset_HighBit);
/*801AE65C 001AB45C*/ PPC::Runtime::ASM::lis(context->r4, fn_801AE9B8 @ Get_MemoryOffset_HighBit);
/*801AE660 001AB460*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x92c, context->r30));
/*801AE664 001AB464*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_randomAbility_checkIfaPress @ Get_MemoryOffset_LowBit);
/*801AE668 001AB468*/ PPC::Runtime::ASM::lis(context->r3, fn_801AE92C @ Get_MemoryOffset_HighBit);
/*801AE66C 001AB46C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_801AE9B8 @ Get_MemoryOffset_LowBit);
/*801AE670 001AB470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x930, context->r30));
/*801AE674 001AB474*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801AE92C @ Get_MemoryOffset_LowBit);
/*801AE678 001AB478*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE67C 001AB47C*/ PPC::Runtime::ASM::li(context->r4, 0x2d);
/*801AE680 001AB480*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r30));
/*801AE684 001AB484*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801AE688 001AB488*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r30));
/*801AE68C 001AB48C*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*801AE690 001AB490*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE694 001AB494*/ PPC::Runtime::ASM::bl(fn_80191798);
/*801AE698 001AB498*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AE69C 001AB49C*/ PPC::Runtime::ASM::beq(.L_801AE6B0);
/*801AE6A0 001AB4A0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE6A4 001AB4A4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801AE6A8 001AB4A8*/ PPC::Runtime::ASM::bl(fn_801AE92C);
/*801AE6AC 001AB4AC*/ PPC::Runtime::ASM::b(.L_801AE6C0);
RUNTIME_PPC_JUMP_LABEL(.L_801AE6B0, 0x801AE6B0) //this is a jump label
/*801AE6B0 001AB4B0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801AE6B4 001AB4B4*/ PPC::Runtime::ASM::bl(fn_8027A674);
/*801AE6B8 001AB4B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE6BC 001AB4BC*/ PPC::Runtime::ASM::bl(fn_801A8454);
RUNTIME_PPC_JUMP_LABEL(.L_801AE6C0, 0x801AE6C0) //this is a jump label
/*801AE6C0 001AB4C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE6C4 001AB4C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AE6C8 001AB4C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AE6CC 001AB4CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AE6D0 001AB4D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AE6D4 001AB4D4*/ PPC::Runtime::ASM::blr();
}