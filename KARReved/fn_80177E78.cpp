//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801311F4.hpp"
#include "fn_80059520.hpp"



void fn_80177E78(PPC::Runtime::GCContext* context)
{
/*80177E78 00174C78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80177E7C 00174C7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80177E80 00174C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80177E84 00174C84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80177E88 00174C88*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80177E8C 00174C8C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80177E90 00174C90*/ PPC::Runtime::ASM::bl(fn_801311F4);
/*80177E94 00174C94*/ PPC::Runtime::ASM::lis(context->r4, String_ "ScMenSelruleBg_scene_model" Get_MemoryOffset_HighBit);
/*80177E98 00174C98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80177E9C 00174C9C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_ "ScMenSelruleBg_scene_model" Get_MemoryOffset_LowBit);
/*80177EA0 00174CA0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80177EA4 00174CA4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd44);
/*80177EA8 00174CA8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80177EAC 00174CAC*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80177EB0 00174CB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80177EB4 00174CB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80177EB8 00174CB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80177EBC 00174CBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80177EC0 00174CC0*/ PPC::Runtime::ASM::blr();
}