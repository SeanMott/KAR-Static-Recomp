//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_8015D8EC(PPC::Runtime::GCContext* context)
{
/*8015D8EC 0015A6EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015D8F0 0015A6F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015D8F4 0015A6F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015D8F8 0015A6F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015D8FC 0015A6FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8015D900 0015A700*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015D904 0015A704*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8015D908 0015A708*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015D90C 0015A70C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8015D910 0015A710*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r3));
/*8015D914 0015A714*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015D918 0015A718*/ PPC::Runtime::ASM::beq(.L_8015D920);
/*8015D91C 0015A71C*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_8015D920, 0x8015D920) //this is a jump label
/*8015D920 0015A720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015D924 0015A724*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015D928 0015A728*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015D92C 0015A72C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015D930 0015A730*/ PPC::Runtime::ASM::blr();
}