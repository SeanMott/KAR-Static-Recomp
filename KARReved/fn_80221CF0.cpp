//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80245B4C.hpp"
#include "fn_80247E84.hpp"



void fn_80221CF0(PPC::Runtime::GCContext* context)
{
/*80221CF0 0021EAF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80221CF4 0021EAF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80221CF8 0021EAF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221CFC 0021EAFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80221D00 0021EB00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80221D04 0021EB04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80221D08 0021EB08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80221D0C 0021EB0C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80221D10 0021EB10*/ PPC::Runtime::ASM::beq(.L_80221D30);
/*80221D14 0021EB14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80221D18 0021EB18*/ PPC::Runtime::ASM::bl(fn_80245B4C);
/*80221D1C 0021EB1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
/*80221D20 0021EB20*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80221D24 0021EB24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
/*80221D28 0021EB28*/ PPC::Runtime::ASM::bl(fn_80247E84);
/*80221D2C 0021EB2C*/ PPC::Runtime::ASM::b(.L_80221D38);
RUNTIME_PPC_JUMP_LABEL(.L_80221D30, 0x80221D30) //this is a jump label
/*80221D30 0021EB30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80221D34 0021EB34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80221D38, 0x80221D38) //this is a jump label
/*80221D38 0021EB38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221D3C 0021EB3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80221D40 0021EB40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80221D44 0021EB44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80221D48 0021EB48*/ PPC::Runtime::ASM::blr();
}