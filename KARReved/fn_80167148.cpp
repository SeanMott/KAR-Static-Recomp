//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80164CE0.hpp"



void fn_80167148(PPC::Runtime::GCContext* context)
{
/*80167148 00163F48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016714C 00163F4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80167150 00163F50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80167154 00163F54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80167158 00163F58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016715C 00163F5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80167160 00163F60*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80167164 00163F64*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80167168 00163F68*/ PPC::Runtime::ASM::bl(fn_80164CE0);
/*8016716C 00163F6C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80167170 00163F70*/ PPC::Runtime::ASM::bne(.L_80167184);
/*80167174 00163F74*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AE8 @ Get_MemoryOffset_SDA21);
/*80167178 00163F78*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8016717C 00163F7C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AF0 @ Get_MemoryOffset_SDA21);
/*80167180 00163F80*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80167184, 0x80167184) //this is a jump label
/*80167184 00163F84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80167188 00163F88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016718C 00163F8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80167190 00163F90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80167194 00163F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80167198 00163F98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8016719C 00163F9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801671A0 00163FA0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801671A4 00163FA4*/ PPC::Runtime::ASM::bne(.L_801671F0);
/*801671A8 00163FA8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801671AC 00163FAC*/ PPC::Runtime::ASM::beq(.L_801671F0);
/*801671B0 00163FB0*/ PPC::Runtime::ASM::bne(.L_801671C4);
/*801671B4 00163FB4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AE8 @ Get_MemoryOffset_SDA21);
/*801671B8 00163FB8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801671BC 00163FBC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AF0 @ Get_MemoryOffset_SDA21);
/*801671C0 00163FC0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801671C4, 0x801671C4) //this is a jump label
/*801671C4 00163FC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801671C8 00163FC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801671CC 00163FCC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801671D0 00163FD0*/ PPC::Runtime::ASM::bne(.L_801671E0);
/*801671D4 00163FD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801671D8 00163FD8*/ PPC::Runtime::ASM::beq(.L_801671E0);
/*801671DC 00163FDC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801671E0, 0x801671E0) //this is a jump label
/*801671E0 00163FE0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801671E4 00163FE4*/ PPC::Runtime::ASM::bne(.L_801671F0);
/*801671E8 00163FE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801671EC 00163FEC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801671F0, 0x801671F0) //this is a jump label
/*801671F0 00163FF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801671F4 00163FF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801671F8 00163FF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801671FC 00163FFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80167200 00164000*/ PPC::Runtime::ASM::blr();
}