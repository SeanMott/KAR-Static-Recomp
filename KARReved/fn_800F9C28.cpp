//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F4B20.hpp"
#include "fn_800F91C8.hpp"
#include "fn_800F9C70.hpp"



void fn_800F9C28(PPC::Runtime::GCContext* context)
{
/*800F9C28 000F6A28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F9C2C 000F6A2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F9C30 000F6A30*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800F9C34 000F6A34*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800F9C38 000F6A38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9C3C 000F6A3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F9C40 000F6A40*/ PPC::Runtime::ASM::bl(fn_800F4B20);
/*800F9C44 000F6A44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800F9C48 000F6A48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F9C4C 000F6A4C*/ PPC::Runtime::ASM::bl(fn_800F91C8);
/*800F9C50 000F6A50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F9C54 000F6A54*/ PPC::Runtime::ASM::bl(fn_800F9C70);
/*800F9C58 000F6A58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9C5C 000F6A5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F9C60 000F6A60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F9C64 000F6A64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F9C68 000F6A68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F9C6C 000F6A6C*/ PPC::Runtime::ASM::blr();
}