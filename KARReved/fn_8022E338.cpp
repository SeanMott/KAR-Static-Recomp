//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022E338(PPC::Runtime::GCContext* context)
{
/*8022E338 0022B138*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022E33C 0022B13C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022E340 0022B140*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E344 0022B144*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E348 0022B148*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022E34C 0022B14C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022E350 0022B150*/ PPC::Runtime::ASM::blt(.L_8022E36C);
/*8022E354 0022B154*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022E358 0022B158*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022E35C 0022B15C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022E360 0022B160*/ PPC::Runtime::ASM::li(context->r4, 0xfd);
/*8022E364 0022B164*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022E368 0022B168*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022E36C, 0x8022E36C) //this is a jump label
/*8022E36C 0022B16C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022E370 0022B170*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022E374 0022B174*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x855, context->r3));
/*8022E378 0022B178*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E37C 0022B17C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 24);
/*8022E380 0022B180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E384 0022B184*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022E388 0022B188*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022E38C 0022B18C*/ PPC::Runtime::ASM::blr();
}