//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8047F138.hpp"
#include "fn_8047F138.hpp"
#include "fn_80481678.hpp"
#include "fn_80481854.hpp"
#include "fn_IPIn.hpp"
#include "fn_8047DE88.hpp"



void fn_8047F2D8(PPC::Runtime::GCContext* context)
{
/*8047F2D8 0047C0D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047F2DC 0047C0DC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x2);
/*8047F2E0 0047C0E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047F2E4 0047C0E4*/ PPC::Runtime::ASM::addi(context->r8, context->r4, 0x0);
/*8047F2E8 0047C0E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*8047F2EC 0047C0EC*/ PPC::Runtime::ASM::blt(.L_8047F3CC);
/*8047F2F0 0047C0F0*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*8047F2F4 0047C0F4*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8047F2F8 0047C0F8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x3fdf);
/*8047F2FC 0047C0FC*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*8047F300 0047C100*/ PPC::Runtime::ASM::beq(.L_8047F344);
/*8047F304 0047C104*/ PPC::Runtime::ASM::bge(.L_8047F324);
/*8047F308 0047C108*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7fdf);
/*8047F30C 0047C10C*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*8047F310 0047C110*/ PPC::Runtime::ASM::beq(.L_8047F358);
/*8047F314 0047C114*/ PPC::Runtime::ASM::bge(.L_8047F39C);
/*8047F318 0047C118*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x21);
/*8047F31C 0047C11C*/ PPC::Runtime::ASM::beq(.L_8047F38C);
/*8047F320 0047C120*/ PPC::Runtime::ASM::b(.L_8047F39C);
RUNTIME_PPC_JUMP_LABEL(.L_8047F324, 0x8047F324) //this is a jump label
/*8047F324 0047C124*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x3ddd);
/*8047F328 0047C128*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*8047F32C 0047C12C*/ PPC::Runtime::ASM::beq(.L_8047F37C);
/*8047F330 0047C130*/ PPC::Runtime::ASM::bge(.L_8047F39C);
/*8047F334 0047C134*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x3fdd);
/*8047F338 0047C138*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*8047F33C 0047C13C*/ PPC::Runtime::ASM::beq(.L_8047F36C);
/*8047F340 0047C140*/ PPC::Runtime::ASM::b(.L_8047F39C);
RUNTIME_PPC_JUMP_LABEL(.L_8047F344, 0x8047F344) //this is a jump label
/*8047F344 0047C144*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8047F348 0047C148*/ PPC::Runtime::ASM::addi(context->r4, context->r8, 0x2);
/*8047F34C 0047C14C*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x2);
/*8047F350 0047C150*/ PPC::Runtime::ASM::bl(fn_8047F138);
/*8047F354 0047C154*/ PPC::Runtime::ASM::b(.L_8047F3CC);
RUNTIME_PPC_JUMP_LABEL(.L_8047F358, 0x8047F358) //this is a jump label
/*8047F358 0047C158*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*8047F35C 0047C15C*/ PPC::Runtime::ASM::addi(context->r4, context->r8, 0x2);
/*8047F360 0047C160*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x2);
/*8047F364 0047C164*/ PPC::Runtime::ASM::bl(fn_8047F138);
/*8047F368 0047C168*/ PPC::Runtime::ASM::b(.L_8047F3CC);
RUNTIME_PPC_JUMP_LABEL(.L_8047F36C, 0x8047F36C) //this is a jump label
/*8047F36C 0047C16C*/ PPC::Runtime::ASM::addi(context->r4, context->r8, 0x2);
/*8047F370 0047C170*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x2);
/*8047F374 0047C174*/ PPC::Runtime::ASM::bl(fn_80481678);
/*8047F378 0047C178*/ PPC::Runtime::ASM::b(.L_8047F3CC);
RUNTIME_PPC_JUMP_LABEL(.L_8047F37C, 0x8047F37C) //this is a jump label
/*8047F37C 0047C17C*/ PPC::Runtime::ASM::addi(context->r4, context->r8, 0x2);
/*8047F380 0047C180*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x2);
/*8047F384 0047C184*/ PPC::Runtime::ASM::bl(fn_80481854);
/*8047F388 0047C188*/ PPC::Runtime::ASM::b(.L_8047F3CC);
RUNTIME_PPC_JUMP_LABEL(.L_8047F38C, 0x8047F38C) //this is a jump label
/*8047F38C 0047C18C*/ PPC::Runtime::ASM::addi(context->r4, context->r8, 0x2);
/*8047F390 0047C190*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x2);
/*8047F394 0047C194*/ PPC::Runtime::ASM::bl(fn_IPIn);
/*8047F398 0047C198*/ PPC::Runtime::ASM::b(.L_8047F3CC);
RUNTIME_PPC_JUMP_LABEL(.L_8047F39C, 0x8047F39C) //this is a jump label
/*8047F39C 0047C19C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8047F3A0 0047C1A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8047F3A4 0047C1A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*8047F3A8 0047C1A8*/ PPC::Runtime::ASM::bne(.L_8047F3CC);
/*8047F3AC 0047C1AC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*8047F3B0 0047C1B0*/ PPC::Runtime::ASM::addi(context->r7, context->r8, 0x2);
/*8047F3B4 0047C1B4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8047F3B8 0047C1B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*8047F3BC 0047C1BC*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8047F3C0 0047C1C0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*8047F3C4 0047C1C4*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*8047F3C8 0047C1C8*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047F3CC, 0x8047F3CC) //this is a jump label
/*8047F3CC 0047C1CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8047F3D0 0047C1D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*8047F3D4 0047C1D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047F3D8 0047C1D8*/ PPC::Runtime::ASM::blr();
}