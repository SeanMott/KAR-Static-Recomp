//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191C84.hpp"
#include "fn_8008C718.hpp"
#include "fn_8008C63C.hpp"



void fn_8007FE04(PPC::Runtime::GCContext* context)
{
/*8007FE04 0007CC04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007FE08 0007CC08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007FE0C 0007CC0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007FE10 0007CC10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007FE14 0007CC14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8007FE18 0007CC18*/ PPC::Runtime::ASM::bl(fn_80191C84);
/*8007FE1C 0007CC1C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007FE20 0007CC20*/ PPC::Runtime::ASM::beq(.L_8007FE30);
/*8007FE24 0007CC24*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*8007FE28 0007CC28*/ PPC::Runtime::ASM::bl(fn_8008C718);
/*8007FE2C 0007CC2C*/ PPC::Runtime::ASM::b(.L_8007FE38);
RUNTIME_PPC_JUMP_LABEL(.L_8007FE30, 0x8007FE30) //this is a jump label
/*8007FE30 0007CC30*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*8007FE34 0007CC34*/ PPC::Runtime::ASM::bl(fn_8008C63C);
RUNTIME_PPC_JUMP_LABEL(.L_8007FE38, 0x8007FE38) //this is a jump label
/*8007FE38 0007CC38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007FE3C 0007CC3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007FE40 0007CC40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007FE44 0007CC44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007FE48 0007CC48*/ PPC::Runtime::ASM::blr();
}