//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AFBB0.hpp"
#include "fn_801AFBB0.hpp"
#include "fn_801A889C.hpp"



void fn_801AFF3C(PPC::Runtime::GCContext* context)
{
/*801AFF3C 001ACD3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AFF40 001ACD40*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AFF44 001ACD44*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801AFF48 001ACD48*/ PPC::Runtime::ASM::lis(context->r5, fn_801AFBB0 @ Get_MemoryOffset_HighBit);
/*801AFF4C 001ACD4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AFF50 001ACD50*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801AFF54 001ACD54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r3));
/*801AFF58 001ACD58*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 7, 24, 24);
/*801AFF5C 001ACD5C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r3));
/*801AFF60 001ACD60*/ PPC::Runtime::ASM::addi(context->r0, context->r5, fn_801AFBB0 @ Get_MemoryOffset_LowBit);
/*801AFF64 001ACD64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x938, context->r3));
/*801AFF68 001ACD68*/ PPC::Runtime::ASM::beq(.L_801AFF7C);
/*801AFF6C 001ACD6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801AFF70 001ACD70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r4));
/*801AFF74 001ACD74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r3));
/*801AFF78 001ACD78*/ PPC::Runtime::ASM::b(.L_801AFF80);
RUNTIME_PPC_JUMP_LABEL(.L_801AFF7C, 0x801AFF7C) //this is a jump label
/*801AFF7C 001ACD7C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801AFF80, 0x801AFF80) //this is a jump label
/*801AFF80 001ACD80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801AFF84 001ACD84*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1bc);
/*801AFF88 001ACD88*/ PPC::Runtime::ASM::bl(fn_801A889C);
/*801AFF8C 001ACD8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AFF90 001ACD90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AFF94 001ACD94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AFF98 001ACD98*/ PPC::Runtime::ASM::blr();
}