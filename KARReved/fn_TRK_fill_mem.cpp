//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_TRK_fill_mem(PPC::Runtime::GCContext* context)
{
/*803C0010 003BCE10*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x20);
/*803C0014 003BCE14*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r4, 24);
/*803C0018 003BCE18*/ PPC::Runtime::ASM::subi(context->r6, context->r3, 0x1);
/*803C001C 003BCE1C*/ PPC::Runtime::ASM::mr(context->r7, context->r4);
/*803C0020 003BCE20*/ PPC::Runtime::ASM::blt(.L_803C00B0);
/*803C0024 003BCE24*/ PPC::Runtime::ASM::nor(context->r0, context->r6, context->r6);
/* 803C0028 003BCE28  54 03 07 BF */ clrlwi. context->r3 , context->r0 , 30
/*803C002C 003BCE2C*/ PPC::Runtime::ASM::beq(.L_803C0040);
/*803C0030 003BCE30*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_803C0034, 0x803C0034) //this is a jump label
/* 803C0034 003BCE34  34 63 FF FF */ subic. context->r3 , context->r3 , 0x1
/*803C0038 003BCE38*/ PPC::Runtime::ASM::stbu(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*803C003C 003BCE3C*/ PPC::Runtime::ASM::bne(.L_803C0034);
RUNTIME_PPC_JUMP_LABEL(.L_803C0040, 0x803C0040) //this is a jump label
/*803C0040 003BCE40*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*803C0044 003BCE44*/ PPC::Runtime::ASM::beq(.L_803C0060);
/*803C0048 003BCE48*/ PPC::Runtime::ASM::slwi(context->r3, context->r7, 24);
/*803C004C 003BCE4C*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 16);
/*803C0050 003BCE50*/ PPC::Runtime::ASM::slwi(context->r4, context->r7, 8);
/*803C0054 003BCE54*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803C0058 003BCE58*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803C005C 003BCE5C*/ PPC::Runtime::ASM::or(context->r7, context->r7, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803C0060, 0x803C0060) //this is a jump label
/* 803C0060 003BCE60  54 A4 D9 7F */ srwi. context->r4 , context->r5 , 5
/*803C0064 003BCE64*/ PPC::Runtime::ASM::subi(context->r3, context->r6, 0x3);
/*803C0068 003BCE68*/ PPC::Runtime::ASM::beq(.L_803C0094);
RUNTIME_PPC_JUMP_LABEL(.L_803C006C, 0x803C006C) //this is a jump label
/*803C006C 003BCE6C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 803C0070 003BCE70  34 84 FF FF */ subic. context->r4 , context->r4 , 0x1
/*803C0074 003BCE74*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803C0078 003BCE78*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803C007C 003BCE7C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803C0080 003BCE80*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803C0084 003BCE84*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803C0088 003BCE88*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803C008C 003BCE8C*/ PPC::Runtime::ASM::stwu(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*803C0090 003BCE90*/ PPC::Runtime::ASM::bne(.L_803C006C);
RUNTIME_PPC_JUMP_LABEL(.L_803C0094, 0x803C0094) //this is a jump label
/* 803C0094 003BCE94  54 A4 F7 7F */ extrwi. context->r4 , context->r5 , 3 , 27
/*803C0098 003BCE98*/ PPC::Runtime::ASM::beq(.L_803C00A8);
RUNTIME_PPC_JUMP_LABEL(.L_803C009C, 0x803C009C) //this is a jump label
/* 803C009C 003BCE9C  34 84 FF FF */ subic. context->r4 , context->r4 , 0x1
/*803C00A0 003BCEA0*/ PPC::Runtime::ASM::stwu(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803C00A4 003BCEA4*/ PPC::Runtime::ASM::bne(.L_803C009C);
RUNTIME_PPC_JUMP_LABEL(.L_803C00A8, 0x803C00A8) //this is a jump label
/*803C00A8 003BCEA8*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x3);
/*803C00AC 003BCEAC*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r5, 30);
RUNTIME_PPC_JUMP_LABEL(.L_803C00B0, 0x803C00B0) //this is a jump label
/*803C00B0 003BCEB0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803C00B4 003BCEB4*/ PPC::Runtime::ASM::beqlr();
RUNTIME_PPC_JUMP_LABEL(.L_803C00B8, 0x803C00B8) //this is a jump label
/* 803C00B8 003BCEB8  34 A5 FF FF */ subic. context->r5 , context->r5 , 0x1
/*803C00BC 003BCEBC*/ PPC::Runtime::ASM::stbu(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*803C00C0 003BCEC0*/ PPC::Runtime::ASM::bne(.L_803C00B8);
/*803C00C4 003BCEC4*/ PPC::Runtime::ASM::blr();
}