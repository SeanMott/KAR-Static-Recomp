//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7930.hpp"



void fn_800F9A24(PPC::Runtime::GCContext* context)
{
/*800F9A24 000F6824*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F9A28 000F6828*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F9A2C 000F682C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9A30 000F6830*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F9A34 000F6834*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800F9A38 000F6838*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800F9A3C 000F683C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F9A40 000F6840*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F9A44 000F6844*/ PPC::Runtime::ASM::beq(.L_800F9A50);
/*800F9A48 000F6848*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F9A4C 000F684C*/ PPC::Runtime::ASM::bl(fn_800F7930);
RUNTIME_PPC_JUMP_LABEL(.L_800F9A50, 0x800F9A50) //this is a jump label
/*800F9A50 000F6850*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9A54 000F6854*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F9A58 000F6858*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F9A5C 000F685C*/ PPC::Runtime::ASM::blr();
}