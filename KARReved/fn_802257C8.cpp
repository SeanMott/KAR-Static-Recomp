//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191FFC.hpp"
#include "fn_80191F18.hpp"
#include "fn_80191EF8.hpp"
#include "fn_80062DD0.hpp"



void fn_802257C8(PPC::Runtime::GCContext* context)
{
/*802257C8 002225C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802257CC 002225CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802257D0 002225D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802257D4 002225D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802257D8 002225D8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802257DC 002225DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xac);
/*802257E0 002225E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802257E4 002225E4*/ PPC::Runtime::ASM::bl(fn_80191FFC);
/*802257E8 002225E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802257EC 002225EC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdc);
/*802257F0 002225F0*/ PPC::Runtime::ASM::bl(fn_80191F18);
/*802257F4 002225F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802257F8 002225F8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd0);
/*802257FC 002225FC*/ PPC::Runtime::ASM::bl(fn_80191EF8);
/*80225800 00222600*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xdc);
/*80225804 00222604*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd0);
/*80225808 00222608*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xe8);
/*8022580C 0022260C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80225810 00222610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80225814 00222614*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80225818 00222618*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022581C 0022261C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80225820 00222620*/ PPC::Runtime::ASM::blr();
}