//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028DFC8.hpp"
#include "fn_8028DFC8.hpp"



void fn_80293894(PPC::Runtime::GCContext* context)
{
/*80293894 00290694*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80293898 00290698*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029389C 0029069C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802938A0 002906A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802938A4 002906A4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802938A8 002906A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802938AC 002906AC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802938B0 002906B0*/ PPC::Runtime::ASM::beq(.L_80293910);
/*802938B4 002906B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD58 @ Get_MemoryOffset_HighBit);
/*802938B8 002906B8*/ PPC::Runtime::ASM::lis(context->r4, fn_8028DFC8 @ Get_MemoryOffset_HighBit);
/*802938BC 002906BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD58 @ Get_MemoryOffset_LowBit);
/*802938C0 002906C0*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*802938C4 002906C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802938C8 002906C8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*802938CC 002906CC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028DFC8 @ Get_MemoryOffset_LowBit);
/*802938D0 002906D0*/ PPC::Runtime::ASM::li(context->r6, 0x6);
/*802938D4 002906D4*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802938D8 002906D8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802938DC 002906DC*/ PPC::Runtime::ASM::beq(.L_80293900);
/*802938E0 002906E0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD30 @ Get_MemoryOffset_HighBit);
/*802938E4 002906E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802938E8 002906E8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD30 @ Get_MemoryOffset_LowBit);
/*802938EC 002906EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802938F0 002906F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802938F4 002906F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802938F8 002906F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802938FC 002906FC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293900, 0x80293900) //this is a jump label
/*80293900 00290700*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80293904 00290704*/ PPC::Runtime::ASM::ble(.L_80293910);
/*80293908 00290708*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029390C 0029070C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80293910, 0x80293910) //this is a jump label
/*80293910 00290710*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80293914 00290714*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80293918 00290718*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029391C 0029071C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80293920 00290720*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80293924 00290724*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80293928 00290728*/ PPC::Runtime::ASM::blr();
}