//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205884.hpp"
#include "fn_80205A60.hpp"



void fn_802197EC(PPC::Runtime::GCContext* context)
{
/*802197EC 002165EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802197F0 002165F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802197F4 002165F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802197F8 002165F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*802197FC 002165FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80219800 00216600*/ PPC::Runtime::ASM::bne(.L_80219810);
/*80219804 00216604*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80219808 00216608*/ PPC::Runtime::ASM::bl(fn_80205884);
/*8021980C 0021660C*/ PPC::Runtime::ASM::b(.L_80219818);
RUNTIME_PPC_JUMP_LABEL(.L_80219810, 0x80219810) //this is a jump label
/*80219810 00216610*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80219814 00216614*/ PPC::Runtime::ASM::bl(fn_80205A60);
RUNTIME_PPC_JUMP_LABEL(.L_80219818, 0x80219818) //this is a jump label
/*80219818 00216618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021981C 0021661C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80219820 00216620*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80219824 00216624*/ PPC::Runtime::ASM::blr();
}