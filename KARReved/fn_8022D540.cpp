//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C87A8.hpp"



void fn_8022D540(PPC::Runtime::GCContext* context)
{
/*8022D540 0022A340*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022D544 0022A344*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022D548 0022A348*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022D54C 0022A34C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022D550 0022A350*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D554 0022A354*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022D558 0022A358*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8022D55C 0022A35C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8022D560 0022A360*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8022D564 0022A364*/ PPC::Runtime::ASM::beq(.L_8022D570);
/*8022D568 0022A368*/ PPC::Runtime::ASM::bl(fn_801C87A8);
/*8022D56C 0022A36C*/ PPC::Runtime::ASM::b(.L_8022D574);
RUNTIME_PPC_JUMP_LABEL(.L_8022D570, 0x8022D570) //this is a jump label
/*8022D570 0022A370*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8022D574, 0x8022D574) //this is a jump label
/*8022D574 0022A374*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D578 0022A378*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022D57C 0022A37C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022D580 0022A380*/ PPC::Runtime::ASM::blr();
}