//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_8046D8DC(PPC::Runtime::GCContext* context)
{
/*8046D8DC 0046A6DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046D8E0 0046A6E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8046D8E4 0046A6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046D8E8 0046A6E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*8046D8EC 0046A6EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046D8F0 0046A6F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8046D8F4 0046A6F4*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8046D8F8 0046A6F8*/ PPC::Runtime::ASM::beq(.L_8046D904);
/*8046D8FC 0046A6FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8046D900 0046A700*/ PPC::Runtime::ASM::b(.L_8046D90C);
RUNTIME_PPC_JUMP_LABEL(.L_8046D904, 0x8046D904) //this is a jump label
/*8046D904 0046A704*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8046D908 0046A708*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8046D90C, 0x8046D90C) //this is a jump label
/*8046D90C 0046A70C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8046D910 0046A710*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8046D914 0046A714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8046D918 0046A718*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8046D91C 0046A71C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8046D920 0046A720*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046D924 0046A724*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8046D928 0046A728*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*8046D92C 0046A72C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046D930 0046A730*/ PPC::Runtime::ASM::blr();
}