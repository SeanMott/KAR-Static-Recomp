//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204FAC.hpp"
#include "fn_802042FC.hpp"



void fn_8021575C(PPC::Runtime::GCContext* context)
{
/*8021575C 0021255C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215760 00212560*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215764 00212564*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215768 00212568*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021576C 0021256C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80215770 00212570*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r3));
/*80215774 00212574*/ PPC::Runtime::ASM::bl(fn_80204FAC);
/*80215778 00212578*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021577C 0021257C*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*80215780 00212580*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215784 00212584*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215788 00212588*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021578C 0021258C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215790 00212590*/ PPC::Runtime::ASM::blr();
}