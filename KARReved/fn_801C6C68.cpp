//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C6C68(PPC::Runtime::GCContext* context)
{
/*801C6C68 001C3A68*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A068 @ Get_MemoryOffset_HighBit);
/*801C6C6C 001C3A6C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*801C6C70 001C3A70*/ PPC::Runtime::ASM::addi(context->r7, context->r3, STRUCT_BYTE4_COUNT_18055A068 @ Get_MemoryOffset_LowBit);
/*801C6C74 001C3A74*/ PPC::Runtime::ASM::li(context->r6, STRUCT_BYTE4_COUNT_1805DD850 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_801C6C78, 0x801C6C78) //this is a jump label
/*801C6C78 001C3A78*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801C6C7C 001C3A7C*/ PPC::Runtime::ASM::li(context->r9, 0x12);
/*801C6C80 001C3A80*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*801C6C84 001C3A84*/ PPC::Runtime::ASM::slwi(context->r3, context->r9, 2);
/*801C6C88 001C3A88*/ PPC::Runtime::ASM::subfic(context->r0, context->r9, 0x13);
/*801C6C8C 001C3A8C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*801C6C90 001C3A90*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r3);
/*801C6C94 001C3A94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*801C6C98 001C3A98*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*801C6C9C 001C3A9C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*801C6CA0 001C3AA0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*801C6CA4 001C3AA4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*801C6CA8 001C3AA8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*801C6CAC 001C3AAC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*801C6CB0 001C3AB0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*801C6CB4 001C3AB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*801C6CB8 001C3AB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*801C6CBC 001C3ABC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*801C6CC0 001C3AC0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*801C6CC4 001C3AC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r7));
/*801C6CC8 001C3AC8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*801C6CCC 001C3ACC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*801C6CD0 001C3AD0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r7));
/*801C6CD4 001C3AD4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801C6CD8 001C3AD8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801C6CDC 001C3ADC*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x13);
/*801C6CE0 001C3AE0*/ PPC::Runtime::ASM::bge(.L_801C6CF4);
RUNTIME_PPC_JUMP_LABEL(.L_801C6CE4, 0x801C6CE4) //this is a jump label
/*801C6CE4 001C3AE4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801C6CE8 001C3AE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*801C6CEC 001C3AEC*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*801C6CF0 001C3AF0*/ PPC::Runtime::ASM::bdnz(.L_801C6CE4);
RUNTIME_PPC_JUMP_LABEL(.L_801C6CF4, 0x801C6CF4) //this is a jump label
/*801C6CF4 001C3AF4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*801C6CF8 001C3AF8*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4c);
/*801C6CFC 001C3AFC*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x2);
/*801C6D00 001C3B00*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*801C6D04 001C3B04*/ PPC::Runtime::ASM::blt(.L_801C6C78);
/*801C6D08 001C3B08*/ PPC::Runtime::ASM::blr();
}