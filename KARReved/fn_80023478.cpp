//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80134138.hpp"



void fn_80023478(PPC::Runtime::GCContext* context)
{
/*80023478 00020278*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8002347C 0002027C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80023480 00020280*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80023484 00020284*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80023488 00020288*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8002348C 0002028C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80023490 00020290*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x10a);
/*80023494 00020294*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80023498 00020298*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14b, context->r3));
/*8002349C 0002029C*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x8);
/*800234A0 000202A0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800234A4 000202A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r3));
/*800234A8 000202A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14d, context->r3));
/*800234AC 000202AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14e, context->r3));
/*800234B0 000202B0*/ PPC::Runtime::ASM::b(.L_800235D4);
RUNTIME_PPC_JUMP_LABEL(.L_800234B4, 0x800234B4) //this is a jump label
/*800234B4 000202B4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*800234B8 000202B8*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800234BC 000202BC*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800234C0 000202C0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800234C4 000202C4*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*800234C8 000202C8*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800234CC 000202CC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*800234D0 000202D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800234D4 000202D4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800234D8 000202D8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*800234DC 000202DC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*800234E0 000202E0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800234E4, 0x800234E4) //this is a jump label
/*800234E4 000202E4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800234E8 000202E8*/ PPC::Runtime::ASM::slw(context->r0, context->r5, context->r7);
/*800234EC 000202EC*/ PPC::Runtime::ASM::and.(context->r0, context->r4, context->r0);
/*800234F0 000202F0*/ PPC::Runtime::ASM::beq(.L_8002352C);
/*800234F4 000202F4*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r7);
/*800234F8 000202F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r4));
/*800234FC 000202FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80023500 00020300*/ PPC::Runtime::ASM::bne(.L_8002352C);
/*80023504 00020304*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r4));
/*80023508 00020308*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
/*8002350C 0002030C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2d);
/*80023510 00020310*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r0);
/*80023514 00020314*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80023518 00020318*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8002351C 0002031C*/ PPC::Runtime::ASM::bne(.L_8002352C);
/*80023520 00020320*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80023524 00020324*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80023528 00020328*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8002352C, 0x8002352C) //this is a jump label
/*8002352C 0002032C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80023530 00020330*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80023534 00020334*/ PPC::Runtime::ASM::slw(context->r0, context->r5, context->r7);
/*80023538 00020338*/ PPC::Runtime::ASM::and.(context->r0, context->r4, context->r0);
/*8002353C 0002033C*/ PPC::Runtime::ASM::beq(.L_80023578);
/*80023540 00020340*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r7);
/*80023544 00020344*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r4));
/*80023548 00020348*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002354C 0002034C*/ PPC::Runtime::ASM::bne(.L_80023578);
/*80023550 00020350*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r4));
/*80023554 00020354*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
/*80023558 00020358*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2d);
/*8002355C 0002035C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r0);
/*80023560 00020360*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80023564 00020364*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80023568 00020368*/ PPC::Runtime::ASM::bne(.L_80023578);
/*8002356C 0002036C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80023570 00020370*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80023574 00020374*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80023578, 0x80023578) //this is a jump label
/*80023578 00020378*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8002357C 0002037C*/ PPC::Runtime::ASM::bdnz(.L_800234E4);
/*80023580 00020380*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x1);
/*80023584 00020384*/ PPC::Runtime::ASM::blt(.L_800235D0);
/*80023588 00020388*/ PPC::Runtime::ASM::mr(context->r27, context->r30);
/*8002358C 0002038C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80023590 00020390*/ PPC::Runtime::ASM::b(.L_800235C8);
RUNTIME_PPC_JUMP_LABEL(.L_80023594, 0x80023594) //this is a jump label
/*80023594 00020394*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80023598 00020398*/ PPC::Runtime::ASM::extsb(context->r4, context->r3);
/*8002359C 0002039C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800235A0 000203A0*/ PPC::Runtime::ASM::beq(.L_800235C0);
/*800235A4 000203A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x41);
/*800235A8 000203A8*/ PPC::Runtime::ASM::extsb(context->r6, context->r26);
/*800235AC 000203AC*/ PPC::Runtime::ASM::stbx(context->r26, context->r31, context->r0);
/*800235B0 000203B0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x25);
/*800235B4 000203B4*/ PPC::Runtime::ASM::extsb(context->r5, context->r28);
/*800235B8 000203B8*/ PPC::Runtime::ASM::lbzx(context->r4, context->r31, context->r0);
/*800235BC 000203BC*/ PPC::Runtime::ASM::bl(fn_80134138);
RUNTIME_PPC_JUMP_LABEL(.L_800235C0, 0x800235C0) //this is a jump label
/*800235C0 000203C0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*800235C4 000203C4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800235C8, 0x800235C8) //this is a jump label
/*800235C8 000203C8*/ PPC::Runtime::ASM::cmpw(context->r26, context->r28);
/*800235CC 000203CC*/ PPC::Runtime::ASM::blt(.L_80023594);
RUNTIME_PPC_JUMP_LABEL(.L_800235D0, 0x800235D0) //this is a jump label
/*800235D0 000203D0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800235D4, 0x800235D4) //this is a jump label
/*800235D4 000203D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*800235D8 000203D8*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*800235DC 000203DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800235E0 000203E0*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800235E4 000203E4*/ PPC::Runtime::ASM::blt(.L_800234B4);
/*800235E8 000203E8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800235EC 000203EC*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800235F0 000203F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800235F4 000203F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800235F8 000203F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800235FC 000203FC*/ PPC::Runtime::ASM::blr();
}