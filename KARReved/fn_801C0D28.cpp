//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C0B08.hpp"
#include "fn_801C0B50.hpp"
#include "fn_801C0AB4.hpp"
#include "fn_801C0B08.hpp"
#include "fn_801C0B50.hpp"
#include "fn_801C0CD0.hpp"
#include "fn_801C0AB4.hpp"
#include "fn_801C0CD0.hpp"
#include "fn_801C0C78.hpp"
#include "fn_801C0C78.hpp"
#include "fn_801C0A50.hpp"



void fn_801C0D28(PPC::Runtime::GCContext* context)
{
/*801C0D28 001BDB28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0D2C 001BDB2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0D30 001BDB30*/ PPC::Runtime::ASM::lis(context->r7, fn_801C0B08 @ Get_MemoryOffset_HighBit);
/*801C0D34 001BDB34*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*801C0D38 001BDB38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0D3C 001BDB3C*/ PPC::Runtime::ASM::lis(context->r6, fn_801C0B50 @ Get_MemoryOffset_HighBit);
/*801C0D40 001BDB40*/ PPC::Runtime::ASM::lis(context->r5, fn_801C0AB4 @ Get_MemoryOffset_HighBit);
/*801C0D44 001BDB44*/ PPC::Runtime::ASM::addi(context->r7, context->r7, fn_801C0B08 @ Get_MemoryOffset_LowBit);
/*801C0D48 001BDB48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r3));
/*801C0D4C 001BDB4C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r8, 7, 24, 24);
/*801C0D50 001BDB50*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801C0D54 001BDB54*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r3));
/*801C0D58 001BDB58*/ PPC::Runtime::ASM::addi(context->r0, context->r6, fn_801C0B50 @ Get_MemoryOffset_LowBit);
/*801C0D5C 001BDB5C*/ PPC::Runtime::ASM::lis(context->r6, fn_801C0CD0 @ Get_MemoryOffset_HighBit);
/*801C0D60 001BDB60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x914, context->r3));
/*801C0D64 001BDB64*/ PPC::Runtime::ASM::addi(context->r0, context->r5, fn_801C0AB4 @ Get_MemoryOffset_LowBit);
/*801C0D68 001BDB68*/ PPC::Runtime::ASM::addi(context->r6, context->r6, fn_801C0CD0 @ Get_MemoryOffset_LowBit);
/*801C0D6C 001BDB6C*/ PPC::Runtime::ASM::lis(context->r5, fn_801C0C78 @ Get_MemoryOffset_HighBit);
/*801C0D70 001BDB70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*801C0D74 001BDB74*/ PPC::Runtime::ASM::addi(context->r0, context->r5, fn_801C0C78 @ Get_MemoryOffset_LowBit);
/*801C0D78 001BDB78*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x910, context->r3));
/*801C0D7C 001BDB7C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r3));
/*801C0D80 001BDB80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r3));
/*801C0D84 001BDB84*/ PPC::Runtime::ASM::beq(.L_801C0D98);
/*801C0D88 001BDB88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801C0D8C 001BDB8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801C0D90 001BDB90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r3));
/*801C0D94 001BDB94*/ PPC::Runtime::ASM::b(.L_801C0D9C);
RUNTIME_PPC_JUMP_LABEL(.L_801C0D98, 0x801C0D98) //this is a jump label
/*801C0D98 001BDB98*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801C0D9C, 0x801C0D9C) //this is a jump label
/*801C0D9C 001BDB9C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801C0DA0 001BDBA0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*801C0DA4 001BDBA4*/ PPC::Runtime::ASM::bl(fn_801C0A50);
/*801C0DA8 001BDBA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0DAC 001BDBAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0DB0 001BDBB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0DB4 001BDBB4*/ PPC::Runtime::ASM::blr();
}