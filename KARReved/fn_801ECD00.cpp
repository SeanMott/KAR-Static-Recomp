//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D93A0.hpp"
#include "fn_801EB898.hpp"



void fn_801ECD00(PPC::Runtime::GCContext* context)
{
/*801ECD00 001E9B00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801ECD04 001E9B04*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ECD08 001E9B08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801ECD0C 001E9B0C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801ECD10 001E9B10*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801ECD14 001E9B14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ECD18 001E9B18*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801ECD1C 001E9B1C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801ECD20 001E9B20*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r3));
/*801ECD24 001E9B24*/ PPC::Runtime::ASM::bl(fn_801D93A0);
/*801ECD28 001E9B28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801ECD2C 001E9B2C*/ PPC::Runtime::ASM::beq(.L_801ECD4C);
/*801ECD30 001E9B30*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f31);
/*801ECD34 001E9B34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x654, context->r31));
/*801ECD38 001E9B38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*801ECD3C 001E9B3C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801ECD40 001E9B40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x874, context->r31));
/*801ECD44 001E9B44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ECD48 001E9B48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x878, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801ECD4C, 0x801ECD4C) //this is a jump label
/*801ECD4C 001E9B4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801ECD50 001E9B50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ECD54 001E9B54*/ PPC::Runtime::ASM::bl(fn_801EB898);
/*801ECD58 001E9B58*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801ECD5C 001E9B5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801ECD60 001E9B60*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801ECD64 001E9B64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ECD68 001E9B68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ECD6C 001E9B6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801ECD70 001E9B70*/ PPC::Runtime::ASM::blr();
}