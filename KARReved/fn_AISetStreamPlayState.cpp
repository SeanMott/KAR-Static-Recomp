//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_AIGetStreamPlayState_1.hpp"
#include "fn_AIGetStreamSampleRate.hpp"
#include "fn_AIGetStreamPlayState_3.hpp"
#include "fn_AIGetStreamPlayState_2.hpp"
#include "fn_AISetStreamVolRight.hpp"
#include "fn_AISetStreamVolLeft.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn___AI_SRC_INIT.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_AISetStreamVolLeft.hpp"
#include "fn_AISetStreamVolRight.hpp"



void fn_AISetStreamPlayState(PPC::Runtime::GCContext* context)
{
/*803DF750 003DC550*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DF754 003DC554*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DF758 003DC558*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803DF75C 003DC55C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DF760 003DC560*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DF764 003DC564*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF768 003DC568*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803DF76C 003DC56C*/ PPC::Runtime::ASM::bl(fn_AIGetStreamPlayState_1);
/*803DF770 003DC570*/ PPC::Runtime::ASM::cmplw(context->r29, context->r3);
/*803DF774 003DC574*/ PPC::Runtime::ASM::beq(.L_803DF80C);
/*803DF778 003DC578*/ PPC::Runtime::ASM::bl(fn_AIGetStreamSampleRate);
/*803DF77C 003DC57C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803DF780 003DC580*/ PPC::Runtime::ASM::bne(.L_803DF7F8);
/*803DF784 003DC584*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x1);
/*803DF788 003DC588*/ PPC::Runtime::ASM::bne(.L_803DF7F8);
/*803DF78C 003DC58C*/ PPC::Runtime::ASM::bl(fn_AIGetStreamPlayState_3);
/*803DF790 003DC590*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803DF794 003DC594*/ PPC::Runtime::ASM::bl(fn_AIGetStreamPlayState_2);
/*803DF798 003DC598*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803DF79C 003DC59C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DF7A0 003DC5A0*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolRight);
/*803DF7A4 003DC5A4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DF7A8 003DC5A8*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolLeft);
/*803DF7AC 003DC5AC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DF7B0 003DC5B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803DF7B4 003DC5B4*/ PPC::Runtime::ASM::bl(fn___AI_SRC_INIT);
/*803DF7B8 003DC5B8*/ PPC::Runtime::ASM::lis(context->r4, 0xcc00);
/*803DF7BC 003DC5BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r4));
/*803DF7C0 003DC5C0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803DF7C4 003DC5C4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 27, 25);
/*803DF7C8 003DC5C8*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x20);
/*803DF7CC 003DC5CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r4));
/*803DF7D0 003DC5D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r4));
/*803DF7D4 003DC5D4*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*803DF7D8 003DC5D8*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*803DF7DC 003DC5DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r4));
/*803DF7E0 003DC5E0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DF7E4 003DC5E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803DF7E8 003DC5E8*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolLeft);
/*803DF7EC 003DC5EC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803DF7F0 003DC5F0*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolRight);
/*803DF7F4 003DC5F4*/ PPC::Runtime::ASM::b(.L_803DF80C);
RUNTIME_PPC_JUMP_LABEL(.L_803DF7F8, 0x803DF7F8) //this is a jump label
/*803DF7F8 003DC5F8*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803DF7FC 003DC5FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r3));
/*803DF800 003DC600*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*803DF804 003DC604*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r29);
/*803DF808 003DC608*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803DF80C, 0x803DF80C) //this is a jump label
/*803DF80C 003DC60C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803DF810 003DC610*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DF814 003DC614*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DF818 003DC618*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF81C 003DC61C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803DF820 003DC620*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DF824 003DC624*/ PPC::Runtime::ASM::blr();
}