//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GetTopGroundSpeedAndModifyIt.hpp"
#include "fn_801D5CA0.hpp"



void fn_801CB2BC(PPC::Runtime::GCContext* context)
{
/*801CB2BC 001C80BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801CB2C0 001C80C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CB2C4 001C80C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CB2C8 001C80C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CB2CC 001C80CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CB2D0 001C80D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CB2D4 001C80D4*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801CB2D8 001C80D8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CB2DC 001C80DC*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*801CB2E0 001C80E0*/ PPC::Runtime::ASM::bl(fn_GetTopGroundSpeedAndModifyIt);
/*801CB2E4 001C80E4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x18);
/*801CB2E8 001C80E8*/ PPC::Runtime::ASM::beq(.L_801CB354);
/*801CB2EC 001C80EC*/ PPC::Runtime::ASM::bge(.L_801CB308);
/*801CB2F0 001C80F0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x16);
/*801CB2F4 001C80F4*/ PPC::Runtime::ASM::beq(.L_801CB32C);
/*801CB2F8 001C80F8*/ PPC::Runtime::ASM::bge(.L_801CB340);
/*801CB2FC 001C80FC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x15);
/*801CB300 001C8100*/ PPC::Runtime::ASM::bge(.L_801CB318);
/*801CB304 001C8104*/ PPC::Runtime::ASM::b(.L_801CB38C);
RUNTIME_PPC_JUMP_LABEL(.L_801CB308, 0x801CB308) //this is a jump label
/*801CB308 001C8108*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1a);
/*801CB30C 001C810C*/ PPC::Runtime::ASM::beq(.L_801CB37C);
/*801CB310 001C8110*/ PPC::Runtime::ASM::bge(.L_801CB38C);
/*801CB314 001C8114*/ PPC::Runtime::ASM::b(.L_801CB368);
RUNTIME_PPC_JUMP_LABEL(.L_801CB318, 0x801CB318) //this is a jump label
/*801CB318 001C8118*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801CB31C 001C811C*/ PPC::Runtime::ASM::li(context->r4, 0x2a);
/*801CB320 001C8120*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*801CB324 001C8124*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
/*801CB328 001C8128*/ PPC::Runtime::ASM::b(.L_801CB38C);
RUNTIME_PPC_JUMP_LABEL(.L_801CB32C, 0x801CB32C) //this is a jump label
/*801CB32C 001C812C*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801CB330 001C8130*/ PPC::Runtime::ASM::li(context->r4, 0x2b);
/*801CB334 001C8134*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*801CB338 001C8138*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
/*801CB33C 001C813C*/ PPC::Runtime::ASM::b(.L_801CB38C);
RUNTIME_PPC_JUMP_LABEL(.L_801CB340, 0x801CB340) //this is a jump label
/*801CB340 001C8140*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801CB344 001C8144*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*801CB348 001C8148*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*801CB34C 001C814C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
/*801CB350 001C8150*/ PPC::Runtime::ASM::b(.L_801CB38C);
RUNTIME_PPC_JUMP_LABEL(.L_801CB354, 0x801CB354) //this is a jump label
/*801CB354 001C8154*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801CB358 001C8158*/ PPC::Runtime::ASM::li(context->r4, 0x29);
/*801CB35C 001C815C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*801CB360 001C8160*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
/*801CB364 001C8164*/ PPC::Runtime::ASM::b(.L_801CB38C);
RUNTIME_PPC_JUMP_LABEL(.L_801CB368, 0x801CB368) //this is a jump label
/*801CB368 001C8168*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801CB36C 001C816C*/ PPC::Runtime::ASM::li(context->r4, 0x2c);
/*801CB370 001C8170*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*801CB374 001C8174*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
/*801CB378 001C8178*/ PPC::Runtime::ASM::b(.L_801CB38C);
RUNTIME_PPC_JUMP_LABEL(.L_801CB37C, 0x801CB37C) //this is a jump label
/*801CB37C 001C817C*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801CB380 001C8180*/ PPC::Runtime::ASM::li(context->r4, 0x2d);
/*801CB384 001C8184*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*801CB388 001C8188*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801CB38C, 0x801CB38C) //this is a jump label
/*801CB38C 001C818C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801CB390 001C8190*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_801CB394, 0x801CB394) //this is a jump label
/*801CB394 001C8194*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r29));
/*801CB398 001C8198*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801CB39C 001C819C*/ PPC::Runtime::ASM::beq(.L_801CB3AC);
/*801CB3A0 001C81A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CB3A4 001C81A4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801CB3A8 001C81A8*/ PPC::Runtime::ASM::bl(fn_801D5CA0);
RUNTIME_PPC_JUMP_LABEL(.L_801CB3AC, 0x801CB3AC) //this is a jump label
/*801CB3AC 001C81AC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801CB3B0 001C81B0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*801CB3B4 001C81B4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*801CB3B8 001C81B8*/ PPC::Runtime::ASM::blt(.L_801CB394);
/*801CB3BC 001C81BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CB3C0 001C81C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CB3C4 001C81C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CB3C8 001C81C8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CB3CC 001C81CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CB3D0 001C81D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801CB3D4 001C81D4*/ PPC::Runtime::ASM::blr();
}