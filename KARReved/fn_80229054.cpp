//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80221D78.hpp"
#include "fn_80222144.hpp"
#include "fn_802290BC.hpp"



void fn_80229054(PPC::Runtime::GCContext* context)
{
/*80229054 00225E54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80229058 00225E58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022905C 00225E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80229060 00225E60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80229064 00225E64*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80229068 00225E68*/ PPC::Runtime::ASM::bl(fn_80221D78);
/*8022906C 00225E6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/* 80229070 00225E70  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80229074 00225E74*/ PPC::Runtime::ASM::beq(.L_802290A4);
/*80229078 00225E78*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022907C 00225E7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80229080 00225E80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*80229084 00225E84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80229088 00225E88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*8022908C 00225E8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*80229090 00225E90*/ PPC::Runtime::ASM::bl(fn_80222144);
/*80229094 00225E94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80229098 00225E98*/ PPC::Runtime::ASM::beq(.L_802290A4);
/*8022909C 00225E9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802290A0 00225EA0*/ PPC::Runtime::ASM::bl(fn_802290BC);
RUNTIME_PPC_JUMP_LABEL(.L_802290A4, 0x802290A4) //this is a jump label
/*802290A4 00225EA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802290A8 00225EA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802290AC 00225EAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802290B0 00225EB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802290B4 00225EB4*/ PPC::Runtime::ASM::blr();
}