//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___GXSetVAT(PPC::Runtime::GCContext* context)
{
/*803CB30C 003C810C*/ PPC::Runtime::ASM::lwz(context->r10, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CB310 003C8110*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*803CB314 003C8114*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*803CB318 003C8118*/ PPC::Runtime::ASM::lis(context->r7, 0xcc01);
/*803CB31C 003C811C*/ PPC::Runtime::ASM::b(.L_803CB38C);
RUNTIME_PPC_JUMP_LABEL(.L_803CB320, 0x803CB320) //this is a jump label
/*803CB320 003C8120*/ PPC::Runtime::ASM::clrlwi(context->r9, context->r12, 24);
/*803CB324 003C8124*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f3, context->r10));
/*803CB328 003C8128*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803CB32C 003C812C*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r9);
/*803CB330 003C8130*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*803CB334 003C8134*/ PPC::Runtime::ASM::beq(.L_803CB384);
/*803CB338 003C8138*/ PPC::Runtime::ASM::li(context->r8, 0x8);
/*803CB33C 003C813C*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB340 003C8140*/ PPC::Runtime::ASM::ori(context->r3, context->r9, 0x70);
/*803CB344 003C8144*/ PPC::Runtime::ASM::addi(context->r0, context->r11, 0x1c);
/*803CB348 003C8148*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB34C 003C814C*/ PPC::Runtime::ASM::ori(context->r5, context->r9, 0x80);
/*803CB350 003C8150*/ PPC::Runtime::ASM::addi(context->r4, context->r11, 0x3c);
/*803CB354 003C8154*/ PPC::Runtime::ASM::lwzx(context->r6, context->r10, context->r0);
/*803CB358 003C8158*/ PPC::Runtime::ASM::ori(context->r3, context->r9, 0x90);
/*803CB35C 003C815C*/ PPC::Runtime::ASM::addi(context->r0, context->r11, 0x5c);
/*803CB360 003C8160*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB364 003C8164*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB368 003C8168*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB36C 003C816C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r10, context->r4);
/*803CB370 003C8170*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB374 003C8174*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB378 003C8178*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*803CB37C 003C817C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r10, context->r0);
/*803CB380 003C8180*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_803CB384, 0x803CB384) //this is a jump label
/*803CB384 003C8184*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x4);
/*803CB388 003C8188*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803CB38C, 0x803CB38C) //this is a jump label
/*803CB38C 003C818C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r12, 24);
/*803CB390 003C8190*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*803CB394 003C8194*/ PPC::Runtime::ASM::blt(.L_803CB320);
/*803CB398 003C8198*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CB39C 003C819C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CB3A0 003C81A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f3, context->r3));
/*803CB3A4 003C81A4*/ PPC::Runtime::ASM::blr();
}