//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80172CA8.hpp"



void fn_80177178(PPC::Runtime::GCContext* context)
{
/*80177178 00173F78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8017717C 00173F7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80177180 00173F80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80177184 00173F84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80177188 00173F88*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017718C 00173F8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80177190 00173F90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80177194 00173F94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80177198 00173F98*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8017719C 00173F9C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801771A0 00173FA0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801771A4 00173FA4*/ PPC::Runtime::ASM::bl(fn_80172CA8);
/*801771A8 00173FA8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801771AC 00173FAC*/ PPC::Runtime::ASM::bne(.L_801771C0);
/*801771B0 00173FB0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D18 @ Get_MemoryOffset_SDA21);
/*801771B4 00173FB4*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*801771B8 00173FB8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D20 @ Get_MemoryOffset_SDA21);
/*801771BC 00173FBC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801771C0, 0x801771C0) //this is a jump label
/*801771C0 00173FC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801771C4 00173FC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801771C8 00173FC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*801771CC 00173FCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*801771D0 00173FD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801771D4 00173FD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*801771D8 00173FD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801771DC 00173FDC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801771E0 00173FE0*/ PPC::Runtime::ASM::bne(.L_8017722C);
/*801771E4 00173FE4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801771E8 00173FE8*/ PPC::Runtime::ASM::beq(.L_8017722C);
/*801771EC 00173FEC*/ PPC::Runtime::ASM::bne(.L_80177200);
/*801771F0 00173FF0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D18 @ Get_MemoryOffset_SDA21);
/*801771F4 00173FF4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801771F8 00173FF8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D20 @ Get_MemoryOffset_SDA21);
/*801771FC 00173FFC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80177200, 0x80177200) //this is a jump label
/*80177200 00174000*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80177204 00174004*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80177208 00174008*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8017720C 0017400C*/ PPC::Runtime::ASM::bne(.L_8017721C);
/*80177210 00174010*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80177214 00174014*/ PPC::Runtime::ASM::beq(.L_8017721C);
/*80177218 00174018*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8017721C, 0x8017721C) //this is a jump label
/*8017721C 0017401C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80177220 00174020*/ PPC::Runtime::ASM::bne(.L_8017722C);
/*80177224 00174024*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80177228 00174028*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8017722C, 0x8017722C) //this is a jump label
/*8017722C 0017402C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80177230 00174030*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80177234 00174034*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80177238 00174038*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017723C 0017403C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80177240 00174040*/ PPC::Runtime::ASM::blr();
}