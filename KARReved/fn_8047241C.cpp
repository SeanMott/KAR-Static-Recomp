//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_804721E8.hpp"
#include "fn_804721E8.hpp"
#include "fn_804721E8.hpp"
#include "fn_804721E8.hpp"
#include "fn_804721E8.hpp"
#include "fn_804721E8.hpp"



void fn_8047241C(PPC::Runtime::GCContext* context)
{
/*8047241C 0046F21C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80472420 0046F220*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80472424 0046F224*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80472428 0046F228*/ PPC::Runtime::ASM::stmw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8047242C 0046F22C*/ PPC::Runtime::ASM::mr(context->r26, context->r9);
/*80472430 0046F230*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80472434 0046F234*/ PPC::Runtime::ASM::addi(context->r22, context->r3, 0x0);
/*80472438 0046F238*/ PPC::Runtime::ASM::addi(context->r23, context->r4, 0x0);
/*8047243C 0046F23C*/ PPC::Runtime::ASM::addi(context->r24, context->r5, 0x0);
/*80472440 0046F240*/ PPC::Runtime::ASM::addi(context->r25, context->r8, 0x0);
/*80472444 0046F244*/ PPC::Runtime::ASM::addi(context->r27, context->r10, 0x0);
/*80472448 0046F248*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8047244C 0046F24C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80472450 0046F250*/ PPC::Runtime::ASM::bne(.L_8047245C);
/*80472454 0046F254*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80472458 0046F258*/ PPC::Runtime::ASM::b(.L_804725A8);
RUNTIME_PPC_JUMP_LABEL(.L_8047245C, 0x8047245C) //this is a jump label
/*8047245C 0046F25C*/ PPC::Runtime::ASM::add(context->r0, context->r24, context->r6);
/*80472460 0046F260*/ PPC::Runtime::ASM::add(context->r4, context->r22, context->r23);
/*80472464 0046F264*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*80472468 0046F268*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*8047246C 0046F26C*/ PPC::Runtime::ASM::bgt(.L_80472474);
/*80472470 0046F270*/ PPC::Runtime::ASM::subf(context->r31, context->r23, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80472474, 0x80472474) //this is a jump label
/*80472474 0046F274*/ PPC::Runtime::ASM::add(context->r0, context->r31, context->r7);
/*80472478 0046F278*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*8047247C 0046F27C*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*80472480 0046F280*/ PPC::Runtime::ASM::bgt(.L_80472488);
/*80472484 0046F284*/ PPC::Runtime::ASM::subf(context->r3, context->r23, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80472488, 0x80472488) //this is a jump label
/*80472488 0046F288*/ PPC::Runtime::ASM::cmplw(context->r24, context->r3);
/*8047248C 0046F28C*/ PPC::Runtime::ASM::bgt(.L_80472584);
/*80472490 0046F290*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r4);
/*80472494 0046F294*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*80472498 0046F298*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*8047249C 0046F29C*/ PPC::Runtime::ASM::bgt(.L_804724C8);
/*804724A0 0046F2A0*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*804724A4 0046F2A4*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x0);
/*804724A8 0046F2A8*/ PPC::Runtime::ASM::addi(context->r6, context->r27, 0x0);
/*804724AC 0046F2AC*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x0);
/*804724B0 0046F2B0*/ PPC::Runtime::ASM::addi(context->r8, context->r23, 0x0);
/*804724B4 0046F2B4*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x0);
/*804724B8 0046F2B8*/ PPC::Runtime::ASM::bl(fn_804721E8);
/*804724BC 0046F2BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*804724C0 0046F2C0*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*804724C4 0046F2C4*/ PPC::Runtime::ASM::b(.L_804725A8);
RUNTIME_PPC_JUMP_LABEL(.L_804724C8, 0x804724C8) //this is a jump label
/*804724C8 0046F2C8*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*804724CC 0046F2CC*/ PPC::Runtime::ASM::ble(.L_80472524);
/*804724D0 0046F2D0*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*804724D4 0046F2D4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*804724D8 0046F2D8*/ PPC::Runtime::ASM::addi(context->r6, context->r27, 0x0);
/*804724DC 0046F2DC*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x0);
/*804724E0 0046F2E0*/ PPC::Runtime::ASM::addi(context->r8, context->r23, 0x0);
/*804724E4 0046F2E4*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x0);
/*804724E8 0046F2E8*/ PPC::Runtime::ASM::bl(fn_804721E8);
/*804724EC 0046F2EC*/ PPC::Runtime::ASM::add(context->r25, context->r25, context->r30);
/*804724F0 0046F2F0*/ PPC::Runtime::ASM::subf(context->r29, context->r30, context->r29);
/*804724F4 0046F2F4*/ PPC::Runtime::ASM::addi(context->r3, context->r22, 0x0);
/*804724F8 0046F2F8*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*804724FC 0046F2FC*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x0);
/*80472500 0046F300*/ PPC::Runtime::ASM::addi(context->r6, context->r27, 0x0);
/*80472504 0046F304*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x0);
/*80472508 0046F308*/ PPC::Runtime::ASM::addi(context->r8, context->r23, 0x0);
/*8047250C 0046F30C*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x0);
/*80472510 0046F310*/ PPC::Runtime::ASM::bl(fn_804721E8);
/*80472514 0046F314*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80472518 0046F318*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8047251C 0046F31C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80472520 0046F320*/ PPC::Runtime::ASM::b(.L_804725A8);
RUNTIME_PPC_JUMP_LABEL(.L_80472524, 0x80472524) //this is a jump label
/*80472524 0046F324*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*80472528 0046F328*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8047252C 0046F32C*/ PPC::Runtime::ASM::addi(context->r6, context->r27, 0x0);
/*80472530 0046F330*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x0);
/*80472534 0046F334*/ PPC::Runtime::ASM::addi(context->r8, context->r23, 0x0);
/*80472538 0046F338*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x0);
/*8047253C 0046F33C*/ PPC::Runtime::ASM::bl(fn_804721E8);
/*80472540 0046F340*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*80472544 0046F344*/ PPC::Runtime::ASM::subf.(context->r29, context->r31, context->r29);
/*80472548 0046F348*/ PPC::Runtime::ASM::add(context->r25, context->r25, context->r31);
/*8047254C 0046F34C*/ PPC::Runtime::ASM::ble(.L_80472578);
/*80472550 0046F350*/ PPC::Runtime::ASM::subf(context->r0, context->r30, context->r31);
/*80472554 0046F354*/ PPC::Runtime::ASM::add(context->r3, context->r22, context->r0);
/*80472558 0046F358*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*8047255C 0046F35C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x0);
/*80472560 0046F360*/ PPC::Runtime::ASM::addi(context->r6, context->r27, 0x0);
/*80472564 0046F364*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x0);
/*80472568 0046F368*/ PPC::Runtime::ASM::addi(context->r8, context->r23, 0x0);
/*8047256C 0046F36C*/ PPC::Runtime::ASM::addi(context->r9, context->r3, 0x0);
/*80472570 0046F370*/ PPC::Runtime::ASM::bl(fn_804721E8);
/*80472574 0046F374*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80472578, 0x80472578) //this is a jump label
/*80472578 0046F378*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8047257C 0046F37C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80472580 0046F380*/ PPC::Runtime::ASM::b(.L_804725A8);
RUNTIME_PPC_JUMP_LABEL(.L_80472584, 0x80472584) //this is a jump label
/*80472584 0046F384*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*80472588 0046F388*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x0);
/*8047258C 0046F38C*/ PPC::Runtime::ASM::addi(context->r6, context->r27, 0x0);
/*80472590 0046F390*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x0);
/*80472594 0046F394*/ PPC::Runtime::ASM::addi(context->r8, context->r23, 0x0);
/*80472598 0046F398*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x0);
/*8047259C 0046F39C*/ PPC::Runtime::ASM::bl(fn_804721E8);
/*804725A0 0046F3A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*804725A4 0046F3A4*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
RUNTIME_PPC_JUMP_LABEL(.L_804725A8, 0x804725A8) //this is a jump label
/*804725A8 0046F3A8*/ PPC::Runtime::ASM::lmw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*804725AC 0046F3AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*804725B0 0046F3B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*804725B4 0046F3B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804725B8 0046F3B8*/ PPC::Runtime::ASM::blr();
}