//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E6074.hpp"
#include "fn_800D8D0C.hpp"
#include "fn_800BC25C.hpp"
#include "fn_800BC290.hpp"
#include "fn_800E6640.hpp"
#include "fn_800E6758.hpp"



void fn_800E63D4(PPC::Runtime::GCContext* context)
{
/*800E63D4 000E31D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800E63D8 000E31D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E63DC 000E31DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E63E0 000E31E0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E63E4 000E31E4*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800E63E8 000E31E8*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800E63EC 000E31EC*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*800E63F0 000E31F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E63F4 000E31F4*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*800E63F8 000E31F8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r25));
/*800E63FC 000E31FC*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*800E6400 000E3200*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800E6404 000E3204*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800E6408 000E3208*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E640C 000E320C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E6410 000E3210*/ PPC::Runtime::ASM::b(.L_800E6428);
RUNTIME_PPC_JUMP_LABEL(.L_800E6414, 0x800E6414) //this is a jump label
/*800E6414 000E3214*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800E6418 000E3218*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800E641C 000E321C*/ PPC::Runtime::ASM::bl(fn_HSD_DObjSetFlags);
/*800E6420 000E3220*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*800E6424 000E3224*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E6428, 0x800E6428) //this is a jump label
/*800E6428 000E3228*/ PPC::Runtime::ASM::cmpw(context->r31, context->r30);
/*800E642C 000E322C*/ PPC::Runtime::ASM::blt(.L_800E6414);
/*800E6430 000E3230*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r25));
/*800E6434 000E3234*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800E6438 000E3238*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*800E643C 000E323C*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0xe4);
/*800E6440 000E3240*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800E6444 000E3244*/ PPC::Runtime::ASM::bl(fn_800E6074);
/*800E6448 000E3248*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800E644C 000E324C*/ PPC::Runtime::ASM::bl(fn_800D8D0C);
/*800E6450 000E3250*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E6454 000E3254*/ PPC::Runtime::ASM::beq(.L_800E647C);
/*800E6458 000E3258*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800E645C 000E325C*/ PPC::Runtime::ASM::bl(fn_800BC25C);
/*800E6460 000E3260*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E6464 000E3264*/ PPC::Runtime::ASM::bne(.L_800E647C);
/*800E6468 000E3268*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800E646C 000E326C*/ PPC::Runtime::ASM::bl(fn_800BC290);
/*800E6470 000E3270*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E6474 000E3274*/ PPC::Runtime::ASM::bne(.L_800E647C);
/*800E6478 000E3278*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E647C, 0x800E647C) //this is a jump label
/*800E647C 000E327C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800E6480 000E3280*/ PPC::Runtime::ASM::beq(.L_800E64A4);
/*800E6484 000E3284*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r25));
/*800E6488 000E3288*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800E648C 000E328C*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0xf8);
/*800E6490 000E3290*/ PPC::Runtime::ASM::bl(fn_800E6640);
/*800E6494 000E3294*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r25));
/*800E6498 000E3298*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800E649C 000E329C*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x100);
/*800E64A0 000E32A0*/ PPC::Runtime::ASM::bl(fn_800E6758);
RUNTIME_PPC_JUMP_LABEL(.L_800E64A4, 0x800E64A4) //this is a jump label
/*800E64A4 000E32A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E64A8 000E32A8*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800E64AC 000E32AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E64B0 000E32B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E64B4 000E32B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800E64B8 000E32B8*/ PPC::Runtime::ASM::blr();
}