//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void ErrorCode2Num(PPC::Runtime::GCContext* context)
{
/*803C806C 003C4E6C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803C8070 003C4E70*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F97B0 @ Get_MemoryOffset_HighBit);
/*803C8074 003C4E74*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803C8078 003C4E78*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F97B0 @ Get_MemoryOffset_LowBit);
/*803C807C 003C4E7C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803C8080, 0x803C8080) //this is a jump label
/*803C8080 003C4E80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803C8084 003C4E84*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C8088 003C4E88*/ PPC::Runtime::ASM::bne(.L_803C8094);
/*803C808C 003C4E8C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C8090 003C4E90*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C8094, 0x803C8094) //this is a jump label
/*803C8094 003C4E94*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C8098 003C4E98*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C809C 003C4E9C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C80A0 003C4EA0*/ PPC::Runtime::ASM::bne(.L_803C80AC);
/*803C80A4 003C4EA4*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C80A8 003C4EA8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C80AC, 0x803C80AC) //this is a jump label
/*803C80AC 003C4EAC*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C80B0 003C4EB0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C80B4 003C4EB4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C80B8 003C4EB8*/ PPC::Runtime::ASM::bne(.L_803C80C4);
/*803C80BC 003C4EBC*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C80C0 003C4EC0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C80C4, 0x803C80C4) //this is a jump label
/*803C80C4 003C4EC4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C80C8 003C4EC8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C80CC 003C4ECC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C80D0 003C4ED0*/ PPC::Runtime::ASM::bne(.L_803C80DC);
/*803C80D4 003C4ED4*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C80D8 003C4ED8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C80DC, 0x803C80DC) //this is a jump label
/*803C80DC 003C4EDC*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C80E0 003C4EE0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C80E4 003C4EE4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C80E8 003C4EE8*/ PPC::Runtime::ASM::bne(.L_803C80F4);
/*803C80EC 003C4EEC*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C80F0 003C4EF0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C80F4, 0x803C80F4) //this is a jump label
/*803C80F4 003C4EF4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C80F8 003C4EF8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C80FC 003C4EFC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C8100 003C4F00*/ PPC::Runtime::ASM::bne(.L_803C810C);
/*803C8104 003C4F04*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C8108 003C4F08*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C810C, 0x803C810C) //this is a jump label
/*803C810C 003C4F0C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C8110 003C4F10*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C8114 003C4F14*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C8118 003C4F18*/ PPC::Runtime::ASM::bne(.L_803C8124);
/*803C811C 003C4F1C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C8120 003C4F20*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C8124, 0x803C8124) //this is a jump label
/*803C8124 003C4F24*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C8128 003C4F28*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C812C 003C4F2C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C8130 003C4F30*/ PPC::Runtime::ASM::bne(.L_803C813C);
/*803C8134 003C4F34*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C8138 003C4F38*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C813C, 0x803C813C) //this is a jump label
/*803C813C 003C4F3C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C8140 003C4F40*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C8144 003C4F44*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C8148 003C4F48*/ PPC::Runtime::ASM::bne(.L_803C8154);
/*803C814C 003C4F4C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803C8150 003C4F50*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C8154, 0x803C8154) //this is a jump label
/*803C8154 003C4F54*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*803C8158 003C4F58*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803C815C 003C4F5C*/ PPC::Runtime::ASM::bdnz(.L_803C8080);
/*803C8160 003C4F60*/ PPC::Runtime::ASM::lis(context->r4, 0x10);
/*803C8164 003C4F64*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*803C8168 003C4F68*/ PPC::Runtime::ASM::blt(.L_803C8180);
/*803C816C 003C4F6C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x8);
/*803C8170 003C4F70*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C8174 003C4F74*/ PPC::Runtime::ASM::bgt(.L_803C8180);
/*803C8178 003C4F78*/ PPC::Runtime::ASM::li(context->r3, 0x11);
/*803C817C 003C4F7C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C8180, 0x803C8180) //this is a jump label
/*803C8180 003C4F80*/ PPC::Runtime::ASM::li(context->r3, 0x1d);
/*803C8184 003C4F84*/ PPC::Runtime::ASM::blr();
}