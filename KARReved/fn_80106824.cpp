//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_8010685C.hpp"



void fn_80106824(PPC::Runtime::GCContext* context)
{
/*80106824 00103624*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80106828 00103628*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010682C 0010362C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106830 00103630*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80106834 00103634*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80106838 00103638*/ PPC::Runtime::ASM::li(context->r3, 0x20);
/*8010683C 0010363C*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*80106840 00103640*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80106844 00103644*/ PPC::Runtime::ASM::bl(fn_8010685C);
/*80106848 00103648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010684C 0010364C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80106850 00103650*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80106854 00103654*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80106858 00103658*/ PPC::Runtime::ASM::blr();
}