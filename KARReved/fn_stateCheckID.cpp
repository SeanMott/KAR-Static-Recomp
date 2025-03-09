//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DVDCompareDiskID.hpp"
#include "memcpy.hpp"
#include "DCInvalidateRange.hpp"
#include "fn_stateCheckID3.hpp"
#include "fn_stateCheckID3.hpp"
#include "fn_stateCheckID3.hpp"
#include "fn_cbForStateCheckID1.hpp"
#include "fn_cbForStateCheckID1.hpp"
#include "DVDLowStopMotor.hpp"
#include "fn_memcmp.hpp"
#include "fn_cbForStateCheckID1.hpp"
#include "fn_cbForStateCheckID1.hpp"
#include "DVDLowStopMotor.hpp"
#include "fn_stateCheckID3_2.hpp"
#include "fn_stateCheckID3_2.hpp"
#include "fn_stateCheckID3_2.hpp"



void fn_stateCheckID(PPC::Runtime::GCContext* context)
{
/*803C6038 003C2E38*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C603C 003C2E3C*/ PPC::Runtime::ASM::lis(context->r3, BB2_8056CC20 @ Get_MemoryOffset_HighBit);
/*803C6040 003C2E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C6044 003C2E44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C6048 003C2E48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C604C 003C2E4C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, BB2_8056CC20 @ Get_MemoryOffset_LowBit);
/*803C6050 003C2E50*/ PPC::Runtime::ASM::lwz(context->r0, CurrCommand_805DDDC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6054 003C2E54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*803C6058 003C2E58*/ PPC::Runtime::ASM::beq(.L_803C6060);
/*803C605C 003C2E5C*/ PPC::Runtime::ASM::b(.L_803C60C8);
RUNTIME_PPC_JUMP_LABEL(.L_803C6060, 0x803C6060) //this is a jump label
/*803C6060 003C2E60*/ PPC::Runtime::ASM::lwz(context->r4, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6064 003C2E64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*803C6068 003C2E68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*803C606C 003C2E6C*/ PPC::Runtime::ASM::bl(fn_DVDCompareDiskID);
/*803C6070 003C2E70*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803C6074 003C2E74*/ PPC::Runtime::ASM::beq(.L_803C60B8);
/*803C6078 003C2E78*/ PPC::Runtime::ASM::lwz(context->r3, IDShouldBe_805DDDAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C607C 003C2E7C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x20);
/*803C6080 003C2E80*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*803C6084 003C2E84*/ PPC::Runtime::ASM::bl(memcpy);
/*803C6088 003C2E88*/ PPC::Runtime::ASM::lwz(context->r4, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C608C 003C2E8C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C6090 003C2E90*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803C6094 003C2E94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803C6098 003C2E98*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*803C609C 003C2E9C*/ PPC::Runtime::ASM::bl(DCInvalidateRange);
/*803C60A0 003C2EA0*/ PPC::Runtime::ASM::lis(context->r4, fn_stateCheckID3 @ Get_MemoryOffset_HighBit);
/*803C60A4 003C2EA4*/ PPC::Runtime::ASM::lwz(context->r3, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C60A8 003C2EA8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_stateCheckID3 @ Get_MemoryOffset_LowBit);
/*803C60AC 003C2EAC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDDEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C60B0 003C2EB0*/ PPC::Runtime::ASM::bl(fn_stateCheckID3);
/*803C60B4 003C2EB4*/ PPC::Runtime::ASM::b(.L_803C6104);
RUNTIME_PPC_JUMP_LABEL(.L_803C60B8, 0x803C60B8) //this is a jump label
/*803C60B8 003C2EB8*/ PPC::Runtime::ASM::lis(context->r3, fn_cbForStateCheckID1 @ Get_MemoryOffset_HighBit);
/*803C60BC 003C2EBC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_cbForStateCheckID1 @ Get_MemoryOffset_LowBit);
/*803C60C0 003C2EC0*/ PPC::Runtime::ASM::bl(DVDLowStopMotor);
/*803C60C4 003C2EC4*/ PPC::Runtime::ASM::b(.L_803C6104);
RUNTIME_PPC_JUMP_LABEL(.L_803C60C8, 0x803C60C8) //this is a jump label
/*803C60C8 003C2EC8*/ PPC::Runtime::ASM::lwz(context->r4, IDShouldBe_805DDDAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C60CC 003C2ECC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*803C60D0 003C2ED0*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*803C60D4 003C2ED4*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*803C60D8 003C2ED8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803C60DC 003C2EDC*/ PPC::Runtime::ASM::beq(.L_803C60F0);
/*803C60E0 003C2EE0*/ PPC::Runtime::ASM::lis(context->r3, fn_cbForStateCheckID1 @ Get_MemoryOffset_HighBit);
/*803C60E4 003C2EE4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_cbForStateCheckID1 @ Get_MemoryOffset_LowBit);
/*803C60E8 003C2EE8*/ PPC::Runtime::ASM::bl(DVDLowStopMotor);
/*803C60EC 003C2EEC*/ PPC::Runtime::ASM::b(.L_803C6104);
RUNTIME_PPC_JUMP_LABEL(.L_803C60F0, 0x803C60F0) //this is a jump label
/*803C60F0 003C2EF0*/ PPC::Runtime::ASM::lis(context->r4, fn_stateCheckID3_2 @ Get_MemoryOffset_HighBit);
/*803C60F4 003C2EF4*/ PPC::Runtime::ASM::lwz(context->r3, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C60F8 003C2EF8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_stateCheckID3_2 @ Get_MemoryOffset_LowBit);
/*803C60FC 003C2EFC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDDEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6100 003C2F00*/ PPC::Runtime::ASM::bl(fn_stateCheckID3_2);
RUNTIME_PPC_JUMP_LABEL(.L_803C6104, 0x803C6104) //this is a jump label
/*803C6104 003C2F04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C6108 003C2F08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C610C 003C2F0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C6110 003C2F10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C6114 003C2F14*/ PPC::Runtime::ASM::blr();
}