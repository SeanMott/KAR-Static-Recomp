//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802B3B74(PPC::Runtime::GCContext* context)
{
/*802B3B74 002B0974*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802B3B78 002B0978*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B3B7C 002B097C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B3B80 002B0980*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B3B84 002B0984*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*802B3B88 002B0988*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B3B8C 002B098C*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*802B3B90 002B0990*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802B3B94 002B0994*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B3B98 002B0998*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*802B3B9C 002B099C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B3BA0 002B09A0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802B3BA4 002B09A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802B3BA8 002B09A8*/ PPC::Runtime::ASM::cmplw(context->r5, context->r3);
/*802B3BAC 002B09AC*/ PPC::Runtime::ASM::bne(.L_802B3BB8);
/*802B3BB0 002B09B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802B3BB4 002B09B4*/ PPC::Runtime::ASM::b(.L_802B3C04);
RUNTIME_PPC_JUMP_LABEL(.L_802B3BB8, 0x802B3BB8) //this is a jump label
/*802B3BB8 002B09B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B3BBC 002B09BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802B3BC0 002B09C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802B3BC4 002B09C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802B3BC8 002B09C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802B3BCC 002B09CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802B3BD0 002B09D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B3BD4 002B09D4*/ PPC::Runtime::ASM::b(.L_802B3BF0);
RUNTIME_PPC_JUMP_LABEL(.L_802B3BD8, 0x802B3BD8) //this is a jump label
/*802B3BD8 002B09D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802B3BDC 002B09DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B3BE0 002B09E0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
/*802B3BE4 002B09E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802B3BE8 002B09E8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802B3BEC 002B09EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_802B3BF0, 0x802B3BF0) //this is a jump label
/*802B3BF0 002B09F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B3BF4 002B09F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802B3BF8 002B09F8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*802B3BFC 002B09FC*/ PPC::Runtime::ASM::bne(.L_802B3BD8);
/*802B3C00 002B0A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_802B3C04, 0x802B3C04) //this is a jump label
/*802B3C04 002B0A04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B3C08 002B0A08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B3C0C 002B0A0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B3C10 002B0A10*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B3C14 002B0A14*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B3C18 002B0A18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B3C1C 002B0A1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802B3C20 002B0A20*/ PPC::Runtime::ASM::blr();
}