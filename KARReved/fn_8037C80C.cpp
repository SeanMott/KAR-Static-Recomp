//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037C660.hpp"
#include "fn_8037C660.hpp"



void fn_8037C80C(PPC::Runtime::GCContext* context)
{
/*8037C80C 0037960C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037C810 00379610*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037C814 00379614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037C818 00379618*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037C81C 0037961C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037C820 00379620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r3));
/*8037C824 00379624*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7531);
/*8037C828 00379628*/ PPC::Runtime::ASM::bne(.L_8037C854);
/*8037C82C 0037962C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x310);
/*8037C830 00379630*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037C834 00379634*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8037C838 00379638*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x310);
/*8037C83C 0037963C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8037C840 00379640*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037C844 00379644*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037C848 00379648*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037C84C 0037964C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037C850 00379650*/ PPC::Runtime::ASM::bl(fn_8037B028);
RUNTIME_PPC_JUMP_LABEL(.L_8037C854, 0x8037C854) //this is a jump label
/*8037C854 00379654*/ PPC::Runtime::ASM::lis(context->r3, fn_8037C660 @ Get_MemoryOffset_HighBit);
/*8037C858 00379658*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8037C660 @ Get_MemoryOffset_LowBit);
/*8037C85C 0037965C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x350, context->r31));
/*8037C860 00379660*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r31));
/*8037C864 00379664*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037C868 00379668*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037C86C 0037966C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037C870 00379670*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037C874 00379674*/ PPC::Runtime::ASM::blr();
}