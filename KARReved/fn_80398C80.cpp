//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB78.hpp"
#include "fn_80377A1C.hpp"
#include "fn_8039967C.hpp"
#include "fn_8038CB78.hpp"



void fn_80398C80(PPC::Runtime::GCContext* context)
{
/*80398C80 00395A80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80398C84 00395A84*/ PPC::Runtime::ASM::mflr(context->r0);
/*80398C88 00395A88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80398C8C 00395A8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80398C90 00395A90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80398C94 00395A94*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80398C98 00395A98*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 80398C9C 00395A9C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*80398CA0 00395AA0*/ PPC::Runtime::ASM::beq(.L_80398D50);
/*80398CA4 00395AA4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5A0C @ Get_MemoryOffset_HighBit);
/*80398CA8 00395AA8*/ PPC::Runtime::ASM::addi(context->r31, context->r29, 0x8);
/*80398CAC 00395AAC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5A0C @ Get_MemoryOffset_LowBit);
/*80398CB0 00395AB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80398CB4 00395AB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80398CB8 00395AB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80398CBC 00395ABC*/ PPC::Runtime::ASM::b(.L_80398CF4);
RUNTIME_PPC_JUMP_LABEL(.L_80398CC0, 0x80398CC0) //this is a jump label
/*80398CC0 00395AC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80398CC4 00395AC4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
/*80398CC8 00395AC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80398CCC 00395ACC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80398CD0 00395AD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80398CD4 00395AD4*/ PPC::Runtime::ASM::beq(.L_80398CEC);
/*80398CD8 00395AD8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398CDC 00395ADC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80398CE0 00395AE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80398CE4 00395AE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80398CE8 00395AE8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80398CEC, 0x80398CEC) //this is a jump label
/*80398CEC 00395AEC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80398CF0 00395AF0*/ PPC::Runtime::ASM::bl(fn_80377A1C);
RUNTIME_PPC_JUMP_LABEL(.L_80398CF4, 0x80398CF4) //this is a jump label
/*80398CF4 00395AF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80398CF8 00395AF8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*80398CFC 00395AFC*/ PPC::Runtime::ASM::bne(.L_80398CC0);
/*80398D00 00395B00*/ PPC::Runtime::ASM::addic.(context->r0, context->r29, 0x4);
/*80398D04 00395B04*/ PPC::Runtime::ASM::beq(.L_80398D24);
/*80398D08 00395B08*/ PPC::Runtime::ASM::addic.(context->r0, context->r29, 0x4);
/*80398D0C 00395B0C*/ PPC::Runtime::ASM::beq(.L_80398D24);
/*80398D10 00395B10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80398D14 00395B14*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80398D18 00395B18*/ PPC::Runtime::ASM::beq(.L_80398D24);
/*80398D1C 00395B1C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x4);
/*80398D20 00395B20*/ PPC::Runtime::ASM::bl(fn_8039967C);
RUNTIME_PPC_JUMP_LABEL(.L_80398D24, 0x80398D24) //this is a jump label
/*80398D24 00395B24*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80398D28 00395B28*/ PPC::Runtime::ASM::beq(.L_80398D40);
/*80398D2C 00395B2C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5A18 @ Get_MemoryOffset_HighBit);
/*80398D30 00395B30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80398D34 00395B34*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F5A18 @ Get_MemoryOffset_LowBit);
/*80398D38 00395B38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80398D3C 00395B3C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80398D40, 0x80398D40) //this is a jump label
/*80398D40 00395B40*/ PPC::Runtime::ASM::extsh.(context->r0, context->r30);
/*80398D44 00395B44*/ PPC::Runtime::ASM::ble(.L_80398D50);
/*80398D48 00395B48*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80398D4C 00395B4C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80398D50, 0x80398D50) //this is a jump label
/*80398D50 00395B50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80398D54 00395B54*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80398D58 00395B58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80398D5C 00395B5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80398D60 00395B60*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80398D64 00395B64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80398D68 00395B68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80398D6C 00395B6C*/ PPC::Runtime::ASM::blr();
}