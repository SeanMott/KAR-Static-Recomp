//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800623EC.hpp"
#include "fn_800EA064.hpp"
#include "fn_800F728C.hpp"
#include "fn_800EA180.hpp"



void fn_80108524(PPC::Runtime::GCContext* context)
{
/*80108524 00105324*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80108528 00105328*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010852C 0010532C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80108530 00105330*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80108534 00105334*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80108538 00105338*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010853C 0010533C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80108540 00105340*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80108544 00105344*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80108548 00105348*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010854C 0010534C*/ PPC::Runtime::ASM::b(.L_8010856C);
RUNTIME_PPC_JUMP_LABEL(.L_80108550, 0x80108550) //this is a jump label
/*80108550 00105350*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*80108554 00105354*/ PPC::Runtime::ASM::lbzx(context->r3, context->r4, context->r5);
/*80108558 00105358*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8010855C 0010535C*/ PPC::Runtime::ASM::beq(.L_80108568);
/*80108560 00105360*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80108564 00105364*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80108568, 0x80108568) //this is a jump label
/*80108568 00105368*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010856C, 0x8010856C) //this is a jump label
/*8010856C 0010536C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80108570 00105370*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*80108574 00105374*/ PPC::Runtime::ASM::blt(.L_80108550);
/*80108578 00105378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*8010857C 0010537C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80108580 00105380*/ PPC::Runtime::ASM::beq(.L_801085E4);
/*80108584 00105384*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80108588 00105388*/ PPC::Runtime::ASM::li(context->r28, -0x1);
/*8010858C 0010538C*/ PPC::Runtime::ASM::mr(context->r27, context->r26);
/*80108590 00105390*/ PPC::Runtime::ASM::b(.L_801085D8);
RUNTIME_PPC_JUMP_LABEL(.L_80108594, 0x80108594) //this is a jump label
/*80108594 00105394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*80108598 00105398*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r27);
/*8010859C 0010539C*/ PPC::Runtime::ASM::subfic(context->r4, context->r3, -0x1);
/*801085A0 001053A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*801085A4 001053A4*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/* 801085A8 001053A8  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*801085AC 001053AC*/ PPC::Runtime::ASM::beq(.L_801085D0);
/*801085B0 001053B0*/ PPC::Runtime::ASM::bl(fn_800623EC);
/*801085B4 001053B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801085B8 001053B8*/ PPC::Runtime::ASM::bne(.L_801085D0);
/*801085BC 001053BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*801085C0 001053C0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r27);
/*801085C4 001053C4*/ PPC::Runtime::ASM::bl(fn_800EA064);
/*801085C8 001053C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*801085CC 001053CC*/ PPC::Runtime::ASM::stwx(context->r28, context->r3, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_801085D0, 0x801085D0) //this is a jump label
/*801085D0 001053D0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*801085D4 001053D4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801085D8, 0x801085D8) //this is a jump label
/*801085D8 001053D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801085DC 001053DC*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*801085E0 001053E0*/ PPC::Runtime::ASM::blt(.L_80108594);
RUNTIME_PPC_JUMP_LABEL(.L_801085E4, 0x801085E4) //this is a jump label
/*801085E4 001053E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r31));
/*801085E8 001053E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801085EC 001053EC*/ PPC::Runtime::ASM::bgt(.L_801086B8);
/*801085F0 001053F0*/ PPC::Runtime::ASM::mr(context->r27, context->r31);
/*801085F4 001053F4*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801085F8 001053F8*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*801085FC 001053FC*/ PPC::Runtime::ASM::b(.L_80108634);
RUNTIME_PPC_JUMP_LABEL(.L_80108600, 0x80108600) //this is a jump label
/*80108600 00105400*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r27));
/*80108604 00105404*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r27));
/*80108608 00105408*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r28);
/*8010860C 0010540C*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r28);
/*80108610 00105410*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*80108614 00105414*/ PPC::Runtime::ASM::beq(.L_8010862C);
/*80108618 00105418*/ PPC::Runtime::ASM::bl(fn_800F728C);
/*8010861C 0010541C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80108620 00105420*/ PPC::Runtime::ASM::bne(.L_8010862C);
/*80108624 00105424*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r27));
/*80108628 00105428*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8010862C, 0x8010862C) //this is a jump label
/*8010862C 0010542C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x8);
/*80108630 00105430*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80108634, 0x80108634) //this is a jump label
/*80108634 00105434*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80108638 00105438*/ PPC::Runtime::ASM::cmpw(context->r26, context->r7);
/*8010863C 0010543C*/ PPC::Runtime::ASM::blt(.L_80108600);
/*80108640 00105440*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80108644 00105444*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*80108648 00105448*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*8010864C 0010544C*/ PPC::Runtime::ASM::mr(context->r4, context->r8);
/*80108650 00105450*/ PPC::Runtime::ASM::mtctr(context->r7);
/*80108654 00105454*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*80108658 00105458*/ PPC::Runtime::ASM::ble(.L_80108680);
RUNTIME_PPC_JUMP_LABEL(.L_8010865C, 0x8010865C) //this is a jump label
/*8010865C 0010545C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r6));
/*80108660 00105460*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r6));
/*80108664 00105464*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*80108668 00105468*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r5);
/*8010866C 0010546C*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80108670 00105470*/ PPC::Runtime::ASM::bne(.L_80108680);
/*80108674 00105474*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*80108678 00105478*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8010867C 0010547C*/ PPC::Runtime::ASM::bdnz(.L_8010865C);
RUNTIME_PPC_JUMP_LABEL(.L_80108680, 0x80108680) //this is a jump label
/*80108680 00105480*/ PPC::Runtime::ASM::cmpw(context->r8, context->r7);
/*80108684 00105484*/ PPC::Runtime::ASM::bne(.L_801086B8);
/*80108688 00105488*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*8010868C 0010548C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80108690 00105490*/ PPC::Runtime::ASM::beq(.L_801086B0);
/*80108694 00105494*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/* 80108698 00105498  54 00 C0 02 */ extlwi context->r0 , context->r0 , 2 , 24
/*8010869C 0010549C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 31);
/*801086A0 001054A0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*801086A4 001054A4*/ PPC::Runtime::ASM::beq(.L_801086B0);
/*801086A8 001054A8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*801086AC 001054AC*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_801086B0, 0x801086B0) //this is a jump label
/*801086B0 001054B0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801086B4 001054B4*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_801086B8, 0x801086B8) //this is a jump label
/*801086B8 001054B8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801086BC 001054BC*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*801086C0 001054C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801086C4 001054C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801086C8 001054C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801086CC 001054CC*/ PPC::Runtime::ASM::blr();
}