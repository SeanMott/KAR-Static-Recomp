//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80246CF4(PPC::Runtime::GCContext* context)
{
/*80246CF4 00243AF4*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x44);
/*80246CF8 00243AF8*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80246CFC 00243AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*80246D00 00243B00*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*80246D04 00243B04*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80246D08 00243B08*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80246D0C 00243B0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80246D10 00243B10*/ PPC::Runtime::ASM::ble(.L_80246D50);
RUNTIME_PPC_JUMP_LABEL(.L_80246D14, 0x80246D14) //this is a jump label
/*80246D14 00243B14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80246D18 00243B18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80246D1C 00243B1C*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x140);
/*80246D20 00243B20*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*80246D24 00243B24*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80246D28 00243B28*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*80246D2C 00243B2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xc);
/*80246D30 00243B30*/ PPC::Runtime::ASM::bne(.L_80246D44);
/*80246D34 00243B34*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*80246D38 00243B38*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*80246D3C 00243B3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80246D40 00243B40*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80246D44, 0x80246D44) //this is a jump label
/*80246D44 00243B44*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*80246D48 00243B48*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80246D4C 00243B4C*/ PPC::Runtime::ASM::bdnz(.L_80246D14);
RUNTIME_PPC_JUMP_LABEL(.L_80246D50, 0x80246D50) //this is a jump label
/*80246D50 00243B50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r7));
/*80246D54 00243B54*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*80246D58 00243B58*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80246D5C 00243B5C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80246D60 00243B60*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80246D64 00243B64*/ PPC::Runtime::ASM::ble(.L_80246DB0);
RUNTIME_PPC_JUMP_LABEL(.L_80246D68, 0x80246D68) //this is a jump label
/*80246D68 00243B68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r6));
/*80246D6C 00243B6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r6));
/*80246D70 00243B70*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x140);
/*80246D74 00243B74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80246D78 00243B78*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x24);
/*80246D7C 00243B7C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80246D80 00243B80*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*80246D84 00243B84*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80246D88 00243B88*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*80246D8C 00243B8C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xc);
/*80246D90 00243B90*/ PPC::Runtime::ASM::bne(.L_80246DA4);
/*80246D94 00243B94*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 5);
/*80246D98 00243B98*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*80246D9C 00243B9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*80246DA0 00243BA0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80246DA4, 0x80246DA4) //this is a jump label
/*80246DA4 00243BA4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x20);
/*80246DA8 00243BA8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80246DAC 00243BAC*/ PPC::Runtime::ASM::bdnz(.L_80246D68);
RUNTIME_PPC_JUMP_LABEL(.L_80246DB0, 0x80246DB0) //this is a jump label
/*80246DB0 00243BB0*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80246DB4 00243BB4*/ PPC::Runtime::ASM::blr();
}