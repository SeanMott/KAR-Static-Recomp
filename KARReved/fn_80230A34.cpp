//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230A34(PPC::Runtime::GCContext* context)
{
/*80230A34 0022D834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230A38 0022D838*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230A3C 0022D83C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230A40 0022D840*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230A44 0022D844*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80230A48 0022D848*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*80230A4C 0022D84C*/ PPC::Runtime::ASM::blt(.L_80230A68);
/*80230A50 0022D850*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*80230A54 0022D854*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*80230A58 0022D858*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*80230A5C 0022D85C*/ PPC::Runtime::ASM::li(context->r4, 0x722);
/*80230A60 0022D860*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*80230A64 0022D864*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80230A68, 0x80230A68) //this is a jump label
/*80230A68 0022D868*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80230A6C 0022D86C*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80230A70 0022D870*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230A74 0022D874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x814, context->r3));
/*80230A78 0022D878*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230A7C 0022D87C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80230A80 0022D880*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230A84 0022D884*/ PPC::Runtime::ASM::blr();
}