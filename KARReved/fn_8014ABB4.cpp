//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_800547E0.hpp"
#include "fn_8014B140.hpp"
#include "fn_8014B44C.hpp"
#include "fn_8014B774.hpp"



void fn_8014ABB4(PPC::Runtime::GCContext* context)
{
/*8014ABB4 001479B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014ABB8 001479B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014ABBC 001479BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014ABC0 001479C0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8014ABC4 001479C4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8014ABC8 001479C8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8014ABCC 001479CC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014ABD0 001479D0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8014ABD4 001479D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014ABD8 001479D8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8014ABDC 001479DC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014ABE0 001479E0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014ABE4 001479E4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8014ABE8 001479E8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8014ABEC 001479EC*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8014ABF0, 0x8014ABF0) //this is a jump label
/*8014ABF0 001479F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8014ABF4 001479F4*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1c);
/*8014ABF8 001479F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8014ABFC 001479FC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8014AC00 00147A00*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8014AC04 00147A04*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*8014AC08 00147A08*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8014AC0C 00147A0C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0xc);
/*8014AC10 00147A10*/ PPC::Runtime::ASM::blt(.L_8014ABF0);
/*8014AC14 00147A14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r26));
/*8014AC18 00147A18*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8014AC1C 00147A1C*/ PPC::Runtime::ASM::beq(.L_8014AC6C);
/*8014AC20 00147A20*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014AC24 00147A24*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*8014AC28 00147A28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8014AC2C 00147A2C*/ PPC::Runtime::ASM::bne(.L_8014AC6C);
/*8014AC30 00147A30*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r26));
/*8014AC34 00147A34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8014AC38 00147A38*/ PPC::Runtime::ASM::bne(.L_8014AC64);
/*8014AC3C 00147A3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014AC40 00147A40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r26));
/*8014AC44 00147A44*/ PPC::Runtime::ASM::bl(fn_8014B140);
/*8014AC48 00147A48*/ PPC::Runtime::ASM::bl(fn_8014B44C);
/*8014AC4C 00147A4C*/ PPC::Runtime::ASM::bl(fn_8014B774);
/*8014AC50 00147A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8014AC54 00147A54*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014AC58 00147A58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014AC5C 00147A5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8014AC60 00147A60*/ PPC::Runtime::ASM::b(.L_8014AC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8014AC64, 0x8014AC64) //this is a jump label
/*8014AC64 00147A64*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014AC68 00147A68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8014AC6C, 0x8014AC6C) //this is a jump label
/*8014AC6C 00147A6C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8014AC70 00147A70*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8014AC74 00147A74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014AC78 00147A78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014AC7C 00147A7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014AC80 00147A80*/ PPC::Runtime::ASM::blr();
}