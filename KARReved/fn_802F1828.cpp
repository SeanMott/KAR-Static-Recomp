//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80379784.hpp"



void fn_802F1828(PPC::Runtime::GCContext* context)
{
/*802F1828 002EE628*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802F182C 002EE62C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F1830 002EE630*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F1834 002EE634*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F1838 002EE638*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802F183C 002EE63C*/ PPC::Runtime::ASM::beq(.L_802F1850);
/*802F1840 002EE640*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x238);
/*802F1844 002EE644*/ PPC::Runtime::ASM::lis(context->r4, 0x8);
/*802F1848 002EE648*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F184C 002EE64C*/ PPC::Runtime::ASM::bl(fn_80379784);
RUNTIME_PPC_JUMP_LABEL(.L_802F1850, 0x802F1850) //this is a jump label
/*802F1850 002EE650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F1854 002EE654*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F1858 002EE658*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802F185C 002EE65C*/ PPC::Runtime::ASM::blr();
}