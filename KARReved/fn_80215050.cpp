//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80215114.hpp"
#include "fn_80215114.hpp"
#include "fn_802042FC.hpp"
#include "fn_8020AE54.hpp"



void fn_80215050(PPC::Runtime::GCContext* context)
{
/*80215050 00211E50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215054 00211E54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215058 00211E58*/ PPC::Runtime::ASM::lis(context->r4, fn_80215114 @ Get_MemoryOffset_HighBit);
/*8021505C 00211E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215060 00211E60*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_80215114 @ Get_MemoryOffset_LowBit);
/*80215064 00211E64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215068 00211E68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021506C 00211E6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xadc, context->r3));
/*80215070 00211E70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xae0, context->r3));
/*80215074 00211E74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xae4, context->r3));
/*80215078 00211E78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8021507C 00211E7C*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*80215080 00211E80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80215084 00211E84*/ PPC::Runtime::ASM::bl(fn_8020AE54);
/*80215088 00211E88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021508C 00211E8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215090 00211E90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215094 00211E94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215098 00211E98*/ PPC::Runtime::ASM::blr();
}