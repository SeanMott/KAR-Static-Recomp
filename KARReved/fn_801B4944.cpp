//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B49B0.hpp"
#include "fn_801B49B0.hpp"
#include "fn_801A9350.hpp"
#include "fn_8005E7D8.hpp"



void fn_801B4944(PPC::Runtime::GCContext* context)
{
/*801B4944 001B1744*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4948 001B1748*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B494C 001B174C*/ PPC::Runtime::ASM::lis(context->r4, fn_801B49B0 @ Get_MemoryOffset_HighBit);
/*801B4950 001B1750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4954 001B1754*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_801B49B0 @ Get_MemoryOffset_LowBit);
/*801B4958 001B1758*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801B495C 001B175C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4960 001B1760*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B4964 001B1764*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ec, context->r3));
/*801B4968 001B1768*/ PPC::Runtime::ASM::bl(fn_801A9350);
/*801B496C 001B176C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/* 801B4970 001B1770  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*801B4974 001B1774*/ PPC::Runtime::ASM::beq(.L_801B499C);
/*801B4978 001B1778*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B497C 001B177C*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*801B4980 001B1780*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B4984 001B1784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B4988 001B1788*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801B498C 001B178C*/ PPC::Runtime::ASM::beq(.L_801B4994);
/*801B4990 001B1790*/ PPC::Runtime::ASM::bl(fn_8005E7D8);
RUNTIME_PPC_JUMP_LABEL(.L_801B4994, 0x801B4994) //this is a jump label
/*801B4994 001B1794*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801B4998 001B1798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B499C, 0x801B499C) //this is a jump label
/*801B499C 001B179C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B49A0 001B17A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B49A4 001B17A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B49A8 001B17A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B49AC 001B17AC*/ PPC::Runtime::ASM::blr();
}