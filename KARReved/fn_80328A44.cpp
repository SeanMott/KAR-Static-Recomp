//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80328B10.hpp"



void fn_80328A44(PPC::Runtime::GCContext* context)
{
/*80328A44 00325844*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80328A48 00325848*/ PPC::Runtime::ASM::mflr(context->r0);
/*80328A4C 0032584C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80328A50 00325850*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80328A54 00325854*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80328A58 00325858*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80328A5C 0032585C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80328A60 00325860*/ PPC::Runtime::ASM::li(context->r3, 0x3508);
/*80328A64 00325864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80328A68 00325868*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80328A6C 0032586C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 80328A70 00325870  7C 64 1B 79 */ mr. context->r4 , context->r3
/*80328A74 00325874*/ PPC::Runtime::ASM::beq(.L_80328A80);
/*80328A78 00325878*/ PPC::Runtime::ASM::bl(fn_80328B10);
/*80328A7C 0032587C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80328A80, 0x80328A80) //this is a jump label
/*80328A80 00325880*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80328A84 00325884*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80328A88 00325888*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80328A8C 0032588C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*80328A90 00325890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80328A94 00325894*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80328A98 00325898*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80328A9C 0032589C*/ PPC::Runtime::ASM::beq(.L_80328AB8);
/*80328AA0 003258A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80328AA4 003258A4*/ PPC::Runtime::ASM::beq(.L_80328AB0);
/*80328AA8 003258A8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD954 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80328AAC 003258AC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80328AB0, 0x80328AB0) //this is a jump label
/*80328AB0 003258B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80328AB4 003258B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80328AB8, 0x80328AB8) //this is a jump label
/*80328AB8 003258B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80328ABC 003258BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80328AC0 003258C0*/ PPC::Runtime::ASM::beq(.L_80328AD0);
/*80328AC4 003258C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80328AC8 003258C8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD954 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80328ACC 003258CC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80328AD0, 0x80328AD0) //this is a jump label
/*80328AD0 003258D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80328AD4 003258D4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80328AD8 003258D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80328ADC 003258DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80328AE0 003258E0*/ PPC::Runtime::ASM::b(.L_80328AEC);
/*80328AE4 003258E4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD954 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80328AE8 003258E8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80328AEC, 0x80328AEC) //this is a jump label
/*80328AEC 003258EC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*80328AF0 003258F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80328AF4 003258F4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80328AF8 003258F8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80328AFC 003258FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80328B00 00325900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80328B04 00325904*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80328B08 00325908*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80328B0C 0032590C*/ PPC::Runtime::ASM::blr();
}