//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_8022D248.hpp"
#include "fn_800D56D0.hpp"
#include "fn_800EE8C4.hpp"
#include "fn_800D5708.hpp"
#include "fn_8027AA48.hpp"



void fn_802304C8(PPC::Runtime::GCContext* context)
{
/*802304C8 0022D2C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802304CC 0022D2CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802304D0 0022D2D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802304D4 0022D2D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802304D8 0022D2D8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802304DC 0022D2DC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*802304E0 0022D2E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802304E4 0022D2E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802304E8 0022D2E8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802304EC 0022D2EC*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*802304F0 0022D2F0*/ PPC::Runtime::ASM::beq(.L_80230590);
/*802304F4 0022D2F4*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*802304F8 0022D2F8*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*802304FC 0022D2FC*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*80230500 0022D300*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80230504 0022D304*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80230508 0022D308*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8023050C 0022D30C*/ PPC::Runtime::ASM::srawi(context->r5, context->r28, 3);
/*80230510 0022D310*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 29);
/*80230514 0022D314*/ PPC::Runtime::ASM::srwi(context->r4, context->r28, 31);
/*80230518 0022D318*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8023051C 0022D31C*/ PPC::Runtime::ASM::addze(context->r28, context->r5);
/*80230520 0022D320*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80230524 0022D324*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*80230528 0022D328*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x9);
/*8023052C 0022D32C*/ PPC::Runtime::ASM::add(context->r6, context->r30, context->r28);
/*80230530 0022D330*/ PPC::Runtime::ASM::rotlwi(context->r0, context->r0, 3);
/*80230534 0022D334*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x654, context->r6));
/*80230538 0022D338*/ PPC::Runtime::ASM::add(context->r29, context->r0, context->r4);
/*8023053C 0022D33C*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r29);
/*80230540 0022D340*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*80230544 0022D344*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x654, context->r6));
/*80230548 0022D348*/ PPC::Runtime::ASM::bne(.L_80230590);
/*8023054C 0022D34C*/ PPC::Runtime::ASM::bl(fn_800D56D0);
/*80230550 0022D350*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r28);
/*80230554 0022D354*/ PPC::Runtime::ASM::sraw(context->r0, context->r0, context->r29);
/* 80230558 0022D358  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8023055C 0022D35C*/ PPC::Runtime::ASM::beq(.L_80230568);
/*80230560 0022D360*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80230564 0022D364*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x850, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80230568, 0x80230568) //this is a jump label
/*80230568 0022D368*/ PPC::Runtime::ASM::bl(fn_800EE8C4);
/*8023056C 0022D36C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x6);
/*80230570 0022D370*/ PPC::Runtime::ASM::bne(.L_80230590);
/*80230574 0022D374*/ PPC::Runtime::ASM::bl(fn_800D5708);
/*80230578 0022D378*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r28);
/*8023057C 0022D37C*/ PPC::Runtime::ASM::sraw(context->r0, context->r0, context->r29);
/* 80230580 0022D380  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80230584 0022D384*/ PPC::Runtime::ASM::beq(.L_80230590);
/*80230588 0022D388*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8023058C 0022D38C*/ PPC::Runtime::ASM::bl(fn_8027AA48);
RUNTIME_PPC_JUMP_LABEL(.L_80230590, 0x80230590) //this is a jump label
/*80230590 0022D390*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80230594 0022D394*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80230598 0022D398*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023059C 0022D39C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802305A0 0022D3A0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802305A4 0022D3A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802305A8 0022D3A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802305AC 0022D3AC*/ PPC::Runtime::ASM::blr();
}