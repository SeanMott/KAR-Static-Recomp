//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801AFBB0.hpp"
#include "fn_801AFBB0.hpp"
#include "fn_801A889C.hpp"
#include "fn_801A8454.hpp"



void fn_801B063C(PPC::Runtime::GCContext* context)
{
/*801B063C 001AD43C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B0640 001AD440*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B0644 001AD444*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0648 001AD448*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B064C 001AD44C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B0650 001AD450*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801B0654 001AD454*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B0658 001AD458*/ PPC::Runtime::ASM::beq(.L_801B069C);
/*801B065C 001AD45C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B0660 001AD460*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801B0664 001AD464*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801B0668 001AD468*/ PPC::Runtime::ASM::lis(context->r3, fn_801AFBB0 @ Get_MemoryOffset_HighBit);
/*801B066C 001AD46C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B0670 001AD470*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801AFBB0 @ Get_MemoryOffset_LowBit);
/*801B0674 001AD474*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B0678 001AD478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x938, context->r31));
/*801B067C 001AD47C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B0680 001AD480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r4));
/*801B0684 001AD484*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B0688 001AD488*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B068C 001AD48C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1bc);
/*801B0690 001AD490*/ PPC::Runtime::ASM::bl(fn_801A889C);
/*801B0694 001AD494*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B0698 001AD498*/ PPC::Runtime::ASM::bl(fn_801A8454);
RUNTIME_PPC_JUMP_LABEL(.L_801B069C, 0x801B069C) //this is a jump label
/*801B069C 001AD49C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B06A0 001AD4A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B06A4 001AD4A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B06A8 001AD4A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B06AC 001AD4AC*/ PPC::Runtime::ASM::blr();
}