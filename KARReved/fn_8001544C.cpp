//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022D230.hpp"
#include "fn_plGetPlayerKind.hpp"



void fn_8001544C(PPC::Runtime::GCContext* context)
{
/*8001544C 0001224C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80015450 00012250*/ PPC::Runtime::ASM::mflr(context->r0);
/*80015454 00012254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80015458 00012258*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8001545C 0001225C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80015460 00012260*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80015464 00012264*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80015468 00012268*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8001546C 0001226C*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80015470 00012270*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80015474 00012274*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80015478 00012278*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8001547C 0001227C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x830);
/*80015480 00012280*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80015484, 0x80015484) //this is a jump label
/*80015484 00012284*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80015488 00012288*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8001548C 0001228C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80015490 00012290*/ PPC::Runtime::ASM::beq(.L_800154AC);
/*80015494 00012294*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x18);
/*80015498 00012298*/ PPC::Runtime::ASM::lbzx(context->r0, context->r29, context->r0);
/*8001549C 0001229C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800154A0 000122A0*/ PPC::Runtime::ASM::bne(.L_800154AC);
/*800154A4 000122A4*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*800154A8 000122A8*/ PPC::Runtime::ASM::b(.L_800154B8);
RUNTIME_PPC_JUMP_LABEL(.L_800154AC, 0x800154AC) //this is a jump label
/*800154AC 000122AC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*800154B0 000122B0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*800154B4 000122B4*/ PPC::Runtime::ASM::blt(.L_80015484);
RUNTIME_PPC_JUMP_LABEL(.L_800154B8, 0x800154B8) //this is a jump label
/*800154B8 000122B8*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*800154BC 000122BC*/ PPC::Runtime::ASM::li(context->r27, 0x5);
/*800154C0 000122C0*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*800154C4 000122C4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800154C8 000122C8*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800154CC, 0x800154CC) //this is a jump label
/*800154CC 000122CC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800154D0 000122D0*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*800154D4 000122D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800154D8 000122D8*/ PPC::Runtime::ASM::bne(.L_800154F8);
/*800154DC 000122DC*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x18);
/*800154E0 000122E0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r29, context->r0);
/*800154E4 000122E4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800154E8 000122E8*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*800154EC 000122EC*/ PPC::Runtime::ASM::bge(.L_800154F8);
/*800154F0 000122F0*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
/*800154F4 000122F4*/ PPC::Runtime::ASM::mr(context->r27, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800154F8, 0x800154F8) //this is a jump label
/*800154F8 000122F8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*800154FC 000122FC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*80015500 00012300*/ PPC::Runtime::ASM::blt(.L_800154CC);
/*80015504 00012304*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*80015508 00012308*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
/*8001550C 0001230C*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*80015510 00012310*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80015514 00012314*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80015518, 0x80015518) //this is a jump label
/*80015518 00012318*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8001551C 0001231C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*80015520 00012320*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80015524 00012324*/ PPC::Runtime::ASM::beq(.L_80015594);
/*80015528 00012328*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8001552C 0001232C*/ PPC::Runtime::ASM::bl(fn_8022D230);
/*80015530 00012330*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x18);
/*80015534 00012334*/ PPC::Runtime::ASM::lbzx(context->r28, context->r29, context->r0);
/*80015538 00012338*/ PPC::Runtime::ASM::extsb(context->r28, context->r28);
/*8001553C 0001233C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x1);
/*80015540 00012340*/ PPC::Runtime::ASM::blt(.L_80015588);
/*80015544 00012344*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r31));
/*80015548 00012348*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x5);
/*8001554C 0001234C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f30, context->f31);
/*80015550 00012350*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r31));
/*80015554 00012354*/ PPC::Runtime::ASM::beq(.L_8001557C);
/*80015558 00012358*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8001555C 0001235C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*80015560 00012360*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80015564 00012364*/ PPC::Runtime::ASM::bne(.L_8001557C);
/*80015568 00012368*/ PPC::Runtime::ASM::cmpw(context->r28, context->r27);
/*8001556C 0001236C*/ PPC::Runtime::ASM::ble(.L_8001557C);
/*80015570 00012370*/ PPC::Runtime::ASM::fsubs(context->f0, context->f29, context->f31);
/*80015574 00012374*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r31));
/*80015578 00012378*/ PPC::Runtime::ASM::b(.L_80015594);
RUNTIME_PPC_JUMP_LABEL(.L_8001557C, 0x8001557C) //this is a jump label
/*8001557C 0001237C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80015580 00012380*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r31));
/*80015584 00012384*/ PPC::Runtime::ASM::b(.L_80015594);
RUNTIME_PPC_JUMP_LABEL(.L_80015588, 0x80015588) //this is a jump label
/*80015588 00012388*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8001558C 0001238C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r31));
/*80015590 00012390*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80015594, 0x80015594) //this is a jump label
/*80015594 00012394*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80015598 00012398*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*8001559C 0001239C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*800155A0 000123A0*/ PPC::Runtime::ASM::blt(.L_80015518);
/*800155A4 000123A4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800155A8 000123A8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800155AC 000123AC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800155B0 000123B0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800155B4 000123B4*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800155B8 000123B8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800155BC 000123BC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800155C0 000123C0*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800155C4 000123C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800155C8 000123C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800155CC 000123CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800155D0 000123D0*/ PPC::Runtime::ASM::blr();
}