//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80009908(PPC::Runtime::GCContext* context)
{
/*80009908 00006708*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000990C 0000670C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80009910 00006710*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80009914 00006714*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80009918 00006718*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000991C 0000671C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80009920 00006720*/ PPC::Runtime::ASM::mulli(context->r0, context->r31, 0x3);
/*80009924 00006724*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80009928 00006728*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbba, context->r3));
/*8000992C 0000672C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80009930 00006730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80009934 00006734*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80009938 00006738*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000993C 0000673C*/ PPC::Runtime::ASM::blr();
}