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



void fn_802865CC(PPC::Runtime::GCContext* context)
{
/*802865CC 002833CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802865D0 002833D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802865D4 002833D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802865D8 002833D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802865DC 002833DC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802865E0 002833E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802865E4 002833E4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802865E8 002833E8*/ PPC::Runtime::ASM::beq(.L_80286678);
/*802865EC 002833EC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BBAB8 @ Get_MemoryOffset_HighBit);
/*802865F0 002833F0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802865F4 002833F4*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804BBAB8 @ Get_MemoryOffset_LowBit);
/*802865F8 002833F8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802865FC 002833FC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80286600 00283400*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*80286604 00283404*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*80286608 00283408*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8028660C 0028340C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80286610 00283410*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286614 00283414*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*80286618 00283418*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028661C 0028341C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286620 00283420*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*80286624 00283424*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286628 00283428*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*8028662C 0028342C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*80286630 00283430*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286634 00283434*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286638 00283438*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*8028663C 0028343C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286640 00283440*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286644 00283444*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*80286648 00283448*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028664C 0028344C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*80286650 00283450*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*80286654 00283454*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286658 00283458*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*8028665C 0028345C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80286660 00283460*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80286664 00283464*/ PPC::Runtime::ASM::bl(fn_80285130);
/*80286668 00283468*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028666C 0028346C*/ PPC::Runtime::ASM::ble(.L_80286678);
/*80286670 00283470*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80286674 00283474*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80286678, 0x80286678) //this is a jump label
/*80286678 00283478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028667C 0028347C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80286680 00283480*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80286684 00283484*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80286688 00283488*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028668C 0028348C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80286690 00283490*/ PPC::Runtime::ASM::blr();
}