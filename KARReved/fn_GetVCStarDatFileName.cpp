//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetStageKind_44vc?.hpp"
#include "fn_801C6E3C.hpp"
#include "fn_801C6E3C.hpp"
#include "fn_stGetStageKind_48?.hpp"
#include "fn_801C6E3C.hpp"
#include "fn_801C6E3C.hpp"



void fn_GetVCStarDatFileName(PPC::Runtime::GCContext* context)
{
/*801C8CEC 001C5AEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801C8CF0 001C5AF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C8CF4 001C5AF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C8CF8 001C5AF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C8CFC 001C5AFC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C8D00 001C5B00*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8D04 001C5B04*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801C8D08 001C5B08*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801C8D0C 001C5B0C*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_44vc?);
/*801C8D10 001C5B10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C8D14 001C5B14*/ PPC::Runtime::ASM::beq(.L_801C8D90);
/*801C8D18 001C5B18*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B07F0 @ Get_MemoryOffset_HighBit);
/*801C8D1C 001C5B1C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801C8D20 001C5B20*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804B07F0 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_801C8D24, 0x801C8D24) //this is a jump label
/*801C8D24 001C5B24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801C8D28 001C5B28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801C8D2C 001C5B2C*/ PPC::Runtime::ASM::beq(.L_801C8D7C);
/*801C8D30 001C5B30*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x13);
/*801C8D34 001C5B34*/ PPC::Runtime::ASM::bge(.L_801C8D44);
/*801C8D38 001C5B38*/ PPC::Runtime::ASM::clrlwi(context->r28, context->r30, 24);
/*801C8D3C 001C5B3C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801C8D40 001C5B40*/ PPC::Runtime::ASM::b(.L_801C8D50);
RUNTIME_PPC_JUMP_LABEL(.L_801C8D44, 0x801C8D44) //this is a jump label
/*801C8D44 001C5B44*/ PPC::Runtime::ASM::subi(context->r0, context->r30, 0x13);
/*801C8D48 001C5B48*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*801C8D4C 001C5B4C*/ PPC::Runtime::ASM::clrlwi(context->r28, context->r0, 24);
RUNTIME_PPC_JUMP_LABEL(.L_801C8D50, 0x801C8D50) //this is a jump label
/*801C8D50 001C5B50*/ PPC::Runtime::ASM::lis(context->r3, VCWheelShit @ Get_MemoryOffset_HighBit);
/*801C8D54 001C5B54*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 3);
/*801C8D58 001C5B58*/ PPC::Runtime::ASM::addi(context->r3, context->r3, VCWheelShit @ Get_MemoryOffset_LowBit);
/*801C8D5C 001C5B5C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801C8D60 001C5B60*/ PPC::Runtime::ASM::bl(fn_801C6E3C);
/*801C8D64 001C5B64*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801C8D68 001C5B68*/ PPC::Runtime::ASM::li(context->r3, StarFileNamesAndHSDNames_ArrayBundle @ Get_MemoryOffset_SDA21);
/*801C8D6C 001C5B6C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801C8D70 001C5B70*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r28, 24, 3);
/*801C8D74 001C5B74*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801C8D78 001C5B78*/ PPC::Runtime::ASM::bl(fn_801C6E3C);
RUNTIME_PPC_JUMP_LABEL(.L_801C8D7C, 0x801C8D7C) //this is a jump label
/*801C8D7C 001C5B7C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801C8D80 001C5B80*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*801C8D84 001C5B84*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1a);
/*801C8D88 001C5B88*/ PPC::Runtime::ASM::blt(.L_801C8D24);
/*801C8D8C 001C5B8C*/ PPC::Runtime::ASM::b(.L_801C8DC0);
RUNTIME_PPC_JUMP_LABEL(.L_801C8D90, 0x801C8D90) //this is a jump label
/*801C8D90 001C5B90*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801C8D94 001C5B94*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_48?);
/*801C8D98 001C5B98*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C8D9C 001C5B9C*/ PPC::Runtime::ASM::beq(.L_801C8DC0);
/*801C8DA0 001C5BA0*/ PPC::Runtime::ASM::lis(context->r3, VCWheelShit @ Get_MemoryOffset_HighBit);
/*801C8DA4 001C5BA4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, VCWheelShit @ Get_MemoryOffset_LowBit);
/*801C8DA8 001C5BA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801C8DAC 001C5BAC*/ PPC::Runtime::ASM::bl(fn_801C6E3C);
/*801C8DB0 001C5BB0*/ PPC::Runtime::ASM::li(context->r3, StarFileNamesAndHSDNames_ArrayBundle @ Get_MemoryOffset_SDA21);
/*801C8DB4 001C5BB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801C8DB8 001C5BB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*801C8DBC 001C5BBC*/ PPC::Runtime::ASM::bl(fn_801C6E3C);
RUNTIME_PPC_JUMP_LABEL(.L_801C8DC0, 0x801C8DC0) //this is a jump label
/*801C8DC0 001C5BC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C8DC4 001C5BC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C8DC8 001C5BC8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C8DCC 001C5BCC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8DD0 001C5BD0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801C8DD4 001C5BD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C8DD8 001C5BD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801C8DDC 001C5BDC*/ PPC::Runtime::ASM::blr();
}