//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetStageKind_40array?.hpp"
#include "fn_802049C4.hpp"
#include "fn_80072C90.hpp"
#include "fn_80235720.hpp"



void fn_800F2468(PPC::Runtime::GCContext* context)
{
/*800F2468 000EF268*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F246C 000EF26C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F2470 000EF270*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F2474 000EF274*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F2478 000EF278*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F247C 000EF27C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800F2480 000EF280*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F2484 000EF284*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_40array?);
/*800F2488 000EF288*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800F248C 000EF28C*/ PPC::Runtime::ASM::beq(.L_800F250C);
/*800F2490 000EF290*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800F2494 000EF294*/ PPC::Runtime::ASM::b(.L_800F24F4);
RUNTIME_PPC_JUMP_LABEL(.L_800F2498, 0x800F2498) //this is a jump label
/*800F2498 000EF298*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800F249C 000EF29C*/ PPC::Runtime::ASM::bl(fn_802049C4);
/*800F24A0 000EF2A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800F24A4 000EF2A4*/ PPC::Runtime::ASM::beq(.L_800F24F0);
/*800F24A8 000EF2A8*/ PPC::Runtime::ASM::li(context->r5, 0x4c);
/*800F24AC 000EF2AC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800F24B0 000EF2B0*/ PPC::Runtime::ASM::subfc(context->r4, context->r5, context->r29);
/*800F24B4 000EF2B4*/ PPC::Runtime::ASM::srwi(context->r4, context->r29, 31);
/*800F24B8 000EF2B8*/ PPC::Runtime::ASM::srwi(context->r5, context->r5, 31);
/*800F24BC 000EF2BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F24C0 000EF2C0*/ PPC::Runtime::ASM::subfe(context->r5, context->r4, context->r5);
/*800F24C4 000EF2C4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800F24C8 000EF2C8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x2);
/*800F24CC 000EF2CC*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800F24D0 000EF2D0*/ PPC::Runtime::ASM::or(context->r30, context->r30, context->r0);
/*800F24D4 000EF2D4*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800F24D8 000EF2D8*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*800F24DC 000EF2DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800F24E0 000EF2E0*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*800F24E4 000EF2E4*/ PPC::Runtime::ASM::li(context->r9, 0x7);
/*800F24E8 000EF2E8*/ PPC::Runtime::ASM::li(context->r10, 0x8);
/*800F24EC 000EF2EC*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_800F24F0, 0x800F24F0) //this is a jump label
/*800F24F0 000EF2F0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_800F24F4, 0x800F24F4) //this is a jump label
/*800F24F4 000EF2F4*/ PPC::Runtime::ASM::lha(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800F24F8 000EF2F8*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*800F24FC 000EF2FC*/ PPC::Runtime::ASM::bne(.L_800F2498);
/* 800F2500 000EF300  57 C0 07 FF */ clrlwi. context->r0 , context->r30 , 31
/*800F2504 000EF304*/ PPC::Runtime::ASM::beq(.L_800F250C);
/*800F2508 000EF308*/ PPC::Runtime::ASM::bl(fn_80235720);
RUNTIME_PPC_JUMP_LABEL(.L_800F250C, 0x800F250C) //this is a jump label
/*800F250C 000EF30C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F2510 000EF310*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F2514 000EF314*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F2518 000EF318*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F251C 000EF31C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F2520 000EF320*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F2524 000EF324*/ PPC::Runtime::ASM::blr();
}