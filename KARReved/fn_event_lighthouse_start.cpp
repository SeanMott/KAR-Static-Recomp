//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE73C.hpp"
#include "fn_800F7A64.hpp"
#include "fn_8010D6C0.hpp"
#include "fn_800D4BF4.hpp"
#include "fn_80114010.hpp"



void fn_event_lighthouse_start(PPC::Runtime::GCContext* context)
{
/*80111F00 0010ED00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80111F04 0010ED04*/ PPC::Runtime::ASM::mflr(context->r0);
/*80111F08 0010ED08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80111F0C 0010ED0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80111F10 0010ED10*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80111F14 0010ED14*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80111F18 0010ED18*/ PPC::Runtime::ASM::bl(fn_800EE73C);
/*80111F1C 0010ED1C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80111F20 0010ED20*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80111F24 0010ED24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*80111F28 0010ED28*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80111F2C 0010ED2C*/ PPC::Runtime::ASM::b(.L_80111F48);
RUNTIME_PPC_JUMP_LABEL(.L_80111F30, 0x80111F30) //this is a jump label
/*80111F30 0010ED30*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*80111F34 0010ED34*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x44);
/*80111F38 0010ED38*/ PPC::Runtime::ASM::beq(.L_80111F54);
/*80111F3C 0010ED3C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80111F40 0010ED40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80111F44 0010ED44*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80111F48, 0x80111F48) //this is a jump label
/*80111F48 0010ED48*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80111F4C 0010ED4C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80111F50 0010ED50*/ PPC::Runtime::ASM::bne(.L_80111F30);
RUNTIME_PPC_JUMP_LABEL(.L_80111F54, 0x80111F54) //this is a jump label
/*80111F54 0010ED54*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80111F58 0010ED58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80111F5C 0010ED5C*/ PPC::Runtime::ASM::bne(.L_80111F78);
/*80111F60 0010ED60*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "greventlighthouse." Get_MemoryOffset_HighBit);
/*80111F64 0010ED64*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1044 @ Get_MemoryOffset_HighBit);
/*80111F68 0010ED68*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_Debug_ "greventlighthouse." Get_MemoryOffset_LowBit);
/*80111F6C 0010ED6C*/ PPC::Runtime::ASM::li(context->r4, 0x31);
/*80111F70 0010ED70*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_1044 @ Get_MemoryOffset_LowBit);
/*80111F74 0010ED74*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80111F78, 0x80111F78) //this is a jump label
/*80111F78 0010ED78*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80111F7C 0010ED7C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80111F80 0010ED80*/ PPC::Runtime::ASM::bl(fn_8010D6C0);
/*80111F84 0010ED84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80111F88 0010ED88*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80111F8C 0010ED8C*/ PPC::Runtime::ASM::bl(fn_800D4BF4);
/*80111F90 0010ED90*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80111F94 0010ED94*/ PPC::Runtime::ASM::bl(fn_80114010);
/*80111F98 0010ED98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80111F9C 0010ED9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80111FA0 0010EDA0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80111FA4 0010EDA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80111FA8 0010EDA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80111FAC 0010EDAC*/ PPC::Runtime::ASM::blr();
}