//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E2AC0(PPC::Runtime::GCContext* context)
{
/*800E2AC0 000DF8C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800E2AC4 000DF8C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E2AC8 000DF8C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E2ACC 000DF8CC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E2AD0 000DF8D0*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800E2AD4 000DF8D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800E2AD8 000DF8D8*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
/*800E2ADC 000DF8DC*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800E2AE0 000DF8E0*/ PPC::Runtime::ASM::beq(.L_800E2BB8);
/*800E2AE4 000DF8E4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800E2AE8 000DF8E8*/ PPC::Runtime::ASM::mr(context->r26, context->r29);
/*800E2AEC 000DF8EC*/ PPC::Runtime::ASM::b(.L_800E2B10);
RUNTIME_PPC_JUMP_LABEL(.L_800E2AF0, 0x800E2AF0) //this is a jump label
/*800E2AF0 000DF8F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*800E2AF4 000DF8F4*/ PPC::Runtime::ASM::add(context->r28, context->r0, context->r26);
/*800E2AF8 000DF8F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*800E2AFC 000DF8FC*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*800E2B00 000DF900*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800E2B04 000DF904*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*800E2B08 000DF908*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1c);
/*800E2B0C 000DF90C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E2B10, 0x800E2B10) //this is a jump label
/*800E2B10 000DF910*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800E2B14 000DF914*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800E2B18 000DF918*/ PPC::Runtime::ASM::blt(.L_800E2AF0);
/*800E2B1C 000DF91C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*800E2B20 000DF920*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*800E2B24 000DF924*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*800E2B28 000DF928*/ PPC::Runtime::ASM::lis(context->r5, String_Debug_ "grrangespline." Get_MemoryOffset_HighBit);
/*800E2B2C 000DF92C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_947 @ Get_MemoryOffset_HighBit);
/*800E2B30 000DF930*/ PPC::Runtime::ASM::lis(context->r3, lbl_805575DC @ Get_MemoryOffset_HighBit);
/*800E2B34 000DF934*/ PPC::Runtime::ASM::mr(context->r25, context->r26);
/*800E2B38 000DF938*/ PPC::Runtime::ASM::addi(context->r28, context->r5, String_Debug_ "grrangespline." Get_MemoryOffset_LowBit);
/*800E2B3C 000DF93C*/ PPC::Runtime::ASM::addi(context->r29, context->r4, MemoryOffset_947 @ Get_MemoryOffset_LowBit);
/*800E2B40 000DF940*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_805575DC @ Get_MemoryOffset_LowBit);
/*800E2B44 000DF944*/ PPC::Runtime::ASM::b(.L_800E2B9C);
RUNTIME_PPC_JUMP_LABEL(.L_800E2B48, 0x800E2B48) //this is a jump label
/*800E2B48 000DF948*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800E2B4C 000DF94C*/ PPC::Runtime::ASM::add(context->r27, context->r0, context->r25);
/*800E2B50 000DF950*/ PPC::Runtime::ASM::b(.L_800E2B88);
RUNTIME_PPC_JUMP_LABEL(.L_800E2B54, 0x800E2B54) //this is a jump label
/*800E2B54 000DF954*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E2B58 000DF958*/ PPC::Runtime::ASM::bgt(.L_800E2B6C);
/*800E2B5C 000DF95C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800E2B60 000DF960*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800E2B64 000DF964*/ PPC::Runtime::ASM::li(context->r4, 0xc1);
/*800E2B68 000DF968*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2B6C, 0x800E2B6C) //this is a jump label
/*800E2B6C 000DF96C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*800E2B70 000DF970*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E2B74 000DF974*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*800E2B78 000DF978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*800E2B7C 000DF97C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E2B80 000DF980*/ PPC::Runtime::ASM::lwzx(context->r4, context->r27, context->r0);
/*800E2B84 000DF984*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_800E2B88, 0x800E2B88) //this is a jump label
/*800E2B88 000DF988*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*800E2B8C 000DF98C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E2B90 000DF990*/ PPC::Runtime::ASM::bgt(.L_800E2B54);
/*800E2B94 000DF994*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x2c);
/*800E2B98 000DF998*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E2B9C, 0x800E2B9C) //this is a jump label
/*800E2B9C 000DF99C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r31));
/*800E2BA0 000DF9A0*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*800E2BA4 000DF9A4*/ PPC::Runtime::ASM::blt(.L_800E2B48);
/*800E2BA8 000DF9A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800E2BAC 000DF9AC*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*800E2BB0 000DF9B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800E2BB4 000DF9B4*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_800E2BB8, 0x800E2BB8) //this is a jump label
/*800E2BB8 000DF9B8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E2BBC 000DF9BC*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800E2BC0 000DF9C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E2BC4 000DF9C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E2BC8 000DF9C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800E2BCC 000DF9CC*/ PPC::Runtime::ASM::blr();
}