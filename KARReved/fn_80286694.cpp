//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_80286694(PPC::Runtime::GCContext* context)
{
/*80286694 00283494*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80286698 00283498*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028669C 0028349C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802866A0 002834A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802866A4 002834A4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802866A8 002834A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802866AC 002834AC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802866B0 002834B0*/ PPC::Runtime::ASM::beq(.L_80286740);
/*802866B4 002834B4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BB9D4 @ Get_MemoryOffset_HighBit);
/*802866B8 002834B8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802866BC 002834BC*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804BB9D4 @ Get_MemoryOffset_LowBit);
/*802866C0 002834C0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802866C4 002834C4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802866C8 002834C8*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802866CC 002834CC*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802866D0 002834D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802866D4 002834D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802866D8 002834D8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802866DC 002834DC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802866E0 002834E0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802866E4 002834E4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802866E8 002834E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802866EC 002834EC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802866F0 002834F0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802866F4 002834F4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802866F8 002834F8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802866FC 002834FC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286700 00283500*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*80286704 00283504*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286708 00283508*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*8028670C 0028350C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*80286710 00283510*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286714 00283514*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286718 00283518*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*8028671C 0028351C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286720 00283520*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286724 00283524*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80286728 00283528*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028672C 0028352C*/ PPC::Runtime::ASM::bl(fn_80285130);
/*80286730 00283530*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80286734 00283534*/ PPC::Runtime::ASM::ble(.L_80286740);
/*80286738 00283538*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028673C 0028353C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80286740, 0x80286740) //this is a jump label
/*80286740 00283540*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286744 00283544*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80286748 00283548*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028674C 0028354C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80286750 00283550*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80286754 00283554*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80286758 00283558*/ PPC::Runtime::ASM::blr();
}