//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F238.hpp"
#include "fn_801BDD74.hpp"



void fn_801C0B08(PPC::Runtime::GCContext* context)
{
/*801C0B08 001BD908*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0B0C 001BD90C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0B10 001BD910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0B14 001BD914*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C0B18 001BD918*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C0B1C 001BD91C*/ PPC::Runtime::ASM::bl(fn_8019F238);
/*801C0B20 001BD920*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C0B24 001BD924*/ PPC::Runtime::ASM::beq(.L_801C0B3C);
/*801C0B28 001BD928*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r31));
/* 801C0B2C 001BD92C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801C0B30 001BD930*/ PPC::Runtime::ASM::beq(.L_801C0B3C);
/*801C0B34 001BD934*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0B38 001BD938*/ PPC::Runtime::ASM::bl(fn_801BDD74);
RUNTIME_PPC_JUMP_LABEL(.L_801C0B3C, 0x801C0B3C) //this is a jump label
/*801C0B3C 001BD93C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0B40 001BD940*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C0B44 001BD944*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0B48 001BD948*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0B4C 001BD94C*/ PPC::Runtime::ASM::blr();
}