//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E1D64.hpp"



void fn_801E1A0C(PPC::Runtime::GCContext* context)
{
/*801E1A0C 001DE80C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E1A10 001DE810*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E1A14 001DE814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1A18 001DE818*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/* 801E1A1C 001DE81C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801E1A20 001DE820*/ PPC::Runtime::ASM::beq(.L_801E1A2C);
/*801E1A24 001DE824*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r3));
/*801E1A28 001DE828*/ PPC::Runtime::ASM::bl(fn_801E1D64);
RUNTIME_PPC_JUMP_LABEL(.L_801E1A2C, 0x801E1A2C) //this is a jump label
/*801E1A2C 001DE82C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1A30 001DE830*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E1A34 001DE834*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E1A38 001DE838*/ PPC::Runtime::ASM::blr();
}