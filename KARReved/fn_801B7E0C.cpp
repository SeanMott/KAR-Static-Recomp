//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7B00.hpp"
#include "fn_80193C44.hpp"
#include "fn_801C812C.hpp"
#include "fn_AS_StarSpin.hpp"



void fn_801B7E0C(PPC::Runtime::GCContext* context)
{
/*801B7E0C 001B4C0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801B7E10 001B4C10*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B7E14 001B4C14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B7E18 001B4C18*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801B7E1C 001B4C1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7E20 001B4C20*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B7E24 001B4C24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801B7E28 001B4C28*/ PPC::Runtime::ASM::bl(fn_801C7B00);
/*801B7E2C 001B4C2C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B7E30 001B4C30*/ PPC::Runtime::ASM::beq(.L_801B7E64);
/*801B7E34 001B4C34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B7E38 001B4C38*/ PPC::Runtime::ASM::bl(fn_80193C44);
/*801B7E3C 001B4C3C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801B7E40 001B4C40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801B7E44 001B4C44*/ PPC::Runtime::ASM::bl(fn_801C812C);
/*801B7E48 001B4C48*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801B7E4C 001B4C4C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801B7E50 001B4C50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B7E54 001B4C54*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801B7E58 001B4C58*/ PPC::Runtime::ASM::bl(fn_AS_StarSpin);
/*801B7E5C 001B4C5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B7E60 001B4C60*/ PPC::Runtime::ASM::b(.L_801B7E68);
RUNTIME_PPC_JUMP_LABEL(.L_801B7E64, 0x801B7E64) //this is a jump label
/*801B7E64 001B4C64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801B7E68, 0x801B7E68) //this is a jump label
/*801B7E68 001B4C68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B7E6C 001B4C6C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801B7E70 001B4C70*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7E74 001B4C74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B7E78 001B4C78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801B7E7C 001B4C7C*/ PPC::Runtime::ASM::blr();
}