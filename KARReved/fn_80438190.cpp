//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_Free.hpp"
#include "fn_HSD_Free.hpp"



void fn_80438190(PPC::Runtime::GCContext* context)
{
/*80438190 00434F90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80438194 00434F94*/ PPC::Runtime::ASM::mflr(context->r0);
/*80438198 00434F98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8043819C 00434F9C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*804381A0 00434FA0*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*804381A4 00434FA4*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058CCE8 @ Get_MemoryOffset_HighBit);
/*804381A8 00434FA8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE3E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804381AC 00434FAC*/ PPC::Runtime::ASM::addi(context->r30, context->r4, STRUCT_BYTE4_COUNT_18058CCE8 @ Get_MemoryOffset_LowBit);
/*804381B0 00434FB0*/ PPC::Runtime::ASM::b(.L_804381C0);
RUNTIME_PPC_JUMP_LABEL(.L_804381B4, 0x804381B4) //this is a jump label
/*804381B4 00434FB4*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804381B8 00434FB8*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*804381BC 00434FBC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_804381C0, 0x804381C0) //this is a jump label
/*804381C0 00434FC0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804381C4 00434FC4*/ PPC::Runtime::ASM::bne(.L_804381B4);
/*804381C8 00434FC8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*804381CC 00434FCC*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x0);
/*804381D0 00434FD0*/ PPC::Runtime::ASM::stw(context->r31, STRUCT_BYTE4_COUNT_1805DE3E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804381D4 00434FD4*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x80);
/*804381D8 00434FD8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x100);
/*804381DC 00434FDC*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_804381E0, 0x804381E0) //this is a jump label
/*804381E0 00434FE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*804381E4 00434FE4*/ PPC::Runtime::ASM::b(.L_804381F4);
RUNTIME_PPC_JUMP_LABEL(.L_804381E8, 0x804381E8) //this is a jump label
/*804381E8 00434FE8*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804381EC 00434FEC*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*804381F0 00434FF0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_804381F4, 0x804381F4) //this is a jump label
/*804381F4 00434FF4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804381F8 00434FF8*/ PPC::Runtime::ASM::bne(.L_804381E8);
/*804381FC 00434FFC*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*80438200 00435000*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80438204 00435004*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x20);
/*80438208 00435008*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8043820C 0043500C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80438210 00435010*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*80438214 00435014*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80438218 00435018*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8043821C 0043501C*/ PPC::Runtime::ASM::blt(.L_804381E0);
/*80438220 00435020*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80438224 00435024*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80438228 00435028*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8043822C 0043502C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80438230 00435030*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80438234 00435034*/ PPC::Runtime::ASM::blr();
}