//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80437FCC.hpp"



void fn_80437EC0(PPC::Runtime::GCContext* context)
{
/*80437EC0 00434CC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80437EC4 00434CC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80437EC8 00434CC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80437ECC 00434CCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80437ED0 00434CD0  7C 9F 23 79 */ mr. context->r31 , context->r4
/*80437ED4 00434CD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80437ED8 00434CD8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80437EDC 00434CDC*/ PPC::Runtime::ASM::beq(.L_80437EE8);
/*80437EE0 00434CE0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80437EE4 00434CE4*/ PPC::Runtime::ASM::bne(.L_80437EF0);
RUNTIME_PPC_JUMP_LABEL(.L_80437EE8, 0x80437EE8) //this is a jump label
/*80437EE8 00434CE8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80437EEC 00434CEC*/ PPC::Runtime::ASM::b(.L_80437F14);
RUNTIME_PPC_JUMP_LABEL(.L_80437EF0, 0x80437EF0) //this is a jump label
/*80437EF0 00434CF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80437EF4 00434CF4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80437EF8 00434CF8*/ PPC::Runtime::ASM::beq(.L_80437F00);
/*80437EFC 00434CFC*/ PPC::Runtime::ASM::bl(fn_80437FCC);
RUNTIME_PPC_JUMP_LABEL(.L_80437F00, 0x80437F00) //this is a jump label
/*80437F00 00434D00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80437F04 00434D04*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e, context->r31));
/*80437F08 00434D08*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80437F0C 00434D0C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e, context->r31));
/*80437F10 00434D10*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 16);
RUNTIME_PPC_JUMP_LABEL(.L_80437F14, 0x80437F14) //this is a jump label
/*80437F14 00434D14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80437F18 00434D18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80437F1C 00434D1C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80437F20 00434D20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80437F24 00434D24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80437F28 00434D28*/ PPC::Runtime::ASM::blr();
}