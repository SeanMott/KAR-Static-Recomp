//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E7F2C(PPC::Runtime::GCContext* context)
{
/*802E7F2C 002E4D2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E7F30 002E4D30*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E7F34 002E4D34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E7F38 002E4D38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E7F3C 002E4D3C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802E7F40 002E4D40*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E7F44 002E4D44*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802E7F48 002E4D48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E7F4C 002E4D4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E7F50 002E4D50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r12));
/*802E7F54 002E4D54*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7F58 002E4D58*/ PPC::Runtime::ASM::bctrl();
/* 802E7F5C 002E4D5C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E7F60 002E4D60*/ PPC::Runtime::ASM::bne(.L_802E7FC8);
/*802E7F64 002E4D64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E7F68 002E4D68*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E7F6C 002E4D6C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*802E7F70 002E4D70*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7F74 002E4D74*/ PPC::Runtime::ASM::bctrl();
/*802E7F78 002E4D78*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802E7F7C 002E4D7C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*802E7F80 002E4D80*/ PPC::Runtime::ASM::beq(.L_802E7FC8);
/*802E7F84 002E4D84*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x24);
/*802E7F88 002E4D88*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802E7F8C 002E4D8C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E7F90 002E4D90*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7F94 002E4D94*/ PPC::Runtime::ASM::bctrl();
/*802E7F98 002E4D98*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E7F9C 002E4D9C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802E7FA0 002E4DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E7FA4 002E4DA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r12));
/*802E7FA8 002E4DA8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7FAC 002E4DAC*/ PPC::Runtime::ASM::bctrl();
/* 802E7FB0 002E4DB0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E7FB4 002E4DB4*/ PPC::Runtime::ASM::beq(.L_802E7FC8);
/*802E7FB8 002E4DB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802E7FBC 002E4DBC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E7FC0 002E4DC0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802E7FC4 002E4DC4*/ PPC::Runtime::ASM::b(.L_802E7FCC);
RUNTIME_PPC_JUMP_LABEL(.L_802E7FC8, 0x802E7FC8) //this is a jump label
/*802E7FC8 002E4DC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802E7FCC, 0x802E7FCC) //this is a jump label
/*802E7FCC 002E4DCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E7FD0 002E4DD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E7FD4 002E4DD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E7FD8 002E4DD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E7FDC 002E4DDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E7FE0 002E4DE0*/ PPC::Runtime::ASM::blr();
}