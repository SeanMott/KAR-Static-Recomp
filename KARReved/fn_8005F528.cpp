//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005ECA0.hpp"



void fn_8005F528(PPC::Runtime::GCContext* context)
{
/*8005F528 0005C328*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005F52C 0005C32C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005F530 0005C330*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8005F534 0005C334*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005F538 0005C338*/ PPC::Runtime::ASM::bne(.L_8005F544);
/*8005F53C 0005C33C*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8005F540 0005C340*/ PPC::Runtime::ASM::b(.L_8005F56C);
RUNTIME_PPC_JUMP_LABEL(.L_8005F544, 0x8005F544) //this is a jump label
/*8005F544 0005C344*/ PPC::Runtime::ASM::mulli(context->r7, context->r5, 0xb8);
/*8005F548 0005C348*/ PPC::Runtime::ASM::lis(context->r6, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005F54C 0005C34C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005F550 0005C350*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r7);
/*8005F554 0005C354*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x380, context->r6));
/*8005F558 0005C358*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*8005F55C 0005C35C*/ PPC::Runtime::ASM::ble(.L_8005F568);
/*8005F560 0005C360*/ PPC::Runtime::ASM::bl(fn_8005ECA0);
/*8005F564 0005C364*/ PPC::Runtime::ASM::b(.L_8005F56C);
RUNTIME_PPC_JUMP_LABEL(.L_8005F568, 0x8005F568) //this is a jump label
/*8005F568 0005C368*/ PPC::Runtime::ASM::li(context->r3, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8005F56C, 0x8005F56C) //this is a jump label
/*8005F56C 0005C36C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005F570 0005C370*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005F574 0005C374*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005F578 0005C378*/ PPC::Runtime::ASM::blr();
}