//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_8021CBC0.hpp"



void fn_8021CB78(PPC::Runtime::GCContext* context)
{
/*8021CB78 00219978*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021CB7C 0021997C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021CB80 00219980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021CB84 00219984*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021CB88 00219988*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021CB8C 0021998C*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*8021CB90 00219990*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021CB94 00219994*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*8021CB98 00219998*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021CB9C 0021999C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021CBA0 002199A0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r31));
/*8021CBA4 002199A4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r31));
/*8021CBA8 002199A8*/ PPC::Runtime::ASM::bl(fn_8021CBC0);
/*8021CBAC 002199AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021CBB0 002199B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021CBB4 002199B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021CBB8 002199B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021CBBC 002199BC*/ PPC::Runtime::ASM::blr();
}