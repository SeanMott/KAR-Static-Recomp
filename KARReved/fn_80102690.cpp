//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F728C.hpp"
#include "fn_800EA180.hpp"



void fn_80102690(PPC::Runtime::GCContext* context)
{
/*80102690 000FF490*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80102694 000FF494*/ PPC::Runtime::ASM::mflr(context->r0);
/*80102698 000FF498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010269C 000FF49C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801026A0 000FF4A0*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*801026A4 000FF4A4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801026A8 000FF4A8*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801026AC 000FF4AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801026B0 000FF4B0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801026B4 000FF4B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801026B8 000FF4B8*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*801026BC 000FF4BC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801026C0 000FF4C0*/ PPC::Runtime::ASM::b(.L_801026F8);
RUNTIME_PPC_JUMP_LABEL(.L_801026C4, 0x801026C4) //this is a jump label
/*801026C4 000FF4C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r28));
/*801026C8 000FF4C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r28));
/*801026CC 000FF4CC*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r29);
/*801026D0 000FF4D0*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r29);
/*801026D4 000FF4D4*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*801026D8 000FF4D8*/ PPC::Runtime::ASM::beq(.L_801026F0);
/*801026DC 000FF4DC*/ PPC::Runtime::ASM::bl(fn_800F728C);
/*801026E0 000FF4E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801026E4 000FF4E4*/ PPC::Runtime::ASM::bne(.L_801026F0);
/*801026E8 000FF4E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r28));
/*801026EC 000FF4EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_801026F0, 0x801026F0) //this is a jump label
/*801026F0 000FF4F0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*801026F4 000FF4F4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801026F8, 0x801026F8) //this is a jump label
/*801026F8 000FF4F8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*801026FC 000FF4FC*/ PPC::Runtime::ASM::cmpw(context->r26, context->r7);
/*80102700 000FF500*/ PPC::Runtime::ASM::blt(.L_801026C4);
/*80102704 000FF504*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80102708 000FF508*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*8010270C 000FF50C*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*80102710 000FF510*/ PPC::Runtime::ASM::mr(context->r4, context->r8);
/*80102714 000FF514*/ PPC::Runtime::ASM::mtctr(context->r7);
/*80102718 000FF518*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*8010271C 000FF51C*/ PPC::Runtime::ASM::ble(.L_80102744);
RUNTIME_PPC_JUMP_LABEL(.L_80102720, 0x80102720) //this is a jump label
/*80102720 000FF520*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r6));
/*80102724 000FF524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r6));
/*80102728 000FF528*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*8010272C 000FF52C*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r5);
/*80102730 000FF530*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80102734 000FF534*/ PPC::Runtime::ASM::bne(.L_80102744);
/*80102738 000FF538*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*8010273C 000FF53C*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80102740 000FF540*/ PPC::Runtime::ASM::bdnz(.L_80102720);
RUNTIME_PPC_JUMP_LABEL(.L_80102744, 0x80102744) //this is a jump label
/*80102744 000FF544*/ PPC::Runtime::ASM::cmpw(context->r8, context->r7);
/*80102748 000FF548*/ PPC::Runtime::ASM::bne(.L_8010277C);
/*8010274C 000FF54C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*80102750 000FF550*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80102754 000FF554*/ PPC::Runtime::ASM::beq(.L_80102774);
/*80102758 000FF558*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/* 8010275C 000FF55C  54 00 C0 02 */ extlwi context->r0 , context->r0 , 2 , 24
/*80102760 000FF560*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 31);
/*80102764 000FF564*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80102768 000FF568*/ PPC::Runtime::ASM::beq(.L_80102774);
/*8010276C 000FF56C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*80102770 000FF570*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_80102774, 0x80102774) //this is a jump label
/*80102774 000FF574*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80102778 000FF578*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_8010277C, 0x8010277C) //this is a jump label
/*8010277C 000FF57C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80102780 000FF580*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80102784 000FF584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80102788 000FF588*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010278C 000FF58C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80102790 000FF590*/ PPC::Runtime::ASM::blr();
}