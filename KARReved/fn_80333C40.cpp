//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_AIPlay___dt_TakeNoParam.hpp"
#include "fn_AIPlay___dt_TakeNoParam.hpp"



void fn_80333C40(PPC::Runtime::GCContext* context)
{
/*80333C40 00330A40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80333C44 00330A44*/ PPC::Runtime::ASM::mflr(context->r0);
/*80333C48 00330A48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80333C4C 00330A4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80333C50 00330A50*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80333C54 00330A54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80333C58 00330A58  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80333C5C 00330A5C*/ PPC::Runtime::ASM::beq(.L_80333D04);
/*80333C60 00330A60*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E49E8 @ Get_MemoryOffset_HighBit);
/*80333C64 00330A64*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x74);
/*80333C68 00330A68*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804E49E8 @ Get_MemoryOffset_LowBit);
/*80333C6C 00330A6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80333C70 00330A70*/ PPC::Runtime::ASM::beq(.L_80333CBC);
/*80333C74 00330A74*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*80333C78 00330A78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*80333C7C 00330A7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*80333C80 00330A80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r30));
/*80333C84 00330A84*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*80333C88 00330A88*/ PPC::Runtime::ASM::beq(.L_80333C94);
/*80333C8C 00330A8C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333C90 00330A90*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_80333C94, 0x80333C94) //this is a jump label
/*80333C94 00330A94*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x74);
/*80333C98 00330A98*/ PPC::Runtime::ASM::beq(.L_80333CBC);
/*80333C9C 00330A9C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*80333CA0 00330AA0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x74);
/*80333CA4 00330AA4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*80333CA8 00330AA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*80333CAC 00330AAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*80333CB0 00330AB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80333CB4 00330AB4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80333CB8 00330AB8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80333CBC, 0x80333CBC) //this is a jump label
/*80333CBC 00330ABC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c);
/*80333CC0 00330AC0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80333CC4 00330AC4*/ PPC::Runtime::ASM::bl(fn_80384600);
/*80333CC8 00330AC8*/ PPC::Runtime::ASM::lis(context->r4, fn_AIPlay___dt_TakeNoParam @ Get_MemoryOffset_HighBit);
/*80333CCC 00330ACC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x18);
/*80333CD0 00330AD0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_AIPlay___dt_TakeNoParam @ Get_MemoryOffset_LowBit);
/*80333CD4 00330AD4*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*80333CD8 00330AD8*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80333CDC 00330ADC*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*80333CE0 00330AE0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80333CE4 00330AE4*/ PPC::Runtime::ASM::beq(.L_80333CF4);
/*80333CE8 00330AE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E0EB8 @ Get_MemoryOffset_HighBit);
/*80333CEC 00330AEC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804E0EB8 @ Get_MemoryOffset_LowBit);
/*80333CF0 00330AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80333CF4, 0x80333CF4) //this is a jump label
/*80333CF4 00330AF4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80333CF8 00330AF8*/ PPC::Runtime::ASM::ble(.L_80333D04);
/*80333CFC 00330AFC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80333D00 00330B00*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80333D04, 0x80333D04) //this is a jump label
/*80333D04 00330B04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80333D08 00330B08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80333D0C 00330B0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80333D10 00330B10*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80333D14 00330B14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80333D18 00330B18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80333D1C 00330B1C*/ PPC::Runtime::ASM::blr();
}