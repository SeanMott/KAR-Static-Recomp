//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013127C.hpp"
#include "fn_80059520.hpp"



void fn_80170DF8(PPC::Runtime::GCContext* context)
{
/*80170DF8 0016DBF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80170DFC 0016DBFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80170E00 0016DC00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170E04 0016DC04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170E08 0016DC08*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80170E0C 0016DC0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80170E10 0016DC10*/ PPC::Runtime::ASM::bl(fn_8013127C);
/*80170E14 0016DC14*/ PPC::Runtime::ASM::lis(context->r4, lbl_804ACD28 @ Get_MemoryOffset_HighBit);
/*80170E18 0016DC18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80170E1C 0016DC1C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804ACD28 @ Get_MemoryOffset_LowBit);
/*80170E20 0016DC20*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80170E24 0016DC24*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc44);
/*80170E28 0016DC28*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80170E2C 0016DC2C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80170E30 0016DC30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170E34 0016DC34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170E38 0016DC38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170E3C 0016DC3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80170E40 0016DC40*/ PPC::Runtime::ASM::blr();
}