//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_WriteSram.hpp"



void fn_WriteSramCallback(PPC::Runtime::GCContext* context)
{
/*803D8DA8 003D5BA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D8DAC 003D5BAC*/ PPC::Runtime::ASM::lis(context->r3, Scb_8056D900 @ Get_MemoryOffset_HighBit);
/*803D8DB0 003D5BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D8DB4 003D5BB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803D8DB8 003D5BB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D8DBC 003D5BBC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, Scb_8056D900 @ Get_MemoryOffset_LowBit);
/*803D8DC0 003D5BC0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D8DC4 003D5BC4*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x40);
/*803D8DC8 003D5BC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*803D8DCC 003D5BCC*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r4);
/*803D8DD0 003D5BD0*/ PPC::Runtime::ASM::subfic(context->r5, context->r4, 0x40);
/*803D8DD4 003D5BD4*/ PPC::Runtime::ASM::bl(fn_WriteSram);
/*803D8DD8 003D5BD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803D8DDC 003D5BDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803D8DE0 003D5BE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803D8DE4 003D5BE4*/ PPC::Runtime::ASM::beq(.L_803D8DF0);
/*803D8DE8 003D5BE8*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*803D8DEC 003D5BEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803D8DF0, 0x803D8DF0) //this is a jump label
/*803D8DF0 003D5BF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D8DF4 003D5BF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D8DF8 003D5BF8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D8DFC 003D5BFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803D8E00 003D5C00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D8E04 003D5C04*/ PPC::Runtime::ASM::blr();
}