//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_80157EA0(PPC::Runtime::GCContext* context)
{
/*80157EA0 00154CA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80157EA4 00154CA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80157EA8 00154CA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80157EAC 00154CAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80157EB0 00154CB0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80157EB4 00154CB4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80157EB8 00154CB8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80157EBC 00154CBC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80157EC0 00154CC0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80157EC4 00154CC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x724, context->r3));
/*80157EC8 00154CC8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80157ECC 00154CCC*/ PPC::Runtime::ASM::beq(.L_80157ED4);
/*80157ED0 00154CD0*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_80157ED4, 0x80157ED4) //this is a jump label
/*80157ED4 00154CD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80157ED8 00154CD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80157EDC 00154CDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80157EE0 00154CE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80157EE4 00154CE4*/ PPC::Runtime::ASM::blr();
}