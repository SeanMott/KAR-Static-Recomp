//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055DA0.hpp"



void fn_80055130(PPC::Runtime::GCContext* context)
{
/*80055130 00051F30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80055134 00051F34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80055138 00051F38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005513C 00051F3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80055140 00051F40*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80055144 00051F44*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80055148 00051F48*/ PPC::Runtime::ASM::bl(fn_80055DA0);
/*8005514C 00051F4C*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*80055150 00051F50*/ PPC::Runtime::ASM::lis(context->r4, 0x7000);
/*80055154 00051F54*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80055158 00051F58*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8005515C 00051F5C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?);
/*80055160 00051F60*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80055164 00051F64*/ PPC::Runtime::ASM::bne(.L_80055170);
/*80055168 00051F68*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8005516C 00051F6C*/ PPC::Runtime::ASM::b(.L_80055174);
RUNTIME_PPC_JUMP_LABEL(.L_80055170, 0x80055170) //this is a jump label
/*80055170 00051F70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80055174, 0x80055174) //this is a jump label
/*80055174 00051F74*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80055178 00051F78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8005517C 00051F7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80055180 00051F80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80055184 00051F84*/ PPC::Runtime::ASM::beq(.L_8005518C);
/*80055188 00051F88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8005518C, 0x8005518C) //this is a jump label
/*8005518C 00051F8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80055190 00051F90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80055194 00051F94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80055198 00051F98*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8005519C 00051F9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800551A0 00051FA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800551A4 00051FA4*/ PPC::Runtime::ASM::blr();
}